#include <iostream>// para la manipulacion del flujo de datos
#include <string> // para usar string
#include<iomanip> // para poder usar setW()
#include<stdlib.h> // para usar la funcion system("cls")
#include<windows.h>
#include<time.h>
using namespace std;

void menu(); // funxion del menu principal
void vsCPU(string nombre[]); // funcion para el modo versus maquina
void Vs2();// funcion para el modo dos jugadores
void historial(string nombre[]);// funcion para ver el historial
string nuevoJugador(string nombre[]); // agrega un nuevo jugador

void color(){
	int color = 1 + rand() % 7 ;
	switch(color){
		case 1: 
			system("color 1");
			break;
		case 2: 
			system("color 2");
			break;
		case 3: 
			system("color 3");
			break;
		case 4: 
			system("color 4");
			break;		
		case 5: 
			system("color 5");
			break;
		case 6: 
			system("color 6");
			break;
		case 7:
			system("color 7");
			break;
	}
}

int main()
{
	srand( time(NULL));	
	//menu();// se abre el menu
	menu();

	system("pause"); // para que no se cierre la consola
    return 0;
}

void menu(){ // todo lo relacionado con el menu prinncipal

	int opcion; // la opcion que el usuario ingresara
	string nombre[20]; // solo se puden haber 20 jugadores
	bool jugando = true;
	for (int i = 0; i < 20; ++i)
	{
		nombre[i]= "-";
	}
	do{


	do{
	
	color();
	system("cls"); // limpia la pantalla
	cout<<nombre[0];
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
		Sleep(1000);
	}
	}while(opcion<1 || opcion > 4);

	switch(opcion){ // para seleccionar la funcion que el usuario desea
		case 1: 
			cout<<"Abriendo modo versus maquina \n";
			system("cls");//limpia la pantalla 
			vsCPU(nombre);// llama a la funcion que se encarga del modo vs maquina
			break;
			case 2: 
			cout<<"Abriendo modo 2 jugadores\n";
			system("cls");//limpia la pantalla 
			Vs2(); // funcion para jugar 1 vs 1
			break;
			case 3: 
			cout<<"Historial de juego \n";
			system("cls");//limpia la pantalla 
			historial(nombre); // funcion que muesta el historial del juego
			break;
			case 4: 
			system("cls");//limpia la pantalla 
			cout<<"*** Gracias por jugar :) ***\n";
			Sleep(1000);
			jugando = false;
			break;
			
	}
	}while(jugando);
	
}
void vsCPU(string nombre[]){
	string jugador = nuevoJugador(nombre);
	int op =0;
	int empates = 0;
	int ganados = 0;
	int perdidos = 0;
	system("cls");
	cout<<setw(25)<<jugador<<" VS "<<"DeepBlue2020"<<endl;
	cout<<"********************** VS CPU **************************"<<endl;
	cout<<"*"<<setw(55)<<"*"<<endl;
	cout<<"*    1. Papel"<<setw(43)<<"*"<<endl;
	cout<<"*    2. Piedra"<<setw(42)<<"*"<<endl;
	cout<<"*    3. Tijera"<<setw(42)<<"*"<<endl;
	cout<<"*"<<setw(55)<<"*"<<endl;
	cout<<"*    "<<setw(4)<<"Empates ["<<empates<<"]"<<"    "<< setw(4)<<"Ganados ["<<ganados<<"]"<<"    "<<setw(6)<<"Perdidas ["<<perdidos<<"]        *"<<endl;
	cout<<"********************************************************"<<endl;
	cout<<"Seleccion: ";
	cin>>op;

}

void historial(string nombre[]){
	cout<<"Nombre"<<setw(20)<<"Puntuacion"<<endl;
		
	for (int i = 0; i < 20; ++i)
	{
		if (nombre[i] != "-")
		{
			cout<<"  "<<nombre[i]<<setw(20)<<"Puntuacion"<<endl;
		}
	}

	system("pause");
}

void Vs2(){

}

void historial(){

}

string nuevoJugador(string nombre[]){ // se pasa por referencia para afectar a la variable
	cout<<"ingrese su nombre "<<endl;
	for (int i = 0; i < 20; ++i)
	{
		
		if (nombre[i] == "-")
		{
			//cout<<" se esta guardando "<<i<<endl;
			cin.ignore();
			getline(cin, nombre[i]);
			return nombre[i];
			break;
		}
		
	}
	return "error";
}