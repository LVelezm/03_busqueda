#include <iostream>
using namespace std;
int secuencialDes(int n, int A[], int num){
	int pos=0;
	int i=0;
	while(i<=n&&A[i]!=num){
		i=i+1;
	} 
	if(i<=n){
		pos=i;
		return pos;
	}else{
		return pos;
	} 
}
int secuencialOrd(int n, int A[], int num){
	int i=0;
	int pos;
	while(i<=n&&A[i]<num){
		i=i+1;
	}
	if(i>n||A[i]!=num){
		pos=-i;
		return pos;
	}else{
		pos=i;
		return pos;
	} 
}
int main(){
	int n;
	int num;
	int pos;
	int opcion;
	cout<<"Este programa buscara un dato de manera secuencial ordenada o desordenada"<<endl;
	cout<<"Cantidad de elementos del arreglo: ";
	cin>>n;
	int A[n];
	for(int i=0; i<n;i++){
		cout<<"numero "<< i <<": ";
		cin>>A[i];  
	}
	cout<<"Indique el numero a buscar: ";
	cin>>num;
	cout<<"Elija una opcion:"<<endl;
	cout<<"1. Busqueda secuencial desordenada"<<endl;
	cout<<"2. Busqueda secuencial ordenada"<<endl;
	cout<<"opcion: ";
	cin>>opcion;
	switch(opcion){
		case 1:
			pos=secuencialDes(n,A,num);
			cout<<"EL numero esta en la posicion: "<<pos;
			break;
		case 2:
			pos=secuencialOrd(n,A,num);
			cout<<"EL numero esta en la posicion: "<<pos;
			break;
		default:
			cout<<"Opcion invalida"<<endl;
	}
	return 0;
}
