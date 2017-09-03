
/******************************************************************************
*
* MSP432 blink.c - P1.0 port toggle
*
* CMSIS compliant coding
*
******************************************************************************/

#include "msp.h"
#include "blink.h"

// CAMBIOSSSSSS 

// HACIENDO CAMBIOS TONTOS JOJOSSEEEE

// LULUISAAA QUESADAAAAAA HOLAAAAA :) :) :)

// cambios vacilonessss

/// CAMBIOSSSSS

// FDJHFJFHSHGJDSHFGJKHDJGD

// ***********************************
// Main loop
// ***********************************
volatile uint16_t	g_TimerCount =0;
void main(void)
{
    Setup();
   while(1)
   {
	   // - Wait for events
	   __wfe();
   }
}

// **********************************
// Interrupt service routine for
// Timer A0
// **********************************
void TA0_0_ISR(void)
{
	// - Divide the clock further, to achieve human readable times.
	if(g_TimerCount == TIMERA0_COUNT)
	{
		// - Toggle P1.0
		P1->OUT ^= BIT0;
		g_TimerCount = 0U;

	}
	else
	{
		g_TimerCount+=1;
	}
	return;
}

// **********************************
// Setup function for the application
// @input - none
// @output - none
// **********************************
void Setup(void)
{
	// ****************************
	//         DEVICE CONFIG
	// ****************************
	// - Disable WDT
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;


	// ****************************
	//         PORT CONFIG
	// ****************************
	// - P1.0 is connected to the Red LED
	P1->DIR |= BIT0;

	// ****************************
	//       TIMER CONFIG
	// ****************************
	// - Disable all interrupts
	// - Configure Timer A0 with SMCLK, Division by 8, Enable the interrupt
	// - Enable the interrupt in the NVIC
	// - Start the timer in UP mode.
	// - Re-enable interrupts
	__disable_irq();
	TIMER_A0->CTL = TIMER_A_CTL_SSEL__SMCLK | TIMER_A_CTL_ID__2 | TIMER_A_CTL_IE;
	NVIC_SetPriority(TA0_N_IRQn,1);
	NVIC_EnableIRQ(TA0_N_IRQn);
	TIMER_A0->CCR[0] = 0xFFFF;
	TIMER_A0->CTL |=  TIMER_A_CTL_MC__UP;
	__enable_irq();

	return;
}


// PROBANDO CODE COMPOSER STUDIO Y GITHUB A LA VEZ!!!
/******************************************************************************
*
* MSP432 blink.c - P1.0 port toggle
*
* CMSIS compliant coding
*
******************************************************************************/


// JOSE PABLO
// Hola JOSE!


#include "msp.h"
#include "blink.h"

// CAMBIOSSSSSS

// HACIENDO CAMBIOS TONTOS JOJOSSEEEE

// LULUISAAA QUESADAAAAAA HOLAAAAA :) :) :)

// cambios vacilonessss

/// CAMBIOSSSSS

// FDJHFJFHSHGJDSHFGJKHDJGD

// ***********************************
// Main loop
// ***********************************
volatile uint16_t	g_TimerCount =0;
void main(void)
{
    Setup();
   while(1)
   {
	   // - Wait for events
	   __wfe();
   }
}

// **********************************
// Interrupt service routine for
// Timer A0
// **********************************
void TA0_0_ISR(void)
{
	// - Divide the clock further, to achieve human readable times.
	if(g_TimerCount == TIMERA0_COUNT)
	{
		// - Toggle P1.0
		P1->OUT ^= BIT0;
		g_TimerCount = 0U;

	}
	else
	{
		g_TimerCount+=1;
	}
	return;
}

// **********************************
// Setup function for the application
// @input - none
// @output - none
// **********************************
void Setup(void)
{
	// ****************************
	//         DEVICE CONFIG
	// ****************************
	// - Disable WDT
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;


	// ****************************
	//         PORT CONFIG
	// ****************************
	// - P1.0 is connected to the Red LED
	P1->DIR |= BIT0;

	// ****************************
	//       TIMER CONFIG
	// ****************************
	// - Disable all interrupts
	// - Configure Timer A0 with SMCLK, Division by 8, Enable the interrupt
	// - Enable the interrupt in the NVIC
	// - Start the timer in UP mode.
	// - Re-enable interrupts
	__disable_irq();
	TIMER_A0->CTL = TIMER_A_CTL_SSEL__SMCLK | TIMER_A_CTL_ID__2 | TIMER_A_CTL_IE;
	NVIC_SetPriority(TA0_N_IRQn,1);
	NVIC_EnableIRQ(TA0_N_IRQn);
	TIMER_A0->CCR[0] = 0xFFFF;
	TIMER_A0->CTL |=  TIMER_A_CTL_MC__UP;
	__enable_irq();

	return;
}

