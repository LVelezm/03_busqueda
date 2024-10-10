#include <iostream>
using namespace std;

struct monomio {
    int exp;
    int coef;
};

int secuencialDes(int n, monomio t[], monomio m) {
    int pos = 0;
    int i = 0;
    while (i < n && !(t[i].coef == m.coef && t[i].exp == m.exp)) {
        i = i + 1;
    }
    if (i < n) {
        pos = i;
        return pos;
    } else {
        pos = -1;
        return pos;
    }
}

int main() {
    int n;
    int pos;
    monomio mon;
    cout << "Escriba la cantidad de terminos: ";
    cin >> n;
    monomio ter[n];
    for (int i = 0; i < n; i++) {
        cout << "Escriba el coeficiente " << i + 1 << ": ";
        cin >> ter[i].coef;
        cout << "Escriba el exponente " << i + 1 << ": ";
        cin >> ter[i].exp;
    }
    cout << "Escriba el monomio a buscar:" << endl;
    cout << "Coeficiente: ";
    cin >> mon.coef;
    cout << "Exponente: ";
    cin >> mon.exp;

    pos = secuencialDes(n, ter, mon);
    if (pos != -1) {
        cout << "El monomio esta en la posicion: " << pos+1;
    } else {
        cout << "El monomio no se encuentra en el polinomio";
    }

    return 0;
}
