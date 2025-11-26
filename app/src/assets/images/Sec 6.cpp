#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre = "";
    string programa = "";
    int opcion;
    bool registrado = false;

    do {
        // --- Menú ---
        cout << "\n MENU ===\n";
        cout << "1 Registrar estudiante\n";
        cout << "2 Ver informacion\n";
        cout << "3 Contar letras del nombre\n";
        cout << "4 Mostrar vocales del nombre\n";
        cout << "5 Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch(opcion) {
            case 1: {
                cout << "Ingrese el nombre del estudiante: ";
                getline(cin, nombre);

                if (nombre.empty()) {
                    cout << "El nombre no puede estar vacio.\n";
                    break;
                }

                cout << "Ingrese el programa academico: ";
                getline(cin, programa);

                registrado = true;
                cout << "Estudiante registrado correctamente.\n";
                break;
            }
            case 2: {
                if (!registrado) {
                    cout << "Primero debe registrar al estudiante.\n";
                } else {
                    cout << "\nNombre: " << nombre << endl;
                    cout << "Programa academico: " << programa << endl;
                }
                break;
            }
            case 3: { 
                if (!registrado) {
                    cout << "Primero debe registrar al estudiante.\n";
                } else {
                    cout << "El nombre tiene " << nombre.length() << " letras.\n";
                }
                break;
            }
            case 4: { 
                if (!registrado) {
                    cout << "Primero debe registrar al estudiante.\n";
                } else {
                    cout << "Vocales en el nombre: ";
                    for (char c : nombre) {
                        char letra = tolower(c);
                        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
                            cout << c << " ";
                        }
                    }
                    cout << endl;
                }
                break;
            }
            case 5:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo.\n";
        }

    } while(opcion != 5);

    return 0;
}