
#include<stdint.h>

#define F_CPU	2000000UL

#define SER_PORT		 		PD_ODR
#define SER		 			ODR1
#define SER_DDR					PD_DDR
#define SER_CR1					PD_CR1


#define RCLK_PORT			 	PD_ODR
#define RCLK					ODR2
#define RCLK_DDR				PD_DDR
#define RCLK_CR1				PD_CR1


#define SRCLK_PORT			 	PD_ODR
#define SRCLK					ODR3
#define SRCLK_DDR				PD_DDR
#define SRCLK_CR1				PD_CR1


//	LCD commands.

#define display_off				0x08
#define display_on_cursor_off_blink_off		0x0C
#define display_on_cursor_off_blink_on		0x0D
#define display_on_cursor_on_blink_off		0x0E
#define display_on_cursor_on_blink_on		0x0F
#define clear_display	


//	Function to create time delay in steps of 1 milli-seconds.

void two_cross_sixteen_lcd_display_with_74hc595_shift_register_delay_ms(uint16_t delay_time)
{
	uint32_t delay_counter;
	
	for( delay_counter = 0 ; delay_counter < ( F_CPU/18000UL ) * delay_time ; delay_counter ++ )
	{
		__asm__("nop");
	}
}



//_________________________________________________________________________________________________________________________________________________________________________

//	Function to send a byte of data to the 2x16 LCD display using the 74HC595 shift register.

void two_cross_sixteen_lcd_display_with_74hc595_shift_register_send_byte(unsigned char data_byte)
{
	for( unsigned int i = 0 ; i <= 7 ; i ++ )
	{
		if( ( data_byte >> (7-i) ) & 0x01 ) 
		{
			SER_PORT |= ( 1 << SER ); 
		}
		else
		{
			SER_PORT &= ~( 1 << SER );
		}

		SRCLK_PORT |= ( 1 << SRCLK );
		SRCLK_PORT &= ~( 1 << SRCLK ); 
	}

	RCLK_PORT |= ( 1 << RCLK );
	RCLK_PORT &= ~( 1 << RCLK );
}

//_________________________________________________________________________________________________________________________________________________________________________

/*
	Serial data word format :  0  |  0  |  RS  |  EN  |  D7  |  D6  |  D5  |  D4  |
*/

//_________________________________________________________________________________________________________________________________________________________________________

//	Function to send a command word to the 2*16 LCD display.

void two_cross_sixteen_lcd_display_with_74hc595_shift_register_send_command(unsigned char command_word)
{
	two_cross_sixteen_lcd_display_with_74hc595_shift_register_send_byte( 0x10 + ( ( command_word >> 4 ) & 0x0F ) );
	//two_cross_sixteen_lcd_display_with_74hc595_shift_register_delay_ms(200);
	two_cross_sixteen_lcd_display_with_74hc595_shift_register_send_byte( 0x00 + ( ( command_word >> 4 ) & 0x0F ) );
	//two_cross_sixteen_lcd_display_with_74hc595_shift_register_delay_ms(200);

	two_cross_sixteen_lcd_display_with_74hc595_shift_register_delay_ms(1);

	two_cross_sixteen_lcd_display_with_74hc595_shift_register_send_byte( 0x10 + ( command_word & 0x0F ) );
	//two_cross_sixteen_lcd_display_with_74hc595_shift_register_delay_ms(200);
	two_cross_sixteen_lcd_display_with_74hc595_shift_register_send_byte( 0x00 + ( command_word & 0x0F ) );
	//two_cross_sixteen_lcd_display_with_74hc595_shift_register_delay_ms(200);
}

//_________________________________________________________________________________________________________________________________________________________________________

//	Function to send a data word to the 2*16 LCD display.

void two_cross_sixteen_lcd_display_with_74hc595_shift_register_send_data(unsigned char data_word)
{
	two_cross_sixteen_lcd_display_with_74hc595_shift_register_send_byte( 0x30 + ( ( data_word >> 4 ) & 0x0F ) );
	//two_cross_sixteen_lcd_display_with_74hc595_shift_register_delay_ms(200);
	two_cross_sixteen_lcd_display_with_74hc595_shift_register_send_byte( 0x20 + ( ( data_word >> 4 ) & 0x0F ) );
	//two_cross_sixteen_lcd_display_with_74hc595_shift_register_delay_ms(200);

	two_cross_sixteen_lcd_display_with_74hc595_shift_register_delay_ms(1);	

	two_cross_sixteen_lcd_display_with_74hc595_shift_register_send_byte( 0x30 + ( data_word & 0x0F ) );
	//two_cross_sixteen_lcd_display_with_74hc595_shift_register_delay_ms(200);
	two_cross_sixteen_lcd_display_with_74hc595_shift_register_send_byte( 0x20 + ( data_word & 0x0F ) );
	//two_cross_sixteen_lcd_display_with_74hc595_shift_register_delay_ms(200);	
}

//_________________________________________________________________________________________________________________________________________________________

//	Function to setup the module.

void two_cross_sixteen_lcd_display_with_74hc595_shift_register_setup()
{

	SER_DDR 	|= 	( 1 << SER );
	SER_CR1 	|=	( 1 << SER );
 	RCLK_DDR 	|=	( 1 << RCLK );
	RCLK_CR1 	|=	( 1 << RCLK );
	SRCLK_DDR	|=	( 1 << SRCLK );
	SRCLK_CR1	|=	( 1 << SRCLK );

	SER_PORT 	&= ~( 1 << SER );
	RCLK_PORT 	&= ~( 1 << RCLK );
	SRCLK_PORT 	&= ~( 1 << SRCLK );		

	//	Setup all associated pins as outputs in push-pull configuration without interrupt.
	
	//two_cross_sixteen_lcd_display_with_74hc595_shift_register_delay_ms(100);
	
	two_cross_sixteen_lcd_display_with_74hc595_shift_register_send_command(0x01);		//	Clear display.
	two_cross_sixteen_lcd_display_with_74hc595_shift_register_delay_ms(2);
	two_cross_sixteen_lcd_display_with_74hc595_shift_register_send_command(0x28);		//	5 x 8 characters , 2 lines , 4 - bit mode.
	two_cross_sixteen_lcd_display_with_74hc595_shift_register_delay_ms(2);
	two_cross_sixteen_lcd_display_with_74hc595_shift_register_send_command(0x0F);		//	Display on, cursor on, blink on.
	two_cross_sixteen_lcd_display_with_74hc595_shift_register_delay_ms(2);
	two_cross_sixteen_lcd_display_with_74hc595_shift_register_send_command(0x02);		//	Return cursor to home position.
	two_cross_sixteen_lcd_display_with_74hc595_shift_register_delay_ms(2);	

}

//__________________________________________________________________________________________________________________________________________________________

//	Function to print a character at a specified position of the 2 x 16 LCD display.

void two_cross_sixteen_lcd_display_with_74hc595_shift_register_print_character_at_position( unsigned char data_byte , unsigned char x_coordinate , unsigned char y_coordinate )
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
		two_cross_sixteen_lcd_display_with_74hc595_shift_register_send_command( 0x80 + x_coordinate);	
	}

	if( y_coordinate == 0x01 && x_coordinate <= 0x0F )
	{
		two_cross_sixteen_lcd_display_with_74hc595_shift_register_send_command( 0xC0 + x_coordinate );
	}

	two_cross_sixteen_lcd_display_with_74hc595_shift_register_send_data( data_byte );
}


//__________________________________________________________________________________________________________________________________________________________

//	Function to print a text ( array of characters ) on the 2 x 16 LCD display.

void two_cross_sixteen_lcd_display_with_74hc595_shift_register_print_text( unsigned char* text , unsigned char starting_x_coordinate , unsigned char starting_y_coordinate )
{
	unsigned int character_position_counter = 0;
	
	//	Set the initial x co-ordinate and y co-ordinate positions.

	unsigned char x_coordinate = starting_x_coordinate;		
	unsigned char y_coordinate = starting_y_coordinate;


	//	Execute until null character ('\0') is found in text.

	while( text[ character_position_counter ] != '\0' )
	{
		//	Print character in text at current position.
		two_cross_sixteen_lcd_display_with_74hc595_shift_register_print_character_at_position(text[character_position_counter],x_coordinate,y_coordinate);
	
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

#if defined( two_cross_sixteen_lcd_display_with_74hc595_shift_register_print_integer_number_enable )

void two_cross_sixteen_lcd_display_with_74hc595_shift_register_print_integer_number( int N , unsigned char starting_x_coordinate , unsigned char starting_y_coordinate )
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
		two_cross_sixteen_lcd_display_with_74hc595_shift_register_print_character_at_position						//	Function parameters on next line !
		( 0x30+(unsigned char)(d) , starting_x_coordinate + L - digit_count - 1 , starting_y_coordinate );	//	Print the digit at required position.
		digit_count = digit_count + 0x01;									//	Increment digit count.
		t2 = t2 / 10;												//	Divide 't2' by 10.
	}

	if( N < 0 )
	{
		two_cross_sixteen_lcd_display_with_74hc595_shift_register_print_character_at_position('-', starting_x_coordinate , starting_y_coordinate );
		
		while( (t2 > 0 ) && ( N < 0 ) )
		{
			d = t2 - ( 10*(int)( t2 / 10 ) );
			two_cross_sixteen_lcd_display_with_74hc595_shift_register_print_character_at_position		//	Function parameters on next line !
			( 0x30+(unsigned char)(d) , starting_x_coordinate + L - digit_count , starting_y_coordinate );
			digit_count = digit_count + 0x01;
			t2 = t2 / 10;	
		}

	}
}

#endif

//________________________________________________________________________________________________________________________________________________________________________

#if defined( two_cross_sixteen_lcd_display_with_74hc595_shift_register_print_fractional_number_enable )

void two_cross_sixteen_lcd_display_with_74hc595_shift_register_print_fractional_number( double N , unsigned char precision , unsigned char starting_x_coordinate , unsigned char starting_y_coordinate )
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
				two_cross_sixteen_lcd_display_with_74hc595_shift_register_print_character_at_position(0x30+d,starting_x_coordinate+L-digit_count,starting_y_coordinate);
				t1 = t1/10;
				digit_count = digit_count + 0x01;
			}

			if( digit_count == precision )
			{
				two_cross_sixteen_lcd_display_with_74hc595_shift_register_print_character_at_position('.',starting_x_coordinate+L-precision,starting_y_coordinate);
				digit_count = digit_count + 0x01;
			}
		}
	}

	if( N < 0 )
	{
		two_cross_sixteen_lcd_display_with_74hc595_shift_register_print_character_at_position('-',starting_x_coordinate,starting_y_coordinate);
	
		while( t1 != 0 )
		{
			if( digit_count != precision )
			{
				d = t1 - 10*(int)(t1/10);
				two_cross_sixteen_lcd_display_with_74hc595_shift_register_print_character_at_position(0x30+d,starting_x_coordinate+L-digit_count+0x01,starting_y_coordinate);
				t1 = t1/10;
				digit_count = digit_count + 0x01;
			}

			if( digit_count == precision )
			{
				two_cross_sixteen_lcd_display_with_74hc595_shift_register_print_character_at_position('.',starting_x_coordinate+L-precision+0x01,starting_y_coordinate);
				digit_count = digit_count + 0x01;
			}
		}
	}
	
}

#endif

//_________________________________________________________________________________________________________________________________________________________________________

//	Function to create a custom character.

#if defined( two_cross_sixteen_lcd_display_make_custom_character_enable )

void two_cross_sixteen_lcd_display_with_74hc595_shift_register_make_custom_character(unsigned char* custom_character,unsigned char custom_character_index)
{
	unsigned char ddram_data = 0x00;
	unsigned char cgram_address = 0x00;

	cgram_address |= ( custom_character_index << 3 );

	for( unsigned char row_index = 0x00 ; row_index <= 0x07 ; row_index = row_index + 0x01 )
	{
		two_cross_sixteen_lcd_display_with_74hc595_shift_register_send_command(0x40+row_index+cgram_address);
		two_cross_sixteen_lcd_display_with_74hc595_shift_register_send_data(custom_character[(int)row_index]);
	}
}

#endif

