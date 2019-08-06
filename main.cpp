/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Numeros Racionales
 *
 *        Created:  2019-08-05
 *
 *         Author:  Isaac Esquivle Soto isaacesquivelsoto@gmail.com
 *
 * =====================================================================================
 */

#include <iostream>
#include "Racionales.h"

using namespace std;

int main() {
	Racional fraccionA(20, 8);
	Racional fraccionB(10, 4);
	Racional fraccionAux;

	std::cout << "\nTutorial -Números Racionales-\n" << std::endl;

	std::cout << "SIMPLIFICACION de Fracción A: " << fraccionA.obtenerString() << std::endl;
	Racional::simplificarFraccion(fraccionA);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << std::endl;

	std::cout << "SIMPLIFICACIÓN de Fracción B: " << fraccionB.obtenerString() << std::endl;
	Racional::simplificarFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionB.obtenerString() << std::endl;

	std::cout << "\nSUMAR FRACCIONES" << std::endl;
	fraccionAux = fraccionA.sumFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " + " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << std::endl;

	std::cout << "\nResta FRACCIONES" << std::endl;
	fraccionAux = fraccionA.restFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " - " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << std::endl;

	std::cout << "\nMultiplicar FRACCIONES" << std::endl;
	fraccionAux = fraccionA.multFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " * " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << std::endl;

	std::cout << "\nDividir FRACCIONES" << std::endl;
	fraccionAux = fraccionA.divFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " / " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << std::endl;

	std::cout << "\nElevar FRACCIONES" << std::endl;
	fraccionAux = fraccionA.elevFraccion();
	std::cout << "RESULTADO: (" << fraccionA.obtenerString() << ") ^2 " <<
		" = " << fraccionAux.obtenerString() << std::endl;

	return 0;
}