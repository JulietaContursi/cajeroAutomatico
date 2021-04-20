//Programa que simula un cajero automatico con un saldo incial de 1000 Dolares

#include <iostream>

using namespace std;

int main() {
	int saldo_inicial = 1000;
	int saldo, reintegro, opcion, agregar;
	
	cout<<"\tBienvenido a su cajero virtual";
	cout<<"\nEscoja una opcion: ";
	cout<<"\n1. Ingreso en cuenta";
	cout<<"\n2. Reintegro";
	cout<<"\n3. Ver saldo de cuenta";
	cout<<"\n0. Salir";
	cout<<"\nOpcion: ";
	
	cin>>opcion;
	
	if(opcion==1){
		cout<<"\nIngrese la cantidad a depositar: ";
		cin>>agregar;
		saldo = saldo_inicial + agregar;
		cout<<"\nCantidad disponible en cuenta: ";
		
	}
	
	else if(opcion==2){
		cout<<"\nCuanta cantidad desea retirar: ";
		cin>>reintegro;
		if(reintegro>1000){
			cout<<"\nLa cantidad digitada es mayor a 1000, digite de nuevo la cantidad que desea retirar";
			cin>>reintegro;
			
		}
		
		saldo = saldo_inicial - reintegro;
		cout<<"\nCantidad disponible en cuenta: "<<saldo;
		
	}

	else if(opcion ==3){
		cout<<"\nLa cantidad disponible en cuenta es de: "<<saldo_inicial;
		
	}
	
	else if(opcion ==0){
		cout<<"\nGracias por utilizar nuestro cajero automatico";
		
	}
	
	else{
		cout<<"\nLa opcion es incorrecta";
	}
	
	cin.get();
	return 0;
}

