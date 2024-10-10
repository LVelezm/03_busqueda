#include <iostream>
using namespace std;

struct Fecha {
    int dia;
    int mes;
    int anio;
};

struct Personal {
    string dni;
    string nom;
    Fecha fecha;
};

bool compararFechas(Fecha f1, Fecha f2) {
    if (f1.anio != f2.anio) {
        return f1.anio < f2.anio;
    }
    if (f1.mes != f2.mes) {
        return f1.mes < f2.mes;
    }
    return f1.dia < f2.dia;
}

void insertarYOrdenar(Personal p[], int n, Personal nuevo) {
    p[n] = nuevo;
    int i = n;

    while (i > 0 && compararFechas(p[i].fecha, p[i - 1].fecha)) {
        Personal aux = p[i];
        p[i] = p[i - 1];
        p[i - 1] = aux;
        i--;
    }
}

int busquedaBinaria(Personal p[], int n, Fecha fb) {
    int izq = 0, der = n - 1;

    while (izq <= der) {
        int medio = izq + (der - izq) / 2;
        if (compararFechas(p[medio].fecha, fb)) {
            izq = medio + 1;
        } else if (compararFechas(fb, p[medio].fecha)) {
            der = medio - 1;
        } else {
            return medio;
        }
    }
    return -1;
}

int main() {
    Personal per[50];
    int n;
    cout << "Ingrese la cantidad de registros de personal: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Personal nuevo;
        cout << "Ingrese DNI: ";
        cin >> nuevo.dni;
        cout << "Ingrese nombre: ";
        cin >> nuevo.nom;
        cout << "Ingrese fecha de nacimiento (dia mes anio): ";
        cin >> nuevo.fecha.dia >> nuevo.fecha.mes >> nuevo.fecha.anio;

        insertarYOrdenar(per, i, nuevo); 
    }

    Fecha fb;
    cout << "Ingrese fecha de nacimiento a buscar (dia mes anio): ";
    cin >> fb.dia >> fb.mes >> fb.anio;

    int r = busquedaBinaria(per, n, fb);
    if (r != -1) {
        cout << "Personal encontrado: " << per[r].nom << " (DNI: " << per[r].dni << ")" << endl;
    } else {
        cout << "Personal no encontrado." << endl;
    }

    return 0;
}
