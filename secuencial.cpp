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
int main(){
	int n;
	int num;
	int pos;
	cout<<"Cantidad de elementos del arreglo: ";
	cin>>n;
	int A[n];
	for(int i=0; i<n;i++){
		cout<<"numero "<< i+1 <<": ";
		cin>>A[i];  
	}
	cout<<"Indique el numero a buscar: ";
	cin>>num;
	pos=secuencialDes(n,A,num);
	cout<<"EL numero esta en la posicion: "<<pos+1;
	return 0;
}
