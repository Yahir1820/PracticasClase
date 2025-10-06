#include <iostream>
using namespace std;

int comida;

int main () {
   do {
   cout << "=== Menu ===" << endl;
   cout << "1) Torta" << endl;
   cout << "2) Palomitas" << endl;
   cout << "3) Agua" << endl;
   cout << "Selecciona el numero del producto a elegir: ";
   cin >> comida;

switch (comida) {
    case 1:
        cout << "La torta vale $35" << endl;
        break;
    case 2:
        cout << "Las palomitas valen $15" << endl;
        break;
    case 3:
        cout << "El agua vale $20" << endl;
        break;
    default:
        cout << "Ingrese una opcion valida";
        break;
}
} while (comida != 4);
   
    return 0;
}