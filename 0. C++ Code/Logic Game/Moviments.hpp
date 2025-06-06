#pragma once
#ifndef MOVIMENT_HPP
#define MOVIMENTS_HPP

#include "Posicio.hpp"
#define MAX_CAMI 10

class Moviment
{
public:
	Moviment() : m_NPosicions(0) {}
	Moviment(const Moviment& other);
	bool equals(const Moviment& other) const;
	Moviment& operator=(const Moviment& other);
	void afegeiexPosicio(const Posicio& P); // Afegim una posicio al cam�.
	int getNPosicions() const { return m_NPosicions; } // Retorna quantes posicions hi ha al cam�.
	Posicio getPosicio(int i) const; // Retorna la posici� 'i' del cam�.

private:

	Posicio m_Cami[MAX_CAMI]; // Cam� de posicions.
	int m_NPosicions; // Quantes posicions porta el moviment.

};

#endif