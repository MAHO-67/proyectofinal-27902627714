#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int opcion = 0;
    int totalVentas = 0;
    double totalVendido = 0;
    double totalDescuentos = 0;
    double ventaMayor = 0;
    double ventaMenor = 0;
    bool primeraVenta = true;

    cout << fixed << setprecision(2);

    while (opcion != 3) {
        cout << "\n=== CAJA 1 ===\n";
        cout << "1. Registrar venta\n";
        cout << "2. Ver resumen parcial\n";
        cout << "3. Cerrar caja y salir\n";
        cout << "Elige opcion: ";
        
        if(!(cin >> opcion)){
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Error: opcion invalida.\n";
            continue;
        }

        if (opcion < 1 || opcion > 3) {
            cout << "Error: opcion invalida.\n";
            continue;
        }

        if (opcion == 1) {
            double precio = -1;
            double subtotal = 0;
            cout << "\n-- Venta (0 para terminar) --\n";
            
            while (true) {
                cout << "Precio Q: ";
                if(!(cin >> precio)){
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Error: precio invalido\n";
                    continue;
                }
                if (precio < 0) { cout << "Error: precio negativo\n"; continue; }
                if (precio == 0) break;
                
                int cant;
                while(true){
                    cout << "Cantidad 1-100: ";
                    if(!(cin >> cant)){
                        cin.clear();
                        cin.ignore(10000, '\n');
                        cout << "Error: cantidad invalida\n";
                        continue;
                    }
                    if (cant < 1 || cant > 100) { cout << "Error: cantidad 1-100\n"; continue; }
                    break;
                }
                subtotal += precio * cant;
                cout << "Subtotal actual: Q" << subtotal << endl;
            }
            
            if(subtotal == 0){
                cout << "Venta cancelada.\n";
                continue;
            }

            // HITO 2 - Descuentos, IVA, total
            double porcDesc = 0;
            if (subtotal < 100) porcDesc = 0;
            else if (subtotal < 500) porcDesc = 5;
            else porcDesc = 10;

            double montoDesc = subtotal * porcDesc / 100.0;
            double conDesc = subtotal - montoDesc;
            double iva = conDesc * 0.12;
            double total = conDesc + iva;

            double pago;
            while(true){
                cout << "Total a pagar Q" << total << " - Monto recibido Q";
                if(!(cin >> pago)){
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Error: monto invalido\n";
                    continue;
                }
                if(pago < total){ cout << "Error: pago menor al total\n"; continue; }
                break;
            }
            double cambio = pago - total;

            cout << "\n==== RECIBO ====\n";
            cout << "Subtotal: Q" << subtotal << endl;
            cout << "Descuento " << porcDesc << "%: -Q" << montoDesc << endl;
            cout << "IVA 12%: Q" << iva << endl;
            cout << "TOTAL: Q" << total << endl;
            cout << "Pago: Q" << pago << " Cambio: Q" << cambio << endl;

            totalVentas++;
            totalVendido += total;
            totalDescuentos += montoDesc;
            if(primeraVenta){
                ventaMayor = total;
                ventaMenor = total;
                primeraVenta = false;
            } else {
                if(total > ventaMayor) ventaMayor = total;
                if(total < ventaMenor) ventaMenor = total;
            }

        } else if (opcion == 2) {
            cout << "\n--- Resumen parcial ---\n";
            if(totalVentas == 0){
                cout << "Aun no hay ventas.\n";
            } else {
                cout << "Ventas: " << totalVentas << endl;
                cout << "Total vendido: Q" << totalVendido << endl;
                cout << "Mayor: Q" << ventaMayor << " Menor: Q" << ventaMenor << endl;
                cout << "Promedio: Q" << totalVendido / totalVentas << endl;
                cout << "Descuentos otorgados: Q" << totalDescuentos << endl;
            }
        }
    }

    cout << "\n=== CIERRE DE CAJA ===\n";
    if(totalVentas == 0) cout << "Sin ventas hoy.\n";
    else {
        cout << "Ventas: " << totalVentas << " Total: Q" << totalVendido << endl;
        cout << "Mayor: Q" << ventaMayor << " Menor: Q" << ventaMenor << endl;
        cout << "Promedio: Q" << totalVendido / totalVentas << endl;
        cout << "Descuentos: Q" << totalDescuentos << endl;
    }
    return 0;
}