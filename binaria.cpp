#include <iostream>
using namespace std;
int binaria(int A[], int n,int num){
	int izq=1;
	int der=n;
	int cen=0;
	int pos;
	int m;
	while(izq<=der&&cen==0){
		m=(izq+der)/2;
		if(A[m]==num){
			cen=1;
		}else{
			if(A[m]<num){
				izq=m+1;
			}else{
				der=m-1;
			}
		}
	}
	if (cen==1){
		pos=m;
		return pos;
	}else{
		pos=-izq;
		return pos;
	}
}
int main(){
	int n;
	int num;
	int pos;
	int opcion;
	cout<<"Este programa buscara un dato de manera binaria"<<endl;
	cout<<"Cantidad de elementos del arreglo: ";
	cin>>n;
	int A[n];
	for(int i=0; i<n;i++){
		cout<<"numero "<< i <<": ";
		cin>>A[i];  
	}
	cout<<"Indique el numero a buscar: ";
	cin>>num;
	pos=binaria(A, n, num);
	cout<<"EL numero esta en la posicion: "<<pos;
	return 0;
}
