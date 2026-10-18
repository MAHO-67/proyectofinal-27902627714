#include <iostream>
using namespace std;

int main() {
    int opcion = 0;
    int totalVentas = 0;
    double totalVendido = 0;

    while (opcion != 3) {
        cout << "\n=== CAJA 1 ===\n";
        cout << "1. Registrar venta\n";
        cout << "2. Ver resumen parcial\n";
        cout << "3. Cerrar caja y salir\n";
        cout << "Elige opcion: ";
        cin >> opcion;

        if (opcion < 1 || opcion > 3) {
            cout << "Error: opcion invalida.\n";
            continue;
        }

        if (opcion == 1) {
            double precio = -1;
            double subtotal = 0;
            cout << "n\n-- Venta (0 para terminar) --\n";
            while (true) {
                cout << "Precio Q: ";
                cin >> precio;
                if (precio < 0) { cout << "Error: precio negativo\n"; continue; }
                if (precio == 0) break;
                int cant;
                cout << "Cantidad 1-100: ";
                cin >> cant;
                if (cant < 1 || cant > 100) { cout << "Error: cantidad 1-100\n"; continue; }
                subtotal += precio * cant;
            }
            cout << "Subtotal: Q" << subtotal << endl;
            totalVentas++;
            totalVendido += subtotal;
        }
        if (opcion == 2) {
            if (totalVentas == 0) cout << "Aun no hay ventas\n";
            else cout << "Ventas: " << totalVentas << " Total Q" << totalVendido << endl;
        }
    }
    cout << "Caja cerrada\n";
    return 0;
}
