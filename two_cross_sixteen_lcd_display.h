
/*	LCD 2 x 16 LCD display command words.


						D7	D6	D5	D4	D3	D2	D1	D0
	
	Clear display			---->	0	0	0	0	0	0	0	1
	Return home			---->	0	0	0	0	0	0	1	x
	Entry mode set			---->	0	0	0	0	0	1	I/D	S
	Display on/off			---->	0	0	0	0	0	D	C	B	
	Cursor or display shift		---->	0	0	0	1	S/C	R/L	x	x
	Function set 			---->	0	0	1	DL	N	F	x	x
	Set CGRAM address		---->	0	1	AC5	AC4	AC3	AC2	AC1	AC0
	Set DDRAM address		---->	1	AC6	AC5	AC4	AC3	AC2	AC1	AC0

*/


#include <stdint.h>

#define F_CPU 2000000UL

#define RS_ODR	PD_ODR				//	RS = Register select.
#define RS_DDR	PD_DDR
#define RS	ODR3
#define RS_CR1	PD_CR1

#define EN_ODR	PD_ODR				//	EN = Enable.	
#define EN_DDR	PD_DDR
#define EN	ODR2
#define EN_CR1	PD_CR1

#define D7_ODR	PC_ODR				//	D7 to D4 = Command / data nibble bits.
#define D7_DDR	PC_DDR
#define D7	ODR7
#define D7_CR1	PC_CR1

#define D6_ODR	PC_ODR
#define D6_DDR	PC_DDR
#define D6	ODR6
#define D6_CR1	PC_CR1

#define D5_ODR	PC_ODR
#define D5_DDR	PC_DDR
#define D5	ODR5
#define D5_CR1	PC_CR1

#define D4_ODR	PC_ODR
#define D4_DDR	PC_DDR
#define D4	ODR4
#define D4_CR1	PC_CR1

//	LCD commands.

#define display_off				0x08
#define display_on_cursor_off_blink_off		0x0C
#define display_on_cursor_off_blink_on		0x0D
#define display_on_cursor_on_blink_off		0x0E
#define display_on_cursor_on_blink_on		0x0F
#define clear_display				0x01

//__________________________________________________________________________________________________________________________________________________________

//	Function to create time delay in steps of 1 milli-seconds.

void two_cross_sixteen_lcd_display_delay_ms(uint16_t delay_time)
{
	uint32_t delay_counter;
	
	for( delay_counter = 0 ; delay_counter < ( F_CPU/18000UL ) * delay_time ; delay_counter ++ )
	{
		__asm__("nop");
	}
}



//__________________________________________________________________________________________________________________________________________________________

//	Function to send a command word to 2 x 16 LCD display.

void two_cross_sixteen_lcd_display_send_command(unsigned char command_word)
{
	RS_ODR &= ~( 1 << RS );				//	Select command register.
	EN_ODR |= ( 1 << EN );				//	Make enable signal high.
	
	//	Load higher nibble of command word.

	if( ( command_word >> 7 ) & 0x01 )
	{
		D7_ODR |= ( 1 << D7 );
	}
	else
	{
		D7_ODR &= ~( 1 << D7 );
	}

	if( ( command_word >> 6 ) & 0x01 )
	{
		D6_ODR |= ( 1 << D6 );
	}
	else
	{
		D6_ODR &= ~( 1 << D6 );
	}

	if( ( command_word >> 5 ) & 0x01 )
	{
		D5_ODR |= ( 1 << D5 );
	}
	else
	{
		D5_ODR &= ~( 1 << D5 );
	}

	if( ( command_word >> 4 ) & 0x01 )
	{
		D4_ODR |= ( 1 << D4 );
	}
	else
	{
		D4_ODR &= ~( 1 << D4 );
	}

	EN_ODR &= ~( 1 << EN );				//	Make enable line LOW.


	EN_ODR |= ( 1 << EN );				//	Make enable signal high.
	
	//	Load lower nibble of command word.

	if( ( command_word >> 3 ) & 0x01 )
	{
		D7_ODR |= ( 1 << D7 );
	}
	else
	{
		D7_ODR &= ~( 1 << D7 );
	}

	if( ( command_word >> 2 ) & 0x01 )
	{
		D6_ODR |= ( 1 << D6 );
	}
	else
	{
		D6_ODR &= ~( 1 << D6 );
	}

	if( ( command_word >> 1 ) & 0x01 )
	{
		D5_ODR |= ( 1 << D5 );
	}
	else
	{
		D5_ODR &= ~( 1 << D5 );
	}

	if( ( command_word >> 0 ) & 0x01 )
	{
		D4_ODR |= ( 1 << D4 );
	}
	else
	{
		D4_ODR &= ~( 1 << D4 );
	}

	EN_ODR &= ~( 1 << EN );				//	Make enable line LOW.			
}




void two_cross_sixteen_lcd_display_send_data(unsigned char data_word)
{
	RS_ODR |= ( 1 << RS );				//	Select data register.
	EN_ODR |= ( 1 << EN );				//	Make enable signal high.
	
	//	Load higher nibble of data word.

	if( ( data_word >> 7 ) & 0x01 )
	{
		D7_ODR |= ( 1 << D7 );
	}
	else
	{
		D7_ODR &= ~( 1 << D7 );
	}

	if( ( data_word >> 6 ) & 0x01 )
	{
		D6_ODR |= ( 1 << D6 );
	}
	else
	{
		D6_ODR &= ~( 1 << D6 );
	}

	if( ( data_word >> 5 ) & 0x01 )
	{
		D5_ODR |= ( 1 << D5 );
	}
	else
	{
		D5_ODR &= ~( 1 << D5 );
	}

	if( ( data_word >> 4 ) & 0x01 )
	{
		D4_ODR |= ( 1 << D4 );
	}
	else
	{
		D4_ODR &= ~( 1 << D4 );
	}

	EN_ODR &= ~( 1 << EN );				//	Make enable line LOW.

	two_cross_sixteen_lcd_display_delay_ms(1);

	EN_ODR |= ( 1 << EN );				//	Make enable signal high.
	
	//	Load lower nibble of command word.

	if( ( data_word >> 3 ) & 0x01 )
	{
		D7_ODR |= ( 1 << D7 );
	}
	else
	{
		D7_ODR &= ~( 1 << D7 );
	}

	if( ( data_word >> 2 ) & 0x01 )
	{
		D6_ODR |= ( 1 << D6 );
	}
	else
	{
		D6_ODR &= ~( 1 << D6 );
	}

	if( ( data_word >> 1 ) & 0x01 )
	{
		D5_ODR |= ( 1 << D5 );
	}
	else
	{
		D5_ODR &= ~( 1 << D5 );
	}

	if( ( data_word >> 0 ) & 0x01 )
	{
		D4_ODR |= ( 1 << D4 );
	}
	else
	{
		D4_ODR &= ~( 1 << D4 );
	}

	EN_ODR &= ~( 1 << EN );				//	Make enable line LOW.			
}


//__________________________________________________________________________________________________________________________________________________________

//	Function to setup the 2 x 16 LCD display.

void two_cross_sixteen_lcd_display_setup()
{
	RS_DDR |= ( 1 << RS );
	RS_CR1 |= ( 1 << RS );
	EN_DDR |= ( 1 << EN );
	EN_CR1 |= ( 1 << EN );
	D7_DDR |= ( 1 << D7 );
	D7_CR1 |= ( 1 << D7 );
	D6_DDR |= ( 1 << D6 );
	D6_CR1 |= ( 1 << D6 );
	D5_DDR |= ( 1 << D5 );
	D5_CR1 |= ( 1 << D5 );
	D4_DDR |= ( 1 << D4 );
	D4_CR1 |= ( 1 << D4 );

	two_cross_sixteen_lcd_display_delay_ms(100);
	
	two_cross_sixteen_lcd_display_send_command(0x01);		//	Clear display.
	two_cross_sixteen_lcd_display_delay_ms(2);
	two_cross_sixteen_lcd_display_send_command(0x28);		//	5 x 8 characters , 2 lines , 4 - bit mode.
	two_cross_sixteen_lcd_display_delay_ms(2);
	two_cross_sixteen_lcd_display_send_command(0x0F);		//	Display on, cursor on, blink on.
	two_cross_sixteen_lcd_display_delay_ms(2);
	two_cross_sixteen_lcd_display_send_command(0x02);		//	Return cursor to home position.
	two_cross_sixteen_lcd_display_delay_ms(2);	
}

//__________________________________________________________________________________________________________________________________________________________

//	Function to print a character at a specified position of the 2 x 16 LCD display.

void two_cross_sixteen_lcd_display_print_character_at_position( unsigned char data_byte , unsigned char x_coordinate , unsigned char y_coordinate )
{
	/*
		To set the DDRAM address , command is : 	0	1	AC5	AC4	AC3	AC2	AC1	AC0
		
		In 5 x 8 character size , 4-bit display mode , DDRAM addresses are as follows : 
			
	x_coordinates -->	0	1	2	3	4	5	6	7	8	9	10	11	12	13	14	15	
	
	y_coordinates 	
		
	      	|		
		|
		v		      
		
		0		0x00	0x01	0x02	0x03	0x04	0x05	0x06	0x07	0x08	0x09	0x0A	0x0B	0x0C	0x0D	0x0E	0x0F


		1		0x40	0x41	0x42	0x43	0x44	0x45	0x46	0x47	0x48	0x49	0x4A	0x4B	0x4C	0x4D	0x4E	0x4F

	For characters along y_coordinate == 0 : command_word = 0x80 + x_coordinate.
	For characters along y_coordinate == 1 : command_word = 0x80 + ( 0x40 + x_coordinate ) = 0xC0 + x_coordinate.

	*/


	if( y_coordinate == 0x00 && x_coordinate <= 0x0F )
	{	
		two_cross_sixteen_lcd_display_send_command( 0x80 + x_coordinate);	
	}

	if( y_coordinate == 0x01 && x_coordinate <= 0x0F )
	{
		two_cross_sixteen_lcd_display_send_command( 0xC0 + x_coordinate );
	}

	two_cross_sixteen_lcd_display_send_data( data_byte );
}


//__________________________________________________________________________________________________________________________________________________________

//	Function to print a text ( array of characters ) on the 2 x 16 LCD display.

void two_cross_sixteen_lcd_display_print_text( unsigned char* text , unsigned char starting_x_coordinate , unsigned char starting_y_coordinate )
{
	unsigned int character_position_counter = 0;
	
	//	Set the initial x co-ordinate and y co-ordinate positions.

	unsigned char x_coordinate = starting_x_coordinate;		
	unsigned char y_coordinate = starting_y_coordinate;


	//	Execute until null character ('\0') is found in text.

	while( text[ character_position_counter ] != '\0' )
	{
		//	Print character in text at current position.
		two_cross_sixteen_lcd_display_print_character_at_position(text[character_position_counter],x_coordinate,y_coordinate);
	
		character_position_counter = character_position_counter + 1;		//	Increment character position counter.

		x_coordinate = x_coordinate + 0x01;					//	Increase x coordinate value.

		if( ( x_coordinate > 0x0F ) && ( y_coordinate == 0x00 ) )
		{
			x_coordinate = 0x00;
			y_coordinate = 0x01;
		}

		if( ( x_coordinate > 0x0F ) && ( y_coordinate == 0x01 ) )
		{
			x_coordinate = 0x00;
			y_coordinate = 0x00;
		}			
	}
}

//__________________________________________________________________________________________________________________________________________________________

//	Function to display an integer number on 2 x 16 LCD display.

#if defined( two_cross_sixteen_lcd_display_print_integer_number_enable )

void two_cross_sixteen_lcd_display_print_integer_number( int N , unsigned char starting_x_coordinate , unsigned char starting_y_coordinate )
{
	//unsigned char x_coordinate = starting_x_coordinate;
	//unsigned char y_coordinate = starting_y_coordinate;
	unsigned int t1 = 0;				//	Temporary variable 1.
	unsigned int t2 = 0;				//	Temporary variable 2.
	unsigned char L = 0;				//	Number of digits in the number N.
	unsigned int d = 0;				//	Holds a digit of the number N.
	unsigned char digit_count = 0x00;		//	Digit counter.

	if( N < 0 )					//	Take modulous of the number 'N' and pass it to 't1' and 't2'.
	{
		t1 = -1 * N;
		t2 = t1;
	}
	else
	{
		t1 = N;
		t2 = t1;
	}

	while( t1 > 0 )					//	Calculate the length of the number
	{
		L = L + 0x01;
		t1 = t1 / 10;	
	}

	while( (t2 > 0 ) && ( N >= 0 ) )
	{
		d = t2 - ( 10*(int)( t2 / 10 ) );									//	Extract a digit of the number.
		two_cross_sixteen_lcd_display_print_character_at_position						//	Function parameters on next line !
		( 0x30+(unsigned char)(d) , starting_x_coordinate + L - digit_count - 1 , starting_y_coordinate );	//	Print the digit at required position.
		digit_count = digit_count + 0x01;									//	Increment digit count.
		t2 = t2 / 10;												//	Divide 't2' by 10.
	}

	if( N < 0 )
	{
		two_cross_sixteen_lcd_display_print_character_at_position('-', starting_x_coordinate , starting_y_coordinate );
		
		while( (t2 > 0 ) && ( N < 0 ) )
		{
			d = t2 - ( 10*(int)( t2 / 10 ) );
			two_cross_sixteen_lcd_display_print_character_at_position		//	Function parameters on next line !
			( 0x30+(unsigned char)(d) , starting_x_coordinate + L - digit_count , starting_y_coordinate );
			digit_count = digit_count + 0x01;
			t2 = t2 / 10;	
		}

	}
}

#endif

//________________________________________________________________________________________________________________________________________________________________________

#if defined( two_cross_sixteen_lcd_display_print_fractional_number_enable )

void two_cross_sixteen_lcd_display_print_fractional_number( double N , unsigned char precision , unsigned char starting_x_coordinate , unsigned char starting_y_coordinate )
{
	unsigned long int t1 = 0;
	unsigned long int t2 = 0;
	unsigned char L = 0x00;
	unsigned char digit_count = 0x00;
	unsigned int d = 0;

	/*	Scale the fractional number to the required precision. */

	for( unsigned char i = 0x01 ; i <= precision ; i = i + 0x01 )
	{
		N = N*10;
	}

	/*	Calculate absolute value of 'N'		*/

	if( N >= 0 )
	{
		t1 = (int)N;
		t2 = t1;
	}
	else
	{
		t1 = (int)(-1*N);
		t2 = t1;
	}

	/*	Determine the number of significant digits	*/

	while( t1 > 0 )
	{
		L = L + 0x01;
		t1 = t1/10;
	}

	t1 = t2;

	/*	Extract digit and print it	*/

	if( N >= 0 )
	{
		while( t1 != 0 )
		{
			if( digit_count != precision )
			{
				d = t1 - 10*(int)(t1/10);
				two_cross_sixteen_lcd_display_print_character_at_position(0x30+d,starting_x_coordinate+L-digit_count,starting_y_coordinate);
				t1 = t1/10;
				digit_count = digit_count + 0x01;
			}

			if( digit_count == precision )
			{
				two_cross_sixteen_lcd_display_print_character_at_position('.',starting_x_coordinate+L-precision,starting_y_coordinate);
				digit_count = digit_count + 0x01;
			}
		}
	}

	if( N < 0 )
	{
		two_cross_sixteen_lcd_display_print_character_at_position('-',starting_x_coordinate,starting_y_coordinate);
	
		while( t1 != 0 )
		{
			if( digit_count != precision )
			{
				d = t1 - 10*(int)(t1/10);
				two_cross_sixteen_lcd_display_print_character_at_position(0x30+d,starting_x_coordinate+L-digit_count+0x01,starting_y_coordinate);
				t1 = t1/10;
				digit_count = digit_count + 0x01;
			}

			if( digit_count == precision )
			{
				two_cross_sixteen_lcd_display_print_character_at_position('.',starting_x_coordinate+L-precision+0x01,starting_y_coordinate);
				digit_count = digit_count + 0x01;
			}
		}
	}
	
}

#endif

//_________________________________________________________________________________________________________________________________________________________________________

//	Function to create a custom character.

#if defined( two_cross_sixteen_lcd_display_make_custom_character_enable )

void two_cross_sixteen_lcd_display_make_custom_character(unsigned char* custom_character,unsigned char custom_character_index)
{
	unsigned char ddram_data = 0x00;
	unsigned char cgram_address = 0x00;

	cgram_address |= ( custom_character_index << 3 );

	for( unsigned char row_index = 0x00 ; row_index <= 0x07 ; row_index = row_index + 0x01 )
	{
		two_cross_sixteen_lcd_display_send_command(0x40+row_index+cgram_address);
		two_cross_sixteen_lcd_display_send_data(custom_character[(int)row_index]);
	}
}

#endif