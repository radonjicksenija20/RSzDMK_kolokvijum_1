/*
 * timer.c
 *
 *  Created on: May 16, 2021
 *      Author: ksenija
 */

#include "timer.h"

/******************************************************************************************/



void timer0InteruptInit()
{
    // Inicijalizacija tajmera 0 tako da perioda prekida bude 1ms
    TCCR0A = 0x02;
    TCCR0B = 0x03;
    OCR0A = 249;
    TIMSK0 = 0x02;

    // Podesavanje globalne dozvole prekida
    sei();
}

/******************************************************************************************/

unsigned long timer0DelayMs(unsigned long delay_length)
{
    unsigned long t0; // Trenutak pocevsi od kog se racuna pauza

    // Implementacija pauze
    t0 = ms;
    while ((ms - t0) < delay_length)
    ;  // Pauza delay_length milisekundi

    return ms;
}


/**
 * ISR - prekidna rutina tajmera 0 u modu CTC
 */
ISR(TIMER0_COMPA_vect)
{
    // Inkrementovanje broja milisekundi koje su prosle od pokretanja aplikacije
    ms++;
}
