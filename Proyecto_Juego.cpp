#include <iostream>// para la manipulacion del flujo de datos
#include <string> // para usar string
#include<iomanip> // para poder usar setW()
#include<stdlib.h> // para usar la funcion system("cls")

using namespace std;

void menu(); // funxion del menu principal
void vsCPU(); // funcion para el modo versus maquina
void Vs2();// funcion para el modo dos jugadores
void historial();// funcion para ver el historial
void nuevoJugador(string nombre[]); // agrega un nuevo jugador

int main()
{
	
	menu();// se abre el menu


	system("pause"); // para que no se cierre la consola
    return 0;
}

void menu(){ // todo lo relacionado con el menu prinncipal

	int opcion; // la opcion que el usuario ingresara
	do{

	system("cls"); // limpia la pantalla
	cout<<"*********************MENU PRINCIPAL*********************"<<endl;
	cout<<"*"<<setw(55)<<"*"<<endl;
	cout<<"*    1. Vs CPU"<<setw(42)<<"*"<<endl;
	cout<<"*    2. 2 Jugadores"<<setw(37)<<"*"<<endl;
	cout<<"*    3. Historial de juego (Puntuaciones)"<<setw(15)<<"*"<<endl;
	cout<<"*    4. Salir"<<setw(43)<<"*"<<endl;
	cout<<"*"<<setw(55)<<"*"<<endl;
	cout<<"********************************************************"<<endl;
	cout<<"Seleccion: ";
	cin>>opcion; // para que el usuario ingrese una opcion
	if ( opcion<1 || opcion > 4 )
	{
		cout<<"opcion no valida \n"; // en caso de que la opcion no este en el rango disponible
	}
	}while(opcion<1 || opcion > 4);

	switch(opcion){ // para seleccionar la funcion que el usuario desea
		case 1: 
			cout<<"Abriendo modo versus maquina \n";
			system("cls");//limpia la pantalla 
			vsCPU();// llama a la funcion que se encarga del modo vs maquina
			break;
			case 2: 
			cout<<"Abriendo modo 2 jugadores\n";
			system("cls");//limpia la pantalla 
			Vs2(); // funcion para jugar 1 vs 1
			break;
			case 3: 
			cout<<"Historial de juego \n";
			system("cls");//limpia la pantalla 
			historial(); // funcion que muesta el historial del juego
			break;
			case 4: 
			system("cls");//limpia la pantalla 
			cout<<"*** Gracias por jugar :) ***\n";
			break;
	}
}
void vsCPU(){

	cout<<"********************** VS CPU **************************"<<endl;
	cout<<"*"<<setw(55)<<"*"<<endl;
	cout<<"*    1. Papel"<<setw(43)<<"*"<<endl;
	cout<<"*    1. Piedra"<<setw(42)<<"*"<<endl;
	cout<<"*    1. Tijera"<<setw(42)<<"*"<<endl;
	cout<<"*"<<setw(55)<<"*"<<endl;
	cout<<"********************************************************"<<endl;
	cout<<"Seleccion: ";
	
}

void Vs2(){

}

void historial(){

}

void nuevoJugador(string nombre[]){

}