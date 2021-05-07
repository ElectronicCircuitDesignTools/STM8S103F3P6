
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


void shift_register_74hc595_setup()
{
	//	Setup all associated pins as outputs in push-pull configuration without interrupt.
	
	SER_DDR 	|= 	( 1 << SER );
	SER_CR1 	|=	( 1 << SER );
 	RCLK_DDR 	|=	( 1 << RCLK );
	RCLK_CR1 	|=	( 1 << RCLK );
	SRCLK_DDR	|=	( 1 << SRCLK );
	SRCLK_CR1	|=	( 1 << SRCLK );

	SER_PORT 	&= ~( 1 << SER );
	RCLK_PORT 	&= ~( 1 << RCLK );
	SRCLK_PORT 	&= ~( 1 << SRCLK );		
}

void shift_register_74hc595_send_byte(unsigned char data_byte)
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