
/**      
  * ejercicio21.cpp
  *
  * Copyright 2015 Antonio Rodríguez Alaminos <aralaminos@correo.ugr.es>
  *
  * This program is free software; you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation; either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program; if not, write to the Free Software
  * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
  * MA 02110-1301, USA.
  */


// DEPENDENCIAS DEL PROGRAMA.
#include <iostream> 	//para poder utilizar las entradas y salidas del codigo
#include <cctype>
#include <stdio.h> 		//para el system pause articial
#include <stdlib.h> 	//dependencia para las llamadas system de windows
#include <unistd.h> 	//para poder utilizar el usleep y otros comandos
using namespace std;


// DECLARACIÓN DE VARIABLES GLOBALES
const char CAMBIO = 'a' - 'A';

//FUNCIONES

/**
 * Introducción personal al programa
 * @see Inicio
 */
void Inicio(){
	cout << "\t                                              ____   ___" << endl 
		<< "\t  /\\   /\\    ____    /\\   /\\  _____   ___.__. \\   \\ /  /" << endl
		<< "\t /  \\ /  \\ _/ ___\\  /  \\ /  \\ \\__  \\ <   |  |  \\      /" << endl
		<< "\t/    Y    \\\\  \\___ /    Y    \\ / __ \\_\\___  |  /      \\" << endl
		<< "\t\\_/\\___/\\_/ \\___  >\\_/\\___/\\_/(____  // ____| /___/\\   \\" << endl
		<< "\t                \\/                 \\/ \\/            \\__/" << endl << endl
		<< "                           \\ ||| /" << endl
		<< "     .-.________            (o o)                      ________.-." << endl
		<< "----/ \\_)_______)   +--oooO-----------------------+   (_______(_/ \\----" << endl
		<< "   (     ()___)     |                             |      (___()    )" << endl
		<< "         ()__)      |       EJERCCICIO: 21        |       (__()" << endl
		<< " ----\\___()_)       |                             |        (_()___/---" << endl
		<< "                    +-----------------Ooo---------+" << endl;
	usleep(2000000);
	system("clear");
}

/**
 * Salida personal del programa
 * @see Fin
 */  
void Fin(){
	cin.ignore(256,'\n');
	cout << "Press 'Enter' to continue: ... ";
	while ( getchar() != '\n');
	system("clear");
		cout << endl << endl << "\t@@@@@@@  @@@  @@@  @@@@@@@@     @@@@@@@@  @@@  @@@  @@@@@@@" << endl
		<< "\t@@@@@@@  @@@  @@@  @@@@@@@@     @@@@@@@@  @@@@ @@@  @@@@@@@@" << endl
		<< "\t  @@!    @@!  @@@  @@!          @@!       @@!@!@@@  @@!  @@@" << endl
		<< "\t  !@!    !@!  @!@  !@!          !@!       !@!!@!@!  !@!  @!@" << endl
		<< "\t  @!!    @!@!@!@!  @!!!:!       @!!!:!    @!@ !!@!  @!@  !@!" << endl
		<< "\t  !!!    !!!@!!!!  !!!!!:       !!!!!:    !@!  !!!  !@!  !!!" << endl
		<< "\t  !!:    !!:  !!!  !!:          !!:       !!:  !!!  !!:  !!!" << endl
		<< "\t  :!:    :!:  !:!  :!:          :!:       :!:  !:!  :!:  !:!" << endl
		<< "\t   ::    : :  :::  :: ::::      :: ::::   ::   ::   ::::  ::" << endl
		<< "\t   :      :   : :  : :: ::      : :: ::   ::   :    :: : :" << endl << endl << endl;
	usleep(2000000);	
	exit;
}

int main() {
	// PORTADA DE INICIO DEL EJERCICIO.
	Inicio();

	// DECLARACIÓN DE VARIABLES LOCALES
	char caracter;

	// ENTRADA DE DATOS DEL PROGRAMA
	do {
		cout << "Introduce un caracter: ";
		cin >> caracter;
		if (caracter < 'a' || caracter > 'z')
			cout << "El caracter introducido no en una minuscula. " << endl;
	} while (caracter < 'a' || caracter > 'z');
	
	// CUERPO DEL PROGRAMA 
	caracter -= CAMBIO;

	// SALIDA DE DATOS
	cout << "La letra en mayuscula es: " << caracter << endl;

	// FINAL Y PAUSA DEL SISTEMA.
	Fin();
}

 
