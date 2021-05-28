

#define _HW_REG_(hw_reg_address) (*(unsigned char*)( 0x5000 +hw_reg_address ) )



//--------------------------------------------------------I/O PORT HARDWARE REGISTER MAP------------------------------------------------------------------//

#if defined(using_io_ports)

//	Port A.

//#if defined(using_port_a)

#define PA_ODR	*(unsigned char*) 0x5000 		//	Port A data output latch register.
#define PA_IDR	*(unsigned char*) 0x5001		//	Port A input pin value register.
#define PA_DDR	*(unsigned char*) 0x5002		//	Port A data direction register
#define PA_CR1	*(unsigned char*) 0x5003		//	Port A control register 1
#define PA_CR2	*(unsigned char*) 0x5004		//	Port A control register 2

//#endif

//__________________________________________________________________________________________________________________________________________________________

//	Port B.

//#if defined(using_port_b)

#define PB_ODR	*(unsigned char*) 0x5005		//	Port B data otuput latch register.
#define PB_IDR	*(unsigned char*) 0x5006		//	Port B input value register.
#define PB_DDR	*(unsigned char*) 0x5007		//	Port B data direction register.
#define PB_CR1	*(unsigned char*) 0x5008		//	Port B control register 1.
#define PB_CR2	*(unsigned char*) 0x5009		//	Port B control register 2.

//#endif

//__________________________________________________________________________________________________________________________________________________________

//	Port C.

//#if defined(using_port_c)

#define PC_ODR	*(unsigned char*) 0x500A		//	Port C data otuput latch register.
#define PC_IDR	*(unsigned char*) 0x500B		//	Port C input value register.
#define PC_DDR	*(unsigned char*) 0x500C		//	Port C data direction register.
#define PC_CR1	*(unsigned char*) 0x500D		//	Port C control register 1.
#define PC_CR2	*(unsigned char*) 0x500E		//	Port C control register 2.

//#endif

//__________________________________________________________________________________________________________________________________________________________

//	Port D.

//#if defined(using_port_d)

#define PD_ODR	*(unsigned char*) 0x500F		//	Port D data otuput latch register.
#define PD_IDR	*(unsigned char*) 0x5010		//	Port D input value register.
#define PD_DDR	*(unsigned char*) 0x5011		//	Port D data direction register.
#define PD_CR1	*(unsigned char*) 0x5012		//	Port D control register 1.
#define PD_CR2	*(unsigned char*) 0x5013		//	Port D control register 2.

//#endif

//__________________________________________________________________________________________________________________________________________________________

//	Port E.

//#if defined(using_port_e)

#define PE_ODR	*(unsigned char*) 0x5014		//	Port E data otuput latch register.
#define PE_IDR	*(unsigned char*) 0x5015		//	Port E input value register.
#define PE_DDR	*(unsigned char*) 0x5016		//	Port E data direction register.
#define PE_CR1	*(unsigned char*) 0x5017		//	Port E control register 1.
#define PE_CR2	*(unsigned char*) 0x5018		//	Port E control register 2.

//#endif

//__________________________________________________________________________________________________________________________________________________________

//	Port F.

//#if defined(using_port_f)

#define PF_ODR	*(unsigned char*) 0x5019		//	Port F data otuput latch register.
#define PF_IDR	*(unsigned char*) 0x501A		//	Port F input value register.
#define PF_DDR	*(unsigned char*) 0x501B		//	Port F data direction register.
#define PF_CR1	*(unsigned char*) 0x501C		//	Port F control register 1.
#define PF_CR2	*(unsigned char*) 0x501D		//	Port F control register 2.

//#endif


//-------------------------------------------------------I/O PORT HARDWARE REGISTER BITS-----------------------------------------------------------------//

//#if defined(using_io_ports)

//	Output data latch register bits.

#define ODR7	7
#define ODR6	6
#define ODR5	5
#define ODR4	4
#define ODR3	3
#define ODR2	2
#define ODR1	1
#define ODR0	0

//__________________________________________________________________________________________________________________________________________________________

//	Input data value register bits.

#define IDR7	7
#define IDR6	6
#define IDR5	5
#define IDR4	4
#define IDR3	3
#define IDR2	2
#define IDR1	1
#define IDR0	0

//__________________________________________________________________________________________________________________________________________________________

//	Data direction latch register bits.

#define DDR7	7
#define DDR6	6
#define DDR5	5
#define DDR4	4
#define DDR3	3
#define DDR2	2
#define DDR1	1
#define DDR0	0

//__________________________________________________________________________________________________________________________________________________________

//	Port configuration register 1 bits.

#define C17	7
#define C16	6
#define C15	5
#define C14	4
#define C13	3
#define C12	2
#define C11	1
#define C10	0

//__________________________________________________________________________________________________________________________________________________________

//	Port configuration register 2 bits.

#define C27	7
#define C26	6
#define C25	5
#define C24	4
#define C23	3
#define C22	2
#define C21	1
#define C20	0

#endif

//__________________________________________________________________________________________________________________________________________________________

 







//-------------------------------------------GENERAL HARDWARE REGISTER & BIT DEFINITIONS----------------------------------------------------------------//

//	Block Name : Flash.

#if defined(using_flash)

#define FLASH_CR1	*(unsigned char*) 0x505A		//	Flash control register 1.
#define FLASH_CR2	*(unsigned char*) 0x505B		//	Flash control register 2.
#define FLASH_NCR2	*(unsigned char*) 0x505C		//	Flash complementary control register 2.
#define FLASH_FPR	*(unsigned char*) 0x505D		//	Flash protection register.
#define FLASH_NFPR	*(unsigned char*) 0x505E		//	Flash completentary protection register.
#define FLASH_IAPSR	*(unsigned char*) 0x505F		//	Flash in-application programming status register.
#define FLASH_PUKR	*(unsigned char*) 0x5062		//	Flash program memory unprotection register.
#define FLASH_DUKR	*(unsigned char*) 0x5063		//	Data EEPROM unprotection register.

//	Register : FLASH_CR1

#define FLASH_CR1_HALT 	3		//	Power-Down in halt mode.
#define FLASH_CR1_AHALT 	2		//	Power-Down in active halt mode.
#define FLASH_CR1_IE	1		//	Flash Interrupt Enable.
#define FLASH_CR1_FIX	0		//	Fixed Byte programming time.

//	Register : FLASH_CR2

#define FLASH_CR2_OPT	7		//	Write option bytes.
#define FLASH_CR2_WPRG	6		//	Word Programming.
#define FLASH_CR2_ERASE	5		//	Block erase.
#define FLASH_CR2_FPRG	4		//	Fast block programming.
#define FLASH_CR2_PRG	0		//	Standard programming.

//	Register : FLASH_NCR2

#define FLASH_NCR2_NOPT	7		//	Write option bytes.
#define FLASH_NCR2_NWPRG	6		//	Word Programming.
#define FLASH_NCR2_NERASE	5		//	Block erase.
#define FLASH_NCR2_NFPRG	4		//	Fast block programming.
#define FLASH_NCR2_NPRG	0		//	Standard programming.

//	Register : FLASH_FPR

#define FLASH_FPR_WPB5	5		//	User boot code area protection bit 5.
#define FLASH_FPR_WPB4	4		//	User boot code area protection bit 4.
#define FLASH_FPR_WPB3	3		//	User boot code area protection bit 3.
#define FLASH_FPR_WPB2	2		//	User boot code area protection bit 2.
#define FLASH_FPR_WPB1	1		//	User boot code area protection bit 1.
#define FLASH_FPR_WPB0	0		//	User boot code area protection bit 0.

//	Register : FLASH_NFPR

#define FLASH_NFPR_NWPB5	5		//	User boot code area protection bit 5.
#define FLASH_NFPR_NWPB4	4		//	User boot code area protection bit 4.
#define FLASH_NFPR_NWPB3	3		//	User boot code area protection bit 3.
#define FLASH_NFPR_NWPB2	2		//	User boot code area protection bit 2.
#define FLASH_NFPR_NWPB1	1		//	User boot code area protection bit 1.
#define FLASH_NFPR_NWPB0	0		//	User boot code area protection bit 0.

//	Register : FLASH_IAPSR.

#define FLASH_IAPSR_HVOFF		6	//	End of high voltage flag.
#define FLASH_IAPSR_DUL		3	//	Data EEPROM area unlocked flag.
#define FLASH_IAPSR_EOP		2	//	End of programming flag.
#define FLASH_IAPSR_PUL		1	//	Flash program memory unlocked flag.
#define FLASH_IAPSR_WR_PG_DIS	0	//	Write attempted to protected page flag.

#endif

//__________________________________________________________________________________________________________________________________________________________

//	Block name : ITC

#if defined(using_itc)

#define EXTI_CR1 *(unsigned char*)	0x50A0		//	External interrupt control register 1.
#define EXTI_CR2 *(unsigned char*)	0x50A1		//	External interrupt control register 2.

//	Register name : EXTI_CR1

#define EXTI_CR1_PDIS1	7	//	Port D external interrupt sensitivity bit 1.
#define EXTI_CR1_PDIS0	6	//	Port D external interrupt sensitivity bit 0.
#define EXTI_CR1_PCIS1	5	//	Port C external interrupt sensitivity bit 1.
#define EXTI_CR1_PCIS0	4	//	Port C external interrupt sensitivity bit 0.
#define EXTI_CR1_PBIS1	3	//	Port B external interrupt sensitivity bit 1.
#define EXTI_CR1_PBIS0	2	//	Port B external interrupt sensitivity bit 0.
#define EXTI_CR1_PAIS1	1	//	Port A external interrupt sensitivity bit 1.
#define EXTI_CR1_PAIS0	0	//	Port A external interrupt sensitivity bit 0.

//	Register name : EXTI_CR2.

#define EXTI_CR2_TLIS	2	//	Top level interrupt sensitivity.
#define EXTI_CR2_PEIS1	1	//	Port E interrupt sensitivity bit 1.
#define EXTI_CR2_PEIS0	0	//	Port E interrupt sensitivity bit 0.	

#endif

//__________________________________________________________________________________________________________________________________________________________

//	Block name : RST.

#if defined(using_rst)

#define RST_SR *(unsigned char*)	0x50B3	//	Reset status register.

//	Register name : RST_SR.

#define RST_SR_EMCF	4	//	EMC reset flag.
#define RST_SR_SWIMF	3	//	SWIM reset flag.
#define RST_SR_ILLOPF	2	//	Illegal op-code reset flag.
#define RST_SR_IWDGF	1	//	Independent watchdog reset flag.
#define RST_SR_WWDGF	0	//	Window watchdog reset flag.

#endif

//__________________________________________________________________________________________________________________________________________________________

//	Block name : CLK.

#if defined(using_clk)

#define CLK_ICKR	*(unsigned char*) 0x50C0		//	Internal clock control register.
#define CLK_ECKR	*(unsigned char*) 0x50C1		//	External clocl control register.
#define CLK_CMSR	*(unsigned char*) 0x50C3		//	Clock master status register.
#define CLK_SWR		*(unsigned char*) 0x50C4		//	Clock master switch register.
#define CLK_SWCR	*(unsigned char*) 0x50C5		//	Clock master switch control register.
#define CLK_CKDIVR	*(unsigned char*) 0x50C6		//	Clock divider register.
#define CLK_PCKENR1	*(unsigned char*) 0x50C7		//	Peripheral clock gating register 1.
#define CLK_CSSR	*(unsigned char*) 0x50C8		//	Clock security system register.
#define CLK_CCOR	*(unsigned char*) 0x50C9		//	Configurable clock control register.
#define CLK_PCKENR2	*(unsigned char*) 0x50CA		//	Peripheral clock gating register 2.
#define CLK_CANCCR	*(unsigned char*) 0x50CB		//	CAN clock control register.
#define CLK_HSITRIMR	*(unsigned char*) 0x50CC		//	HSI clock calibration trimming register.
#define CLK_SWIMCCR	*(unsigned char*) 0x50CD		//	SWIM clock control register.

//	Register name : CLK_ICKR.

#define CLK_ICKR_REGAH	5		//	Regulator power off in active halt mode.
#define CLK_ICKR_LSIRDY	4		//	Low speed internal oscillator ready.
#define CLK_ICKR_LSIEN	3		//	Low speed internal RC oscillator enable.
#define CLK_ICKR_FHWU	2		//	Fast wakeup from halt/active-halt modes.
#define CLK_ICKR_HSIRDY	1		//	High speed internal oscillator ready.
#define CLK_ICKR_HSIEN	0		//	High speed internal RC oscillator enable.
	
//	Register name : CLK_ECKR.

#define CLK_ECKR_HSERDY	1		//	High speed external crystal oscillator ready.
#define CLK_ECKR_HSEEN	0		//	High speed external crystal oscillator enable.

//	Register name : CLK_SWCR.

#define CLK_SWCR_SWIF	3		//	Clock switch interrupt flag.
#define CLK_SWCR_SWIEN	2		//	Clock switch interrupt enable.
#define CLK_SWCR_SWEN	1		//	Switch start or stop.
#define CLK_SWCR_SWBSY	0		//	Switch busy.

//	Register name : CLK_CKDIVR.

#define CLK_CKDIVR_HSIDIV1		4	//	High speed internal clock prescalar bit 1.
#define CLK_CKDIVR_HSIDIV0		3	//	High speed internal clock prescalar bit 0.
#define CLK_CKDIVR_CPUDIV2		2	//	CPU clock prescalar bit 2.
#define CLK_CKDIVR_CPUDIV1		1	//	CPU clock prescalar bit 1.
#define CLK_CKDIVR_CPUDIV0		0	//	CPU clock prescalar bit 0.

//	Register name : CLK_CSSR.

#define CLK_CSSR_CSSD		3	//	Clock security system detection.
#define CLK_CSSR_CSSDIE		2	//	Clock security system detection interrupt enable.
#define CLK_CSSR_AUX		1	//	Auxillary clock connected to master clock.
#define CLK_CSSR_CSSEN		0	//	Clock security system enable.

//	Register name : CLK_CCOR.

#define CLK_CCOR_CCOBSY		6	//	Configurable clock output busy.
#define CLK_CCOR_CCORDY		5	//	Configurable clock output ready.
#define CLK_CCOR_CCOSEL3		4	//	Configurable clock output selection bit 3.
#define CLK_CCOR_CCOSEL2		3	//	Configurable clock output selection bit 2.
#define CLK_CCOR_CCOSEL1		2	//	Configurable clock output selection bit 1.
#define CLK_CCOR_CCOSEL0		1	//	Configurable clock output selection bit 0.
#define CLK_CCOR_CCOEN		0	//	Configurable clock output enable.

//	Register name : CLK_HSITRIMR.

#define CLK_HSITRIMR_HSITRIM3	3	//	HSI trimming value bit 3.
#define CLK_HSITRIMR_HSITRIM2	2	//	HSI trimming value bit 2.
#define CLK_HSITRIMR_HSITRIM1	1	//	HSI trimming value bit 1.
#define CLK_HSITRIMR_HSITRIM0	0	//	HSI trimming value bit 0.

//	Register name : CLK_SWIMCCR.

#define CLK_SWIMCCR_SWIMCLK		0	//	SWIM clock driver.

#endif

//__________________________________________________________________________________________________________________________________________________________

//	Block name : WWDG ( Window watchdog timer ).

#if defined(using_wwdg)

#define WWDG_CR		*(unsigned char*) 0x50D1		//	WWDG control register.
#define WWDG_WR		*(unsigned char*) 0x50D2		//	WWDG window register.


//	Register name : WWDG_CR.

#define	WWDG_CR_WDGA	7		//	Activation bit.
#define WWDG_CR_T6	6		//	7-bit counter ( bit 6 ). 	
#define WWDG_CR_T5	5		//	7-bit counter ( bit 5 ).
#define WWDG_CR_T4	4		//	7-bit counter ( bit 4 ).
#define WWDG_CR_T3	3		//	7-bit counter ( bit 3 ).
#define WWDG_CR_T2	2		//	7-bit counter ( bit 2 ).
#define WWDG_CR_T1	1		//	7-bit counter ( bit 1 ).
#define WWDG_CR_T0	0		//	7-bit counter ( bit 0 ).

#endif

//__________________________________________________________________________________________________________________________________________________________

//	Block name : IWDG ( Independent watchdog timer ).

#if defined(using_iwdg)

#define IWDG_KR		*(unsigned char*) 0x50E0		//	IWDG key register.
#define IWDG_PR		*(unsigned char*) 0x50E1		//	IWDG prescalar register.
#define IWDG_RLR	*(unsigned char*) 0x50E2		//	IWDG reload register.	

//	Register name : IWDG_PR.

#define IWDG_PR_PR2	2
#define IWDG_PR_PR1	1
#define IWDG_PR_PR0	0 

#endif	

//__________________________________________________________________________________________________________________________________________________________

//	Block name : AWU ( Auto wakeup unit ).

#if defined(using_awu)

#define AWU_CSR1	*(unsigned char*) 0x50F0		//	AWU control/status register 1.
#define AWU_APR		*(unsigned char*) 0x50F1		//	AWU asynchronous prescalar buffer register.
#define AWU_TBR		*(unsigned char*) 0x50F2		//	AWU timebase selection register.

//	Register name : AWU_CSR.

#define AWU_CSR_AWUF	5		//	Auto-wakeup flag.
#define AWU_CSR_AWEN	4		//	Auto-wakeup enable.
#define AWU_CSR_MSR	0		//	Measurement enable.

//	Register name : AWU_TBR.

#define AWU_TBR_AWUTB3	3		//	Auto-wakeup timebase selection bit 3.
#define AWU_TBR_AWUTB2	2		//	Auto-wakeup timebase selection bit 2.
#define AWU_TBR_AWUTB1	1		//	Auto-wakeup timebase selection bit 1.
#define AWU_TBR_AWUTB0	0		//	Auto-wakeup timebase selection bit 0.

#endif

//__________________________________________________________________________________________________________________________________________________________

//	Block name : BEEP

#if defined(using_beep)

#define BEEP_CSR	*(unsigned char*) 0x50F3	//	Beep control/status register.

//	Register name : BEEP_CSR.

#define BEEP_CSR_BEEPSEL1	7		//	Beep selection bit 1.
#define BEEP_CSR_BEEPSEL0	6		//	Beep selection bit 0.
#define BEEP_CSR_BEEPEN		5		//	Beep enable.
#define BEEP_CSR_BEEPDIV4	4		//	Beep prescale divider bit 4.		
#define BEEP_CSR_BEEPDIV3	3		//	Beep prescale divider bit 3.
#define BEEP_CSR_BEEPDIV2	2		//	Beep prescale divider bit 2.
#define BEEP_CSR_BEEPDIV1	1		//	Beep prescale divider bit 1.
#define BEEP_CSR_BEEPDIV0	0		//	Beep prescale divider bit 0.

#endif

//__________________________________________________________________________________________________________________________________________________________

//	Block name : SPI.

#if defined(using_spi)

#define SPI_CR1		*(unsinged char*) 0x5200	//	SPI control register 1.
#define SPI_CR2		*(unsigned char*) 0x5201	//	SPI control register 2.
#define SPI_ICR		*(unsigned char*) 0x5202	//	SPI interrupt control register.
#define SPI_SR		*(unsigned char*) 0x5203	//	SPI status register.
#define SPI_DR		*(unsigned char*) 0x5204	//	SPI data register.
#define SPI_CRCPR	*(unsigned char*) 0x5205	//	SPI CRC polynomial register.
#define SPI_RXCRCR	*(unsigned char*) 0x5206	//	SPI Rx CRC register.
#define SPI_TXCRCR	*(unsigned char*) 0x5207	//	SPI Tx CRC register.

//	Register name : SPI_CR1.

#define SPI_CR1_LSBFIRST	7		//	LSB first.
#define SPI_CR1_SPE	 	6		//	SPI enable.
#define SPI_CR1_BR2		5		//	Baud rate control bit 2
#define SPI_CR1_BR1		4		//	Baud rate control bit 1.
#define SPI_CR1_BR0		3		//	Baud rate control bit 0.
#define SPI_CR1_MSTR		2		//	Master selection.
#define SPI_CR1_CPOL		1		//	Clock polarity.
#define SPI_CR1_CPHA		0		//	Clock phase.

//	Register name : SPI_CR2.

#define SPI_CR2_BDM		7		//	Bidirectional data mode enable.
#define SPI_CR2_BDOE		6		//	Input or output enable in bidirectional mode.
#define SPI_CR2_CRCEN		5		//	Hardware CRC calculation enable.
#define SPI_CR2_CRCNEXT		4		//	Transmit CRC next.
#define SPI_CR2_RXONLY		2		//	Receive only.
#define SPI_CR2_SSM		1		//	Software slave management.
#define SPI_CR2_SSI		0		//	Internal slave select bit.

//	Register name : SPI_ICR.

#define SPI_ICR_TXIE		7		//	Tx buffer empty interrupt enable.
#define SPI_ICR_RXIE		6		//	Rx buffer not empty interrupt enable.
#define SPI_ICR_ERRIE		5		//	Error interrupt enable.
#define SPI_ICR_WKIE		4		//	Wakeup interrupt enable.

//	Register name : SPI_SR.

#define SPI_SR_BSY		7		//	Busy flag.
#define SPI_SR_OVR		6		//	Overrun flag.
#define SPI_SR_MODF		5		//	Mode fault.
#define SPI_SR_CRCERR		4		//	CRC error flag.
#define SPI_SR_WKUP		3		//	Wakeup flag.
#define SPI_SR_TXE		1		//	Transmit buffer empty.
#define SPI_SR_RXNE		0		//	Receive buffer not empty.

#endif

//__________________________________________________________________________________________________________________________________________________________

//	Block name : I2C.

#if defined(using_i2c)

#define I2C_CR1		*(unsigned char*) 0x5210	//	I2C control register 1.
#define I2C_CR2		*(unsigned char*) 0x5211	//	I2C control register 2.
#define I2C_FREQR	*(unsigned char*) 0x5212	//	I2C frequency register.
#define I2C_OARL	*(unsigned char*) 0x5213	//	I2C own address register low.
#define I2C_OARH	*(unsigned char*) 0x5214	//	I2C own address register high.
#define I2C_DR		*(unsigned char*) 0x5216	//	I2C data register.
#define I2C_SR1		*(unsigned char*) 0x5217	//	I2C status register 1.
#define I2C_SR2		*(unsigned char*) 0x5218	//	I2C status register 2.
#define I2C_SR3		*(unsigned char*) 0x5219	//	I2C status register 3.
#define I2C_ITR		*(unsigned char*) 0x521A	//	I2C interrupt control register.
#define I2C_CCRL	*(unsigned char*) 0x521B	//	I2C clock control register low.
#define I2C_CCRH	*(unsigned char*) 0x521C	//	I2C clock contrl register high.
#define I2C_TRISER	*(unsigned char*) 0x521D	//	I2C TRISE register.
#define I2C_PECR	*(unsigned char*) 0x521E	//	I2C 

//	Register name : I2C_CR1.

#define I2C_CR1_NOSTRETCH		7		//	Clock stretching disable.
#define I2C_CR1_ENGC			6		//	General call enable.
#define I2C_CR1_PE			0		//	Peripheral enable.

//	Register name : I2C_CR2.

#define I2C_CR2_SWRST			7		//	Software reset.
#define I2C_CR2_POS			3		//	Acknowledgement bit ( for data reception ).
#define I2C_CR2_ACK			2		//	Acknowledgement enable.
#define I2C_CR2_STOP			1		//	Stop generation.
#define I2C_CR2_START			0		//	Start generation.

//	Register name : I2C_FREQR.

#define I2C_FREQR_FREQ5		5		//	Peripheral clock frequency bit 5.
#define I2C_FREQR_FREQ4		4		//	Peripheral clock frequency bit 4.
#define I2C_FREQR_FREQ3		3		//	Peripheral clock frequency bit 3.
#define I2C_FREQR_FREQ2		2		//	Peripheral clock frequency bit 2.
#define I2C_FREQR_FREQ1		1		//	Peripheral clock frequency bit 1.
#define I2C_FREQR_FREQ0		0		//	Peripheral clock frequency bit 0.

//	Register name : I2C_OARH.

#define I2C_OARH_ADDMODE		7		//	Addressing mode ( slave mode ).
#define I2C_OARH_ADDCONF		6		//	Address mode configuration.
#define I2C_OARH_ADD9			2		//	Interface address bit 9.
#define I2C_OARH_ADD8			1		//	Interface address bit 8.

//	Register name : I2C_SR1.

#define I2C_SR1_TXE			7		//	Data register empty.
#define I2C_SR1_RXNE			6		//	Data register not empty.
#define I2C_SR1_STOPF			4		//	Stop detection ( slave mode ).
#define I2C_SR1_ADD10			3		//	10-bit header sent.
#define I2C_SR1_BTF			2		//	Byte transfer finished.
#define I2C_SR1_ADDR			1		//	Address sent ( master mode ) , Address matched ( slave mode ).
#define I2C_SR1_SB			0		//	Start bit ( master mode ).

//	Register name : I2C_SR2.

#define I2C_SR2_WUFH			5		//	Wakeup from halt.
#define I2C_SR2_OVR			3		//	Overrun ot underrun.
#define I2C_SR2_AF			2		//	Acknowledgement faliure.
#define I2C_SR2_ARLO			1		//	Arbitration lost ( master mode ).
#define I2C_SR2_BERR			0		//	Bus error.

//	Register name : I2C_SR3.

#define I2C_SR3_DUALF			7		//	Dual flag ( slave mode ).
#define I2C_SR3_GENCALL			4		//	General call header ( slave mode ).
#define I2C_SR3_TRA			2		//	Transmitter or receiver.
#define I2C_SR3_BUSY			1		//	Bus busy.
#define I2C_SR3_MSL			0		//	Master or slave mode.

//	Register name : I2C_ITR.

#define I2C_ITR_ITBUFEN			2		//	Buffer interrupt enable.
#define I2C_ITR_ITEVTEN			1		//	Event interrupt enable.
#define I2C_ITR_ITERREN			0		//	Error interrupt enable.

//	Register name : I2C_CCRH.

#define I2C_CCRH_FS			7		//	I2C master mode selection.
#define I2C_CCRH_DUTY			6		//	Fast mode duty cycle.
#define I2C_CCRH_CCR11			3		//	Clock control register in Fast/Standard mode , bit 11.
#define I2C_CCRH_CCR10			2		//	Clock control register in Fast/Standard mode , bit 10.
#define I2C_CCRH_CCR9			1		//	Clock control register in Fast/Standard mode , bit 9.	
#define I2C_CCRH_CCR8			0		//	Clock control register in Fast/Standard mode , bit 8.

//	Register name : I2C_TRISER.

#define I2C_TRISER_TRISE5		5		//	Maximum rise time in Fast/Standard mode , bit 5. 
#define I2C_TRISER_TRISE4		4		//	Maximum rise time in Fast/Standard mode , bit 4.
#define I2C_TRISER_TRISE3		3		//	Maximum rise time in Fast/Standard mode , bit 3.
#define I2C_TRISER_TRISE2		2		//	Maximum rise time in Fast/Standard mode , bit 2.
#define I2C_TRISER_TRISE1		1		//	Maximum rise time in Fast/Standard mode , bit 1.
#define I2C_TRISER_TRISE0		0		//	Maximum rise time in Fast/Standard mode , bit 0.

#endif
 
//__________________________________________________________________________________________________________________________________________________________

//	Block name : UART1.

#if defined(using_uart1)

#define UART1_SR	*(unsigned char*) 0x5230		//	UART1 status register.
#define UART1_DR	*(unsigned char*) 0x5231		//	UART1 data register.
#define UART1_BRR1	*(unsigned char*) 0x5232		//	UART1 baud rate register 1.
#define UART1_BRR2	*(unsigned char*) 0x5233		//	UART1 baud rate register 2.
#define UART1_CR1	*(unsigned char*) 0x5234		//	UART1 control register 1.
#define UART1_CR2	*(unsigned char*) 0x5235		//	UART1 control register 2.
#define UART1_CR3	*(unsigned char*) 0x5236		//	UART1 control register 3.
#define UART1_CR4	*(unsigned char*) 0x5237		//	UART1 control register 4.
#define UART1_CR5	*(unsigned char*) 0x5238		//	UART1 control register 5.
#define UART1_GTR	*(unsigned char*) 0x5239		//	UART1 guard time register.
#define UART1_PSCR	*(unsigned char*) 0x523A		//	UART1 prescaler register.

//	Register name : UART1_SR

#define UART1_SR_TXE			7		//	Transmit data register empty.
#define UART1_SR_TC			6		//	Transmission complete.
#define UART1_SR_RXNE			5		//	Read data register not empty.
#define UART1_SR_IDLE			4		//	IDLE line detected.
#define UART1_SR_OR			3		//	Overrun error.
#define UART1_SR_NF			2		//	Noise flag.
#define UART1_SR_FE 			1		//	Framing error.
#define UART1_SR_PE			0		//	Parity error.

//	Register name : UART1_CR1.

#define UART1_CR1_UART1_CR1_R8			7		//	Receive data bit 8.
#define UART1_CR1_T8				6		//	Transmit data bit 8.
#define UART1_CR1_UARTD				5		//	UART Disable.
#define UART1_CR1_M				4		//	word length.
#define UART1_CR1_WAKE				3		//	Wakeup method.
#define UART1_CR1_PCEN				2		//	Parity control enable.
#define UART1_CR1_PS				1		//	Parity selection.
#define UART1_CR1_PIEN				0		//	Parity interrupt enable.

//	Register name : UART1_CR2.

#define UART1_CR2_TIEN				7		//	Transmitter interrupt enable.
#define UART1_CR2_TCIEN				6		//	Transmission complete interrupt enable.
#define UART1_CR2_RIEN				5		//	Receive interrupt enable.
#define UART1_CR2_ILIEN				4		//	IDLE line interrupt enable.
#define UART1_CR2_TEN				3		//	Transmitter enable.
#define UART1_CR2_REN				2		//	Receiver enable.
#define UART1_CR2_RWU				1		//	Receiver wakeup.
#define UART1_CR2_SBK				0		//	Send break.

//	Register name : UART1_CR3.

#define UART1_CR3_LINEN				6		//	LIN mode enable.
#define UART1_CR3_STOP1				5		//	STOP bit 1.
#define UART1_CR3_STOP0				4		//	STOP bit 0.
#define UART1_CR3_CLKEN				3		//	Clock enable.
#define UART1_CR3_CPOL				2		//	Clock polarity.
#define UART1_CR3_CPHA				1		//	Clock phase.
#define UART1_CR3_LBCL				0		//	Last bit clock pulse.

//	Register name : UART1_CR4.

#define UART1_CR4_LBDIEN			6		//	LIN break detection interrupt enable.
#define UART1_CR4_LBDL				5		//	LIN break detection length.
#define UART1_CR4_LBDF				4		//	LIN break detection flag.
#define UART1_CR4_ADD3				3		//	Address of UART node , bit 3.
#define UART1_CR4_ADD2				2		//	Address of UART node , bit 2.
#define UART1_CR4_ADD1				1		//	Address of UART node , bit 1.
#define UART1_CR4_ADD0				0		//	Address of UART node , bit 0.

//	Register name : UART1_CR5.

#define UART1_CR5_SCEN				5		//	Smartcard mode enable.
#define UART1_CR5_NACK				4		//	Smartcard NACK enable.
#define UART1_CR5_HDSEL				3		//	Half duplex selection.
#define UART1_CR5_IRLP				2		//	IrDA low power.
#define UART1_CR5_IREN				1		//	IrDA mode enable.

#endif

//__________________________________________________________________________________________________________________________________________________________

//	Block name	:	TIM1.

#if defined(using_tim1)

#define TIM1_CR1	*(unsigned char*) 0x5250		//	TIM1 control register 1.
#define TIM1_CR2	*(unsigned char*) 0x5251		//	TIM1 control register 2.
#define TIM1_SMCR	*(unsigned char*) 0x5252		//	TIM1 slave mode control register.
#define TIM1_ETR	*(unsigned char*) 0x5253		//	TIM1 external trigger register.
#define TIM1_IER	*(unsigned char*) 0x5254		//	TIM1 interrupt enable register.
#define TIM1_SR1	*(unsigned char*) 0x5255		//	TIM1 status register 1.
#define TIM1_SR2	*(unsigned char*) 0x5256		//	TIM1 status register 2.
#define TIM1_EGR	*(unsigned char*) 0x5257		//	TIM1 event generation register.
#define TIM1_CCMR1	*(unsigned char*) 0x5258		//	TIM1 capture/compare mode resigter 1.
#define TIM1_CCMR2	*(unsigned char*) 0x5259		//	TIM1 capture/compare mode resigter 2.
#define TIM1_CCMR3	*(unsigned char*) 0x525A		//	TIM1 capture/compare mode resigter 3.  
#define TIM1_CCMR4	*(unsigned char*) 0x525B		//	TIM1 capture/compare mode resigter 4. 
#define TIM1_CCER1	*(unsigned char*) 0x525C		//	TIM1 capture/compare enable resigter 1. 
#define TIM1_CCER2	*(unsigned char*) 0x525D		//	TIM1 capture/compare enable resigter 2.
#define TIM1_CNTRH	*(unsigned char*) 0x525E		//	TIM1 counter high.
#define TIM1_CNTRL	*(unsigned char*) 0x525F		//	TIM1 counter low.
#define TIM1_PSCRH	*(unsigned char*) 0x5260		//	TIM1 prescaler register high.
#define TIM1_PSCRL	*(unsigned char*) 0x5261		//	TIM1 prescaler register low.
#define TIM1_ARRH	*(unsigned char*) 0x5262		//	TIM1 auto reload register high.
#define TIM1_ARRL	*(unsigned char*) 0x5263		//	TIM1 auto reload register low.
#define TIM1_RCR	*(unsigned char*) 0x5264		//	TIM1 repitition counter register.
#define TIM1_CCR1H	*(unsigned char*) 0x5265		//	TIM1 capture/compare register 1 high.
#define TIM1_CCR1L	*(unsigned char*) 0x5266		//	TIM1 capture/compare register 1 low.
#define TIM1_CCR2H	*(unsigned char*) 0x5267		//	TIM1 capture/compare register 2 high.
#define TIM1_CCR2L	*(unsigned char*) 0x5268		//	TIM1 capture/compare register 2 low.
#define TIM1_CCR3H	*(unsigned char*) 0x5269		//	TIM1 capture/compare register 3 high.
#define TIM1_CCR3L	*(unsigned char*) 0x526A		//	TIM1 capture/compare register 3 low.
#define TIM1_CCR4H	*(unsigned char*) 0x526B		//	TIM1 capture/compare register 4 high.
#define TIM1_CCR4L	*(unsigned char*) 0x526C		//	TIM1 capture/compare register 4 low.
#define TIM1_BKR	*(unsigned char*) 0x526D		//	TIM1 break register.
#define TIM1_DTR	*(unsigned char*) 0x526E		//	TIM1 dead-time register.
#define TIM1_OISR	*(unsigned char*) 0x526F		//	TIM1 output idle state register.

//	Register name :	TIM1_CR1.

#define TIM1_CR1_ARPE		7		//	Auto-reload preload enable.
#define TIM1_CR1_CMS1		6		//	Center-aligned mode selection bit 1.
#define TIM1_CR1_CMS0		5		//	Center-aligned mode selection bit 0.
#define TIM1_CR1_DIR		4		//	Direction.
#define TIM1_CR1_OPM		3		//	One pulse mode.
#define TIM1_CR1_URS		2		//	Update request source.
#define TIM1_CR1_UDIS		1		//	Update disable.
#define TIM1_CR1_CEN		0		//	Counter enable.

//	Register name : TIM1_CR2.

#define TIM1_CR2_MMS2		6		//	Master mode selection bit 2.
#define TIM1_CR2_MMS1		5		//	Master mode selection bit 1.
#define TIM1_CR2_MMS0		4		//	Master mod eselection bit 0.
#define TIM1_CR2_COMS		2		//	Capture/compare control update selection.
#define TIM1_CR2_CCPC		0		//	Capture/compare preloaded control.

//	Register name : TIM1_SMCR.

#define TIM1_SMCR_MSM		7		//	Master/Slave mode.
#define TIM1_SMCR_TS2		6		//	Trigger selection bit 2.
#define TIM1_SMCR_TS1		5		//	Trigger selection bit 1.
#define TIM1_SMCR_TS0		4		//	Trigger selection bit 0.
#define TIM1_SMCR_SMS2		2		//	Clock/trigger/slave mode selection bit 2.
#define TIM1_SMCR_SMS1		1		//	Clock/trigger/slave mode selection bit 1.
#define TIM1_SMCR_SMS0		0		//	Clock/trigger/slave mode selection bit 0.

//	Register name : TIM1_ETR.

#define TIM1_ETR_ETP		7		//	External trigger polarity.
#define TIM1_ETR_ECE		6		//	External clock enable.
#define TIM1_ETR_ETPS1		5		//	External trigger prescalar bit 1.
#define TIM1_ETR_ETPS0		4		//	External trigger prescalar bit 0.
#define TIM1_ETR_ETF3		3		//	External trigger filter bit 3.
#define TIM1_ETR_ETF2		2		//	External trigger filter bit 2.
#define TIM1_ETR_ETF1		1		//	External trigger filter bit 1.
#define TIM1_ETR_ETF0		0		//	External trigger filter bit 0.

//	Register name : TIM1_IER.

#define TIM1_IER_BIE		7		//	Break interrupt enable.
#define TIM1_IER_TIE		6		//	Trigger interrupt enable.
#define TIM1_IER_COMIE		5		//	Commutation interrupt enable.
#define TIM1_IER_CC4IE		4		//	Capture/compare 4 interrupt enable.
#define TIM1_IER_CC3IE		3		//	Capture/compare 3 interrupt enable.
#define TIM1_IER_CC2IE		2		//	Capture/compare 2 interrupt enable.
#define TIM1_IER_CC1IE		1		//	Capture/compare 1 interrupt enable.
#define TIM1_IER_UIE		0		//	Update interrupt enable.

//	Register name : TIM1_SR1.

#define TIM1_SR1_BIF		7		//	Break interrupt flag.
#define TIM1_SR1_TIF		6		//	Trigger interrupt flag.
#define TIM1_SR1_COMIF	5		//	Commutation interrupt flag.
#define TIM1_SR1_CC4IF		4		//	Capture/compare 4 interrupt flag.
#define TIM1_SR1_CC3IF		3		//	Capture/compare 3 interrupt flag.
#define TIM1_SR1_CC2IF		2		//	Capture/compare 2 interrupt flag.
#define TIM1_SR1_CC1IF		1		//	Capture/compare 1 interrupt flag.
#define TIM1_SR1_UIF		0		//	Update interrupt flag.

//	Register name : TIM1_SR2.

#define TIM1_SR2_CC4OF		4		//	Capture/compare 4 overcapture flag.
#define TIM1_SR2_CC3OF		3		//	Capture/compare 3 overcapture flag.
#define TIM1_SR2_CC2OF		2		//	Capture/compare 2 overcapture flag.
#define TIM1_SR2_CC1OF		1		//	Capture/compare 1 overcapture flag.

//	Register name : TIM1_EGR.

#define TIM1_EGR_BG		7		//	Break generation.
#define TIM1_EGR_TG		6		//	Trigger generation.
#define TIM1_EGR_COMG		5		//	Capture/compare control update generation.
#define TIM1_EGR_CC4G		4		//	Capture/compare 4 generation.
#define TIM1_EGR_CC3G		3		//	Capture/compare 3 generation.
#define TIM1_EGR_CC2G		2		//	Capture/compare 2 generation.
#define TIM1_EGR_CC1G		1		//	Capture/compare 1 generation.
#define TIM1_EGR_UG		0		//	Update generation.

//	Register name : TIM1_CCMR1.

//	Output mode bits.

#define TIM1_CCMR1_OC1CE		7		//	Output compare 1 clear enable.
#define TIM1_CCMR1_OC1M2		6		//	Output compare 1 mode ( bit 2 ).
#define TIM1_CCMR1_OC1M1		5		//	Output compare 1 mode ( bit 1 ).
#define TIM1_CCMR1_OC1M0		4		//	Output compare 1 mode ( bit 0 ).
#define TIM1_CCMR1_OC1PE		3		//	Output compare 1 preload enable.
#define TIM1_CCMR1_OC1FE		2		//	Output compare 1 fast enable.
#define TIM1_CCMR1_CC1S1		1		//	Capture/compare 1 selection ( bit 1 ).
#define TIM1_CCMR1_CC1S0		0		//	Capture/compare 1 selection ( bit 0 ).

//	Input mode bits.

#define TIM1_CCMR1_IC1F3		7		//	Input capture 1 filter ( bit 3 ).
#define TIM1_CCMR1_IC1F2		6		//	Input capture 1 filter ( bit 2 ).
#define TIM1_CCMR1_IC1F1		5		//	Input capture 1 filter ( bit 1 ).
#define TIM1_CCMR1_IC1F0		4		//	Input capture 1 filter ( bit 0 ).
#define TIM1_CCMR1_IC1PSC1		3		//	Input capture 1 prescalar ( bit 1 ).
#define TIM1_CCMR1_IC1PSC0		2		//	Input capture 1 prescalar ( bit 0 ).
#define TIM1_CCMR1_CC1S1		1		//	Capture/compare 1 selection ( bit 1 ).
#define TIM1_CCMR1_CC1S0		0		//	Capture/compare 1 selection ( bit 0 ).

//	Register name : TIM1_CCMR2.

//	Output mode bits.

#define TIM1_CCMR2_OC2CE		7		//	Output compare 2 clear enable.
#define TIM1_CCMR2_OC2M2		6		//	Output compare 2 mode ( bit 2 ).
#define TIM1_CCMR2_OC2M1		5		//	Output compare 2 mode ( bit 1 ).
#define TIM1_CCMR2_OC2M0		4		//	Output compare 2 mode ( bit 0 ).
#define TIM1_CCMR2_OC2PE		3		//	Output compare 2 preload enable.
#define TIM1_CCMR2_OC2FE		2		//	Output compare 2 fast enable.
#define TIM1_CCMR2_CC2S1		1		//	Capture/compare 2 selection ( bit 1 ).
#define TIM1_CCMR2_CC2S0		0		//	Capture/compare 2 selection ( bit 0 ).

//	Input mode bits.

#define TIM1_CCMR2_IC2F3		7		//	Input capture 2 filter ( bit 3 ).
#define TIM1_CCMR2_IC2F2		6		//	Input capture 2 filter ( bit 2 ).
#define TIM1_CCMR2_IC2F1		5		//	Input capture 2 filter ( bit 1 ).
#define TIM1_CCMR2_IC2F0		4		//	Input capture 2 filter ( bit 0 ).
#define TIM1_CCMR2_IC2PSC1		3		//	Input capture 2 prescalar ( bit 1 ).
#define TIM1_CCMR2_IC2PSC0		2		//	Input capture 2 prescalar ( bit 0 ).
#define TIM1_CCMR2_CC2S1		1		//	Capture/compare 2 selection ( bit 1 ).
#define TIM1_CCMR2_CC2S0		0		//	Capture/compare 2 selection ( bit 0 ).

//	Register name : TIM1_CCMR3.

//	Output mode bits.

#define TIM1_CCMR3_OC3CE		7		//	Output compare 3 clear enable.
#define TIM1_CCMR3_OC3M2		6		//	Output compare 3 mode ( bit 2 ).
#define TIM1_CCMR3_OC3M1		5		//	Output compare 3 mode ( bit 1 ).
#define TIM1_CCMR3_OC3M0		4		//	Output compare 3 mode ( bit 0 ).
#define TIM1_CCMR3_OC3PE		3		//	Output compare 3 preload enable.
#define TIM1_CCMR3_OC3FE		2		//	Output compare 3 fast enable.
#define TIM1_CCMR3_CC3S1		1		//	Capture/compare 3 selection ( bit 1 ).
#define TIM1_CCMR3_CC3S0		0		//	Capture/compare 3 selection ( bit 0 ).

//	Input mode bits.

#define TIM1_CCMR3_IC3F3		7		//	Input capture 3 filter ( bit 3 ).
#define TIM1_CCMR3_IC3F2		6		//	Input capture 3 filter ( bit 2 ).
#define TIM1_CCMR3_IC3F1		5		//	Input capture 3 filter ( bit 1 ).
#define TIM1_CCMR3_IC3F0		4		//	Input capture 3 filter ( bit 0 ).
#define TIM1_CCMR3_IC3PSC1		3		//	Input capture 3 prescalar ( bit 1 ).
#define TIM1_CCMR3_IC3PSC0	2		//	Input capture 3 prescalar ( bit 0 ).
#define TIM1_CCMR3_CC3S1		1		//	Capture/compare 3 selection ( bit 1 ).
#define TIM1_CCMR3_CC3S0		0		//	Capture/compare 3 selection ( bit 0 ).

//	Register name : TIM1_CCMR4.

//	Output mode bits.

#define TIM1_CCMR4_OC4CE		7		//	Output compare 4 clear enable.
#define TIM1_CCMR4_OC4M2		6		//	Output compare 4 mode ( bit 2 ).
#define TIM1_CCMR4_OC4M1		5		//	Output compare 4 mode ( bit 1 ).
#define TIM1_CCMR4_OC4M0		4		//	Output compare 4 mode ( bit 0 ).
#define TIM1_CCMR4_OC4PE		3		//	Output compare 4 preload enable.
#define TIM1_CCMR4_OC4FE		2		//	Output compare 4 fast enable.
#define TIM1_CCMR4_CC4S1		1		//	Capture/compare 4 selection ( bit 1 ).
#define TIM1_CCMR4_CC4S0		0		//	Capture/compare 4 selection ( bit 0 ).

//	Input mode bits.

#define TIM1_CCMR4_IC4F3		7		//	Input capture 4 filter ( bit 3 ).
#define TIM1_CCMR4_IC4F2		6		//	Input capture 4 filter ( bit 2 ).
#define TIM1_CCMR4_IC4F1		5		//	Input capture 4 filter ( bit 1 ).
#define TIM1_CCMR4_IC4F0		4		//	Input capture 4 filter ( bit 0 ).
#define TIM1_CCMR4_IC4PSC1		3		//	Input capture 4 prescalar ( bit 1 ).
#define TIM1_CCMR4_IC4PSC0		2		//	Input capture 4 prescalar ( bit 0 ).
#define TIM1_CCMR4_CC4S1		1		//	Capture/compare 4 selection ( bit 1 ).
#define TIM1_CCMR4_CC4S0		0		//	Capture/compare 4 selection ( bit 0 ).

//	Register name : TIM1_CCER1.

#define TIM1_CCER1_CC2NP		7		//	Capture/compare 2 complementary output polarity.
#define TIM1_CCER1_CC2NE		6		//	Capture/compare 2 complementary output enable.
#define TIM1_CCER1_CC2P		5		//	Capture/compare 2 output polarity.
#define TIM1_CCER1_CC2E		4		//	Capture/compare 2 output enable.
#define TIM1_CCER1_CC1NP		3		//	Capture/compare 1 complementary output polarity.
#define TIM1_CCER1_CC1NE		2		//	Capture/compare 1 complementary output enable.
#define TIM1_CCER1_CC1P		1		//	Capture/compare 1 output polarity.
#define TIM1_CCER1_CC1E		0		//	Capture/compare 1 output enable. 

//	Register name : TIM1_CCER2.

#define TIM1_CCER2_CC4P		5		//	Capture/compare 4 output polarity.
#define TIM1_CCER2_CC4E		4		//	Capture/compare 4 output enable.
#define TIM1_CCER2_CC3NP		3		//	Capture/compare 3 complementary output polarity.
#define TIM1_CCER2_CC3NE		2		//	Capture/comapre 3 complementary output enable.
#define TIM1_CCER2_CC3P		1		//	Capture/compare 3 output polarity.
#define TIM1_CCER2_CC3E		0		//	Capture/compare 3 output enable.

//	Register name : TIM1_BKR.

#define TIM1_BKR_MOE_TIM1		7		//	Main output enable.
#define TIM1_BKR_AOE_TIM1		6		//	Automatic output enable.
#define TIM1_BKR_BKP_TIM1		5		//	Break polarity.
#define TIM1_BKR_BKE_TIM1		4		//	Break enable.
#define TIM1_BKR_OSSR_TIM1		3		//	Off-state selection for run mode.
#define TIM1_BKR_OSSI_TIM1		2		//	Off-state selection for idle mode.
#define TIM1_BKR_LOCK1_TIM1		1		//	Lock configuration ( bit 1 ).
#define TIM1_BKR_LOCK0_TIM1		0		//	Lokc configuration ( bit 0 ).

#endif

//__________________________________________________________________________________________________________________________________________________________

//	Block name : TMR2.

#if defined(using_tim2)

#define TIM2_CR1	*(unsigned char*) 0x5300		//	TIM2 control register 1.
#define TIM2_IER	*(unsigned char*) 0x5303		//	TIM2 interrupt enable register.
#define TIM2_SR1	*(unsigned char*) 0x5304		//	TIM2 status register 1.
#define TIM2_SR2	*(unsigned char*) 0x5305		//	TIM2 status register 2.
#define TIM2_EGR	*(unsigned char*) 0x5306		//	TIM2 event generation register.
#define TIM2_CCMR1	*(unsigned char*) 0x5307		//	TIM2 capture/compare mode register 1.
#define TIM2_CCMR2	*(unsigned char*) 0x5308		//	TIM2 capture/compare mode register 2.
#define TIM2_CCMR3	*(unsigned char*) 0x5309		//	TIM2 capture/compare mode register 3.
#define TIM2_CCER1	*(unsigned char*) 0x530A		//	TIM2 capture/compare enable register 1.
#define TIM2_CCER2	*(unsigned char*) 0x530B		//	TIM2 capture/compare enable register 2.
#define TIM2_CNTRH	*(unsigned char*) 0x530C		//	TIM2 counter high.
#define TIM2_CNTRL	*(unsigned char*) 0x530D		//	TIM2 counter low.
#define TIM2_PSCR	*(unsigned char*) 0x530E		//	TIM2 prescalar register.
#define TIM2_ARRH	*(unsigned char*) 0x530F		//	TIM2 auto-reload register high.
#define TIM2_ARRL	*(unsigned char*) 0x5310		//	TIM2 auto-reload register low.
#define TIM2_CCR1H	*(unsigned char*) 0x5311		//	TIM2 capture/compare register 1 high.
#define TIM2_CCR1L	*(unsigned char*) 0x5312		//	TIM2 capture/compare register 1 low.
#define TIM2_CCR2H	*(unsigned char*) 0x5313		//	TIM2 capture/compare register 2 high.
#define TIM2_CCR2L	*(unsigned char*) 0x5314		//	TIM2 capture/compare register 2 low.
#define TIM2_CCR3H	*(unsigned char*) 0x5315		//	TIM2 capture/compare register 3 high.
#define TIM2_CCR3L	*(unsigned char*) 0x5316		//	TIM2 capture/compare register 3 low.

//	Register name : TIM2_CR1.

#define TIM2_CR1_APRE		7		//	Auto-reload preload enable.
#define TIM2_CR1_OPM		3		//	One-pulse mode.
#define TIM2_CR1_URS		2		//	Update request source.
#define TIM2_CR1_UDIS		1		//	Update disable.
#define TIM2_CR1_CEN		0		//	Counter enable.

//	Register name : TIM2_IER.

#define TIM2_IER_TIE		6		//	Trigger interrupt enable.
#define TIM2_IER_CC3IE		3		//	Capture/compare 3 interrupt enable.
#define TIM2_IER_CC2IE		2		//	Capture/compare 2 interrupt enable.
#define TIM2_IER_CC1IE		1		//	Capture/compare 1 interrupt enable.
#define TIM2_IER_UIE		0		//	Update interrupt enable.

//	Register name : TIM2_SR1.

#define TIM2_SR1_TIF		6		//	Trigger interrupt flag.
#define TIM2_SR1_CC3IF		3		//	Capture/compare 3 interrupt flag.
#define TIM2_SR1_CC2IF		2		//	Capture/compare 2 interrupt flag.
#define TIM2_SR1_CC1IF		1		//	Capture/compare 1 interrupt flag.
#define TIM2_SR1_UIF		0		//	Update interrupt flag.

//	Register name : TIM2_SR2.

#define TIM2_SR2_CC3OF_TIM2		3		//	Capture/compare 3 overcapture flag.
#define TIM2_SR2_CC2OF_TIM2		2		//	Capture/compare 2 overcapture flag.
#define TIM2_SR2_CC1OF_TIM2		1		//	Capture/compare 1 overcapture flag.

//	Register name : TIM2_EGR.

#define TIM2_EGR_TG	6		//	Trigger generation.
#define TIM2_EGR_CC3G		3		//	Capture/compare 3 generation.
#define TIM2_EGR_CC2G		2		//	Capture/compare 2 generation.
#define TIM2_EGR_CC1G		1		//	Capture/compare 1 generation.
#define TIM2_EGR_UG		0		//	Update generation.

//	Register name : TIM2_CCMR1.

//	Channel configured in output 

#define TIM2_CCMR1_OC1M2		6		//	Output compare 1 mode ( bit 2 ).
#define TIM2_CCMR1_OC1M1		5		//	Output compare 1 mode ( bit 1 ).
#define TIM2_CCMR1_OC1M0		4		//	Output compare 1 mode ( bit 0 ).
#define TIM2_CCMR1_OC1PE		3		//	Output compare 1 preload enable.
#define TIM2_CCMR1_CC1S1		1		//	Capture/compare 1 selection ( bit 1 ).
#define TIM2_CCMR1_CC1S0		0		//	Capture/compare 1 selection ( bit 0 ).

//	Channel configured in input.

#define TIM2_CCMR1_IC1F3		7		//	Input capture 1 filter ( bit 3 ).
#define TIM2_CCMR1_IC1F2		6		//	Input capture 1 filter ( bit 2 ).
#define TIM2_CCMR1_IC1F1		5		//	Input capture 1 filter ( bit 1 ).
#define TIM2_CCMR1_IC1F0		4		//	Input capture 1 filter ( bit 0 ).
#define TIM2_CCMR1_IC1PSC1		3		//	Input capture 1 prescaler ( bit 1 ).
#define TIM2_CCMR1_IC1PSC0		2		//	Input capture 1 prescaler ( bit 0 ).
#define TIM2_CCMR1_CC1S1		1		//	Capture/compare 1 selection ( bit 1 ).
#define TIM2_CCMR1_CC1S0		0		//	Capture/compare 1 selection ( bit 0 ).

//	Register name : TIM2_CCMR2.

//	Channel configured in output 

#define TIM2_CCMR2_OC2M2		6		//	Output compare 2 mode ( bit 2 ).
#define TIM2_CCMR2_OC2M1		5		//	Output compare 2 mode ( bit 1 ).
#define TIM2_CCMR2_OC2M0		4		//	Output compare 2 mode ( bit 0 ).
#define TIM2_CCMR2_OC2PE		3		//	Output compare 2 preload enable.
#define TIM2_CCMR2_CC2S1		1		//	Capture/compare 2 selection ( bit 1 ).
#define TIM2_CCMR2_CC2S0		0		//	Capture/compare 2 selection ( bit 0 ).

//	Channel configured in input.

#define TIM2_CCMR2_IC2F3		7		//	Input capture 2 filter ( bit 3 ).
#define TIM2_CCMR2_IC2F2		6		//	Input capture 2 filter ( bit 2 ).
#define TIM2_CCMR2_IC2F1		5		//	Input capture 2 filter ( bit 1 ).
#define TIM2_CCMR2_IC2F0		4		//	Input capture 2 filter ( bit 0 ).
#define TIM2_CCMR2_IC2PSC1		3		//	Input capture 2 prescaler ( bit 1 ).
#define TIM2_CCMR2_IC2PSC0		2		//	Input capture 2 prescaler ( bit 0 ).
#define TIM2_CCMR2_CC2S1		1		//	Capture/compare 2 selection ( bit 1 ).
#define TIM2_CCMR2_CC2S0		0		//	Capture/compare 2 selection ( bit 0 ).
	
//	Register name : TIM2_CCER1.

#define TIM2_CCER1_CC2P		5		//	Capture/compare 2 output polarity.
#define TIM2_CCER1_CC2E		4		//	Capture/compare 2 output enable.
#define TIM2_CCER1_CC1P		1		//	Capture/compare 1 output polarity.
#define TIM2_CCER1_CC1E		0		//	Capture/compare 1 output enable.

//	Register name : TIM2_CCER2.

#define TIM2_CCER2_CC3P		1		//	Capture/compare 3 output polarity.
#define TIM2_CCER2_CC3E		0		//	Capture/compare 2 output enable.

//	Register name : TIM2_PSCR.

#define TIM2_PSCR_PSC3		3		//	Prescaler value ( bit 3 ).
#define TIM2_PSCR_PSC2		2		//	Prescaler value ( bit 2 ).
#define TIM2_PSCR_PSC1		1		//	Prescaler value ( bit 1 ).
#define TIM2_PSCR_PSC0		0		//	Prescaler value ( bit 0 ).

#endif

//__________________________________________________________________________________________________________________________________________________________

//	Block name : TIM4.

#if defined(using_tim4)

#define TIM4_CR1	*(unsigned char*) 0x5340		//	TIM4 control register.
#define TIM4_IER	*(unsigned char*) 0x5343		//	TIM4 interrupt enable register.
#define TIM4_SR		*(unsigned char*) 0x5344		//	TIM4 status register.
#define TIM4_EGR	*(unsigned char*) 0x5345		//	TIM4 event generation register.
#define TIM4_CNTR	*(unsigned char*) 0x5346		//	TIM4 counter.
#define TIM4_PSCR	*(unsigned char*) 0x5347		//	TIM4 prescaler register.
#define TIM4_ARR	*(unsigned char*) 0x5348		//	TIM4 auto-reload preload register.

//	Register name : TIM4_CR1.

#define TIM4_CR1_ARPE		7		//	Auto-reload preload enable.
#define TIM4_CR1_OPM		3		//	One-pulse mode.
#define TIM4_CR1_URS		2		//	Update request source.
#define TIM4_CR1_UDIS		1		//	Update disable.
#define TIM4_CR1_CEN		0		//	Counter enable.		

//	Register name : TIM4_IER.

#define TIM4_IER_TIE		6		//	Trigger interrupt enable.
#define TIM4_IER_UIE		0		//	Update interrupt enable.

//	Register name : TIM4_SR.

#define TIM4_SR_TIF		6		//	Trigger interrupt flag.
#define TIM4_SR_UIF		0		//	Update interrupt enable.

//	Register name : TIM4_EGR.

#define TIM4_EGR_TG			6		//	Trigger generation.
#define TIM4_EGR_UG			0		//	Update generation.

//	Register name : TIM4_PSCR.

#define TIM4_PSCR_PSC2		2		//	Prescaler value ( bit 2 ).
#define TIM4_PSCR_PSC1		1		//	Prescaler value ( bit 1 ).
#define TIM4_PSCR_PSC0		0		//	Prescaler value ( bit 0 ).

#endif

//__________________________________________________________________________________________________________________________________________________________

//Block name : ADC1.

#if defined(using_adc1)

#define ADC_DB0RH	*(unsigned char*) 0x53E0		//	ADC channel 0 high register.
#define ADC_DB0RL	*(unsigned char*) 0x53E1		//	ADC channel 0 low register.
#define ADC_DB1RH	*(unsigned char*) 0x53E2		//	ADC channel 1 high register.
#define ADC_DB1RL	*(unsigned char*) 0x53E3		//	ADC channel 1 low register.
#define ADC_DB2RH	*(unsigned char*) 0x53E4		//	ADC channel 2 high register.
#define ADC_DB2RL	*(unsigned char*) 0x53E5		//	ADC channel 2 low register.
#define ADC_DB3RH	*(unsigned char*) 0x53E6		//	ADC channel 3 high register.
#define ADC_DB3RL	*(unsigned char*) 0x53E7		//	ADC channel 3 low register.
#define ADC_DB4RH	*(unsigned char*) 0x53E8		//	ADC channel 4 high register.
#define ADC_DB4RL	*(unsigned char*) 0x53E9		//	ADC channel 4 low register.
#define ADC_DB5RH	*(unsigned char*) 0x53EA		//	ADC channel 5 high register.
#define ADC_DB5RL	*(unsigned char*) 0x53EB		//	ADC channel 5 low register.
#define ADC_DB6RH	*(unsigned char*) 0x53EC		//	ADC channel 6 high register.
#define ADC_DB6RL	*(unsigned char*) 0x53ED		//	ADC channel 6 low register.
#define ADC_DB7RH	*(unsigned char*) 0x53EE		//	ADC channel 7 high register.
#define ADC_DB7RL	*(unsigned char*) 0x53EF		//	ADC channel 7 low register.
#define ADC_DB8RH	*(unsigned char*) 0x53F0		//	ADC channel 8 high register.
#define ADC_DB8RL	*(unsigned char*) 0x53F1		//	ADC channel 8 low register.
#define ADC_DB9RH	*(unsigned char*) 0x53F2		//	ADC channel 9 high register.
#define ADC_DB9RL	*(unsigned char*) 0x53F3		//	ADC channel 9 low register.
#define ADC_CSR		*(unsigned char*) 0x5400		//	ADC control/status register.
#define ADC_CR1		*(unsigned char*) 0x5401		//	ADC configuration register 1.
#define ADC_CR2		*(unsigned char*) 0x5402		//	ADC configuration register 2.
#define ADC_CR3		*(unsigned char*) 0x5403		//	ADC configuration register 3.
#define ADC_DRH		*(unsigned char*) 0x5404		//	ADC data register high.
#define ADC_DRL		*(unsigned char*) 0x5405		//	ADC data register low.
#define ADC_TDRH	*(unsigned char*) 0x5406		//	ADC Schmitt trigger disable register high.
#define ADC_TDRL	*(unsigned char*) 0x5407		//	ADC Schmitt trigger disable register low.
#define ADC_HTRH	*(unsigned char*) 0x5408		//	ADC Schmitt trigger high threshold register high.
#define ADC_HTRL	*(unsigned char*) 0x5409		//	ADC Schmitt trigger high threshold register low.
#define ADC_LTRH	*(unsigned char*) 0x540A		//	ADC Schmitt trhgger low threshold register high.
#define ADC_LTRL	*(unsigned char*) 0x540B		//	ADC Schmitt trigger low threshold register low.
#define ADC_AWSRH	*(unsigned char*) 0x540C		//	ADC analog watchdog status register high.
#define ADC_AWSRL	*(unsigned char*) 0x540D		//	ADC analog watchdog status register low.
#define ADC_AWCRH	*(unsigned char*) 0x540E		//	ADC analog watchdog control register high.
#define ADC_AWCRL	*(unsigned char*) 0x540F		//	ADC analog watchdog control register low.

//	Register name : ADC_CSR.

#define ADC_CSR_EOC		7		//	End of conversion.
#define ADC_CSR_AWD		6		//	Analog watchdog flag.
#define ADC_CSR_EOCIE		5		//	Interrupt enable for EOC.
#define ADC_CSR_AWDIE		4		//	Analog watchdog interrupt enable.
#define ADC_CSR_CH3		3		//	Channel selection ( bit 3 ).
#define ADC_CSR_CH2		2		//	Channel selection ( bit 2 ).
#define ADC_CSR_CH1		1		//	Channel selection ( bit 1 ).
#define ADC_CSR_CH0		0		//	Channel selection ( bit 0 ).

//	Register name : ADC_CR1.

#define ADC_CR1_SPSEL2		6		//	Prescaler selection ( bit 2 ).
#define ADC_CR1_SPSEL1		5		//	Prescaler selection ( bit 1 ).
#define ADC_CR1_SPSEL0		4		//	Prescaler selection ( bit 0 ).
#define ADC_CR1_CONT		1		//	Continuous conversion.
#define ADC_CR1_ADON		0		//	A/D converter on/off.

//	Register name : ADC_CR2.

#define ADC_CR2_EXTTRIG		6		//	External trigger enable.
#define ADC_CR2_EXTSEL1		5		//	External event selection ( bit 1 ).
#define ADC_CR2_EXTSEL0		4		//	External event selection ( bit 0 ).
#define ADC_CR2_ALIGN		3		//	Data alignment.
#define ADC_CR2_SCAN		1		//	Scan mode enable.

//	Register name : ADC_CR3.

#define ADC_CR3_DBUF		7		//	Data buffer enable.
#define ADC_CR3_OVR		6		//	Overrun flag.

//	Register name : ADC_DRH.

#define ADC_DRH_DH7		7		//	Data bit high ( bit 7 ).
#define ADC_DRH_DH6		6		//	Data bit high ( bit 6 ).
#define ADC_DRH_DH5		5		//	Data bit high ( bit 5 ).
#define ADC_DRH_DH4		4		//	Data bit high ( bit 4 ).
#define ADC_DRH_DH3		3		//	Data bit high ( bit 3 ).
#define ADC_DRH_DH2		2		//	Data bit high ( bit 2 ).	 
#define ADC_DRH_DH1		1		//	Data bit high ( bit 1 ). 
#define ADC_DRH_DH0		0		//	Data bit high ( bit 0 ).

//	Register name : ADC_DRL.

#define ADC_DRL_DL7		7		//	Data bit low ( bit 7 ).
#define ADC_DRL_DL6		6		//	Data bit low ( bit 6 ).
#define ADC_DRL_DL5		5		//	Data bit low ( bit 5 ).
#define ADC_DRL_DL4		4		//	Data bit low ( bit 4 ).
#define ADC_DRL_DL3		3		//	Data bit low ( bit 3 ).
#define ADC_DRL_DL2		2		//	Data bit low ( bit 2 ).	 
#define ADC_DRL_DL1		1		//	Data bit low ( bit 1 ). 
#define ADC_DRL_DL0		0		//	Data bit low ( bit 0 ).
 					
//	Register name : ADC_TDRH.

#define ADC_TDRH_TD15		7		//	Schmit trigger disable ( bit 15 ).
#define ADC_TDRH_TD14		6		//	Schmit trigger disable ( bit 14 ).
#define ADC_TDRH_TD13		5		//	Schmit trigger disable ( bit 13 ).
#define ADC_TDRH_TD12		4		//	Schmit trigger disable ( bit 12 ).
#define ADC_TDRH_TD11		3		//	Schmit trigger disable ( bit 11 ).
#define ADC_TDRH_TD10		2		//	Schmit trigger disable ( bit 10 ).
#define ADC_TDRH_TD9		1		//	Schmit trigger disable ( bit 9 ).
#define ADC_TDRH_TD8		0		//	Schmit trigger disable ( bit 8 ).

//	Register name : ADC_TDRL.

#define ADC_TDRL_TD7		7		//	Schmit trigger disable ( bit 7 ).
#define ADC_TDRL_TD6		6		//	Schmit trigger disable ( bit 6 ).
#define ADC_TDRL_TD5		5		//	Schmit trigger disable ( bit 5 ).
#define ADC_TDRL_TD4		4		//	Schmit trigger disable ( bit 4 ).
#define ADC_TDRL_TD3		3		//	Schmit trigger disable ( bit 3 ).
#define ADC_TDRL_TD2		2		//	Schmit trigger disable ( bit 2 ).
#define ADC_TDRL_TD1		1		//	Schmit trigger disable ( bit 1 ).
#define ADC_TDRL_TD0		0		//	Schmit trigger disable ( bit 0 ).

//	Register name : ADC_HTRH.

#define ADC_HTRH_HT9		1		//	Schmit trigger disable ( bit 9 ).
#define ADC_HTRH_HT8		0		//	Schmit trigger disable ( bit 8 ).
#define ADC_HTRH_HT7		7		//	Schmit trigger disable ( bit 7 ).
#define ADC_HTRH_HT6		6		//	Schmit trigger disable ( bit 6 ).
#define ADC_HTRH_HT5		5		//	Schmit trigger disable ( bit 5 ).
#define ADC_HTRH_HT4		4		//	Schmit trigger disable ( bit 4 ).
#define ADC_HTRH_HT3		3		//	Schmit trigger disable ( bit 3 ).
#define ADC_HTRH_HT2		2		//	Schmit trigger disable ( bit 2 ).

//	Register name : ADC_HTRL.

#define ADC_HTRL_HT1		1		//	Schmit trigger disable ( bit 1 ).
#define ADC_HTRL_HT0		0		//	Schmit trigger disable ( bit 0 ).

//	Register name : ADC_AWSRH.

#define ADC_AWSRH_AWS9		1		//	Analog watchdog status flag 9.
#define ADC_AWSRH_AWS8		0		//	Analog watchdog status flag 8.

//	Register name : ADC_AWSRL.

#define ADC_AWSRL_AWS7		7		//	Analog watchdog status flag 7.
#define ADC_AWSRL_AWS6		6		//	Analog watchdog status flag 6.
#define ADC_AWSRL_AWS5		5		//	Analog watchdog status flag 5.
#define ADC_AWSRL_AWS4		4		//	Analog watchdog status flag 4.
#define ADC_AWSRL_AWS3		3		//	Analog watchdog status flag 3.
#define ADC_AWSRL_AWS2		2		//	Analog watchdog status flag 2.
#define ADC_AWSRL_AWS1		1		//	Analog watchdog status flag 1.
#define ADC_AWSRL_AWS0		0		//	Analog watchdog status flag 0.

//	Register name : ADC_AWCRH.

#define ADC_AWCRH_AWEN9		1		//	Analog watchdog enable bit 9.
#define ADC_AWCRH_AWEN8		0		//	Analog watchdog enable bit 8.

//	Register name : ADC_AWCRL.

#define ADC_AWCRL_AWEN7		7		//	Analog watchdog enable bit 7.
#define ADC_AWCRL_AWEN6		6		//	Analog watchdog enable bit 6.
#define ADC_AWCRL_AWEN5		5		//	Analog watchdog enable bit 5.
#define ADC_AWCRL_AWEN4		4		//	Analog watchdog enable bit 4.
#define ADC_AWCRL_AWEN3		3		//	Analog watchdog enable bit 3.
#define ADC_AWCRL_AWEN2		2		//	Analog watchdog enable bit 2.
#define ADC_AWCRL_AWEN1		1		//	Analog watchdog enable bit 1.
#define ADC_AWCRL_AWEN0		0		//	Analog watchdog enable bit 0.

#endif

