/*
 * timer.h
 *
 *  Created on: May 16, 2021
 *      Author: ksenija
 */

#include "avr/io.h"

/// Promenljiva koja skladisti broj milisekundi proteklih od pokretanja aplikacije
volatile unsigned long ms = 0;


#ifndef TIMER_H_
#define TIMER_H_

/**
 * timer0DelayMs - Funkcija koja implementira pauzu u broju milisekundi koji je prosledjen
 * kao parametar
 * @param delay_length - ulaz tipa unsigned long - Duzina pauze u milisekundama
 * @return Povratna vrednost je tipa unsigned long i ima vrednost broja milisekundi
 * proteklih od pocetka aplikacije do trenutka izlaska iz funkcije
 */
unsigned long timer0DelayMs(unsigned long delay_length);

/**
 * timer0InteruptInit - Funkcija koja inicijalizuje timer 0 tako da pravi prekide
 * svake milisekunde
 * @return Nema povratnu vrednost
 */
void timer0InteruptInit();

#endif /* TIMER_H_ */
