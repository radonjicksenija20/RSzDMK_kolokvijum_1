/*
 * pin.h
 *
 *  Created on: May 16, 2021
 *      Author: ksenija
 */
#include "avr/io.h"

#ifndef PIN_H_
#define PIN_H_

/// Makro za podesavanje visoke vrednosti signala na pinu
#define HIGH 1
/// Makro za podesavanje niske vrednosti signala na pinu
#define LOW 0

/// Makro za podesavanje izlaznog smera pina
#define OUTPUT 1
/// Makro za podesavanje ulaznog smera pina
#define INPUT 0

/// Makro za selektovanje porta B
#define PORT_B 0
/// Makro za selektovanje porta C
#define PORT_C 1
/// Makro za selektovanje porta D
#define PORT_D 2

/// Makro za selektovanje pina na koji je povezana dioda
#define DIODE_PIN 5

/// Makro za podesavanje periode u brzom rezimu treptanja
#define FAST 200
/// Makro za podesavanje periode u sporom rezimu treptanja
#define SLOW 1000

/// Makro za podesavanje broja brzih treptaja
#define FAST_REPETITIONS 15
/// Makro za podesavanje broja sporih treptaja
#define SLOW_REPETITIONS 3




/**
 * pinSetValue - Funkcija koja postavlja vrednost na pinu
 * @param port - ulaz tipa unsigned char - Port na kojem je pin ciju vrednost potrebno postaviti
 * @param pin - ulaz tipa unsigned char - Pin ciju je vrednost potrebno postaviti
 * @param value - ulaz tipa unsigned char - Vrednost koju je potrebno postaviti na pin
 * @return Nema povratnu vrednost
 */
void pinSetValue(unsigned char port, unsigned char pin, unsigned char value);

/**
 * pinInit - Funkcija koja implementiran inicijalizaciju pina
 * @param port - ulaz tipa unsigned char - Port na kojem je pin koji je potrebno inicijalizovati
 * @param pin - ulaz tipa unsigned char - Pin koji je potrebno inicijalizovati
 * @param direction - ulaz tipa unsigned char - Smer prema kojem je potrebno inicijalizovati pin
 * @return Nema povratnu vrednost
 */
void pinInit(unsigned char port, unsigned char pin, unsigned char direction);

#endif /* PIN_H_ */
