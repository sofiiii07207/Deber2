#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    char continuar;

    do {
        string base, cotizada;
        double tasa;
        double montoBase;
        double montoConvertido;
        string fechaHora;

        // Divisa base
        cout << "Ingrese la divisa base (3 letras): ";
        cin >> base;
        while (base.length() != 3) {
            cout << "La divisa debe tener exactamente 3 letras. Ingrese nuevamente: ";
            cin >> base;
        }

        // Divisa cotizada
        cout << "Ingrese la divisa cotizada (3 letras): ";
        cin >> cotizada;
        while (cotizada.length() != 3) {
            cout << "La divisa debe tener exactamente 3 letras. Ingrese nuevamente: ";
            cin >> cotizada;
        }

        // Tasa de cambio
        cout << "Ingrese la tasa de cambio: ";
        cin >> tasa;
        while (tasa <= 0) {
            cout << "La tasa debe ser mayor que cero. Ingrese nuevamente: ";
            cin >> tasa;
        }

        // Monto base
        cout << "Ingrese el monto base: ";
        cin >> montoBase;
        while (montoBase <= 0) {
            cout << "El monto debe ser mayor que cero. Ingrese nuevamente: ";
            cin >> montoBase;
        }

        // Fecha y hora
        cout << "Ingrese la fecha y hora (ej: 07-02-2026_18:50): ";
        cin >> fechaHora;

        // Calculo
        montoConvertido = montoBase * tasa;

        // Reporte
        cout << fixed;
        cout << "\n====== MARKET SNAPSHOT ======\n";
        cout << "Par de divisas : " << base << "/" << cotizada << endl;
        cout << "Fecha y hora   : " << fechaHora << endl;
        cout << "Tasa           : " << setprecision(6) << tasa << endl;
        cout << setprecision(2);
        cout << "Monto base     : " << montoBase << " " << base << endl;
        cout << "Monto convertido: " << montoConvertido << " " << cotizada << endl;
        cout << "=============================\n";

        // Continuar
        cout << "\nDesea realizar otra conversion? (s para si / cualquier tecla para no): ";
        cin >> continuar;

    } while (continuar == 's');

    return 0;
}
