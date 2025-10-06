#include <iostream>
using namespace std;

int comida;

int main () {
   do {
   cout << "=== Menu ===" << endl;
   cout << "1) Torta" << endl;
   cout << "2) Palomitas" << endl;
   cout << "3) Agua" << endl;
   cout << "4) Salir" << endl;
   cout << "Selecciona el numero del producto a elegir: ";
   cin >> comida;

if (comida == 1) {
    cout << "La torta vale $35" << endl;
} else if (comida == 2) {
        cout << "Las palomitas valen $15" << endl;
} else if (comida == 3) {
    cout << "El agua vale $20" << endl;
} else if (comida == 4) {
    
} else {
    cout << "Ingrese un numero valido";
}
   } while (comida != 4);
   
    return 0;
}