
//_________________________________________________________________________________________________________________________________________________________
//	Function to fond power of a number.

unsigned int uart_power(unsigned int b,unsigned int e)
{
	unsigned int r = 1;
	
	for( unsigned int i = 1 ; i <= e ; i ++ )
	{
		r = r * b; 	
	}

	return(r);
}

//_________________________________________________________________________________________________________________________________________________________
//	Function to initialize UART ( Default Baud Rate = 9600 ).

void uart_init()
{
	UART1_CR1 &= ~( 1 << UART1_CR1_M );		//	Set wordlength to 8 bits.

	//	Clear STOP bits 1 and 0 to set number of stop bits to 1.

	UART1_CR3 &= ~( 1 << UART1_CR3_STOP1 );		
	UART1_CR3 &= ~( 1 << UART1_CR3_STOP0 );	
	
	//	Set baud rate to 9600 when f_master = 2 ( MHz )

	UART1_BRR2 = 0x00;
	UART1_BRR1 = 0x0D;	
}

//_________________________________________________________________________________________________________________________________________________________
//	Function to transmit a byte of data.

#if defined(uart_transmitter_enable)				//	Macro to enable transmitter functions.

void uart_transmit_byte(unsigned char data)
{
	UART1_CR2 |= ( 1 << UART1_CR2_TEN );			//	Enable data transmission bit.
	UART1_DR = data;					//	Load required data into the UART data register.
	
	while( !( UART1_SR & ( 1 << UART1_SR_TC ) ) );		//	Wait until transmission is complete.
	UART1_SR &= ~( 1 << UART1_SR_TC );			//	Clear transmission complete bit.
}

//_________________________________________________________________________________________________________________________________________________________//	Function to print a text.

void uart_print_text(unsigned char* text)
{
	unsigned int character_count = 0;
		
	while( text[character_count] != '\0' )
	{
		if( character_count == 0 )
		{
			uart_transmit_byte(' ');
		}

		uart_transmit_byte(text[character_count]);
		character_count ++;
	}
}

//_________________________________________________________________________________________________________________________________________________________
//	Function to print a new line.

void uart_print_new_line()
{
	uart_print_text("\n\r");
}

//_________________________________________________________________________________________________________________________________________________________
//	Function to print an integer number.

void uart_print_integer_number(int num)
{
	unsigned char digit_stack[8];
	int temp = num;
	int d = 0;
	unsigned int i = 0;
	
	if( temp < 0 )
	{
		temp = -1 * temp;
		uart_transmit_byte('-');
	}
	
	do	
	{
		d = temp - 10*(unsigned int)(temp/10);
		digit_stack[i] = 48 + d;
		temp = temp / 10;
		i = i + 1;
	}while( temp != 0 );
	
	unsigned int L = i;
	i = 0;
	
	while( i < L )
	{
		uart_transmit_byte(digit_stack[L-1-i]);
		i ++;
	}
}

#endif		//	End of UART transmittr functions.

//_________________________________________________________________________________________________________________________________________________________

#if defined( uart_receiver_enable )
	
unsigned char uart_read_byte()
{
	UART1_CR2 |= ( 1 << UART1_CR2_REN );				//	Enable reception of data.
	while(  !( UART1_SR & ( 1 << UART1_SR_RXNE ) )  );		//	Wait until a character is received.
	UART1_SR &= ~( 1 << UART1_SR_RXNE );				//	Clear RXNE ( Receive buffer not empty bit ).
	return(UART1_DR);
}

#endif