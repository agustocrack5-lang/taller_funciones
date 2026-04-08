//Ejercicio 1.1:
#include <iostream>
using namespace std;

int main() {
    double saldo = 1500.00;
    double& ref = saldo; // ref es otro nombre para saldo
    ref = 2000.00;
    cout << "saldo = " << saldo << endl; // 2000
    cout << "ref = " << ref << endl; // 2000
    return 0;
}

//Ejercicio 1.2:
#include <iostream>
using namespace std;
void aplicarDescuento(double& saldo, double porcentaje) {
saldo = saldo - (saldo * porcentaje);
}
int main() {
double cuenta = 500.00;
aplicarDescuento(cuenta, 0.10); // aplica 10% de descuento
cout << "Saldo final: " << cuenta << endl; // 450
return 0;
}

//Ejercicio 1.3:
#include <iostream>
using namespace std;

void intercambiar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
int x = 15, y = 42;
intercambiar(x, y);
cout << "x = " << x << ", y = " << y << endl;
// output correcto: x = 42, y = 15
return 0;
}
