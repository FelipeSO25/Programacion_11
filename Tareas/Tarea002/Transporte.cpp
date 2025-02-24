#include <iostream>
using namespace std;

int main() {
    // Precio base del boleto
    const double precio_base = 100.0;
    int edad;
    char tipo_boleto;

    // Solicitar la edad del usuario
    cout << "Ingrese su edad: ";
    cin >> edad;

    // Solicitar el tipo de boleto
    cout << "Elija el tipo de boleto (N para Normal, E para Estudiante, S para Senior): ";
    cin >> tipo_boleto;
    tipo_boleto = toupper(tipo_boleto); // Convertir la entrada a mayúscula por si se ingresa en minúsculas

    double precio_final = precio_base; // Inicializar el precio con el precio base

    // Si el usuario es menor de 5 años, el boleto es gratis
    if (edad < 5) {
        precio_final = 0;
        cout << "El boleto es gratis para menores de 5 años." << endl;
    }
    // Si el usuario elige 'E' (Estudiante), aplicar 50% de descuento
    else if (tipo_boleto == 'E') {
        precio_final = precio_base * 0.5;
        cout << "Descuento del 50% por ser estudiante." << endl;
    }
    // Si el usuario elige 'S' (Senior) y tiene más de 60 años, aplicar 30% de descuento
    else if (tipo_boleto == 'S' && edad > 60) {
        precio_final = precio_base * 0.7;
        cout << "Descuento del 30% por ser Senior." << endl;
    }
    // Si el usuario elige 'N' (Normal), no hay descuento
    else if (tipo_boleto == 'N') {
        cout << "Boleto normal sin descuento." << endl;
    }
    else {
        // Si el tipo de boleto no es reconocido
        cout << "Tipo de boleto no válido." << endl;
        precio_final = precio_base;
    }

    // Mostrar el precio final
    cout << "El precio final del boleto es: $" << precio_final << endl;

    return 0;
}
