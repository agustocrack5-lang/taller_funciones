//Ejercicio 2.1:
#include <iostream>
using namespace std;
int main() {
    int stock = 250;
    int* p = &stock;
    cout << stock << endl; // (1) 250
    cout << p << endl; // (2) 0x7a497ff924 (direccion hexadecimal)
    cout << *p << endl; // (3) 250
    *p = 180; // se vendieron 70 unidades
    cout << stock << endl; // (4) 180
    return 0;
}


//Ejercicio 2.2:
#include<iostream>
using namespace std;

void aplicarIVA(double* precio, double iva) {
    *precio *= (1 + iva);
}

int main() {
    double precio = 100.00;
    aplicarIVA(&precio, 0.12);
    cout << "Precio con IVA: " << precio << endl; // 112.00
    return 0;
}
/*
Ejercicio 2.3:
1. Con referencia: incrementar(contador, 5); --> Pasas la variable directamente
   Con punteros: incrementar(&contador, 5); --> Pasas la direccion de la variable usando &

2. El operador que aparece solo en el puntero es "*val". "*" sirve para desreferenciar.

3. Si, en ambos casos despues de ejecutar contador vale 15. Ya que tanto referencias como punteros permiten modificar la variable original.
*/
