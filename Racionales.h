/*
 * =====================================================================================
 *
 *       Filename:  Racional.h
 *
 *    Description:  Encabezado para definir la plantilla de los números racionales.
 *
 *        Created:  2019-08-05
 *
 *         Author:  Isaac Esquivel Soto isaacesquivelsoto@gmail.com
 *
 * =====================================================================================
 */

#ifndef NUMEROSRACIONALES_RACIONAL_H
#define NUMEROSRACIONALES_RACIONAL_H
#include <sstream>

class Racional {
	// Variables
	int numerador, denominador;
	// Métodos
	static int calcularMCD(int num, int den);

public:
	// Constructores
	Racional();
	Racional(int numerador, int denominator);

	// Métodos
	static void simplificarFraccion(Racional& fraccion);
	Racional sumFraccion(Racional fraccion);
	std::string obtenerString();

	int getNumerador() const;

	void setNumerador(int numerador);

	int getDenominador() const;

	void setDenominador(int denominador);

	Racional restFraccion(Racional fraccion);

	Racional multFraccion(Racional fraccion);

	Racional divFraccion(Racional fraccion);

	Racional elevFraccion();
};


#endif //NUMEROSRACIONALES_RACIONAL_H
