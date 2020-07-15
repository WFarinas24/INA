#include <iostream>
#include <string>
#include<iomanip>

using namespace std;

void menu(); // funxion del menu principal
void vsCPU(); // funcion para el modo versus maquina
void Vs2();// funcion para el modo dos jugadores
void historial();// funcion para ver el historial
void nuevoJugador(string nombre[]); // agrega un nuevo jugador

int main()
{
	
	menu();


	system("pause");
    return 0;
}

void menu(){

	int opcion;
	do{


	cout<<"*********************MENU PRINCIPAL*********************"<<endl;
	cout<<"*"<<setw(55)<<"*"<<endl;
	cout<<"*    1. Vs CPU"<<setw(42)<<"*"<<endl;
	cout<<"*    2. 2 Jugadores"<<setw(37)<<"*"<<endl;
	cout<<"*    3. Historial de juego (Puntuaciones)"<<setw(15)<<"*"<<endl;
	cout<<"*    4. Salir"<<setw(43)<<"*"<<endl;
	cout<<"*"<<setw(55)<<"*"<<endl;
	cout<<"********************************************************"<<endl;
	cout<<"Seleccion: ";
	cin>>opcion;
	if ( opcion<1 || opcion > 4 )
	{
		cout<<"opcion no valida \n";
	}
	}while(opcion<1 || opcion > 4);

	switch(opcion){
		case 1: 
			cout<<"Abriendo modo versus maquina \n";
			vsCPU();
			break;
			case 2: 
			cout<<"Abriendo modo 2 jugadores\n";
			Vs2();
			break;
			case 3: 
			cout<<"Historial de juego \n";
			historial();
			break;
			case 4: 
			cout<<"Gracias por jugar\n";
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