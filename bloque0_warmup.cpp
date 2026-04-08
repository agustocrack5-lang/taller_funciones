// Ejercicio 0.1:
#include <iostream>
using namespace std;

void resetSensor(int lectura) {
    lectura = 0;
    cout << "Dentro de la funcion: " << lectura << endl;
}

int main() {
    int temperatura = 38;
    resetSensor(temperatura);
    cout << "En main, temperatura = " << temperatura << endl; // tempertarura = 38
    return 0;
}

//Ejercicio 0.2: 
#include <iostream>
using namespace std;

void resetSensor(int& lectura) { // <-- nota el &
    lectura = 0;
    cout << "Dentro de la funcion: " << lectura << endl;
}

int main() {
    int temperatura = 38;
    resetSensor(temperatura);
    cout << "En main, temperatura = " << temperatura << endl; // temperatura = 0
    return 0;
}
//Ejercicio 0.3:
#include<iostream>
using namespace std;

void aplicarIVA(double& precio, double iva) {
    precio *= (1 + iva);
}

int main() {
    double precio = 100.00;
    aplicarIVA(precio, 0.12);
// aqui, precio vale: 112.00
}
