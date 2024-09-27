#include <iostream>
using namespace std;
struct monomio{
	int exp;
	int coef;
};
int secuencialDes(int n, monomio t[], monomio mon){
	int pos=0;
	int i=0;
	while(i<=n&&(t[i].coef!=coef)&&(t[i].exp!=exp)){
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
	int coef;
	int exp;
	int pos;
	monomio monomio;
	cout<<"Escriba la cantidad de terminos: ";
	cin>>n;
	monomio ter[n];
	for(int i=0; i<n; i++){
		cout<<"Escriba el coeficiente "<< i+1 << ": "; 
		cin>> ter[i].coef;
		cout<<"Escriba el exponente "<< i+1 << ": ";
		cin>>ter[i].exp;
	}
	cout<<"Escriba el monomio a buscar:"<<endl;
	cin>>monomio.exp;
	cin
	pos = secuencialDes(n, ter, coef, exp );
	cout<<"El monomio esta en la posicion: "<<pos;
	return 0;
	}
