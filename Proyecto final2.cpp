#include <iostream> 
#include <cstdlib> // Librería para generar números aleatorios
#include <ctime>   // Librería para obtener la semilla del generador aleatorio

using namespace std;

int main() {
    srand(time(0)); 

    int nivel;
    cout << "Bienvenido al juego de adivinar el numero." << endl;
    cout << "Elija el nivel de dificultad:" << endl;
    cout << "1. Nivel 1 (entre 1 y 10, tendras 5 oportunidades)" << endl;
    cout << "2. Nivel 2 (entre 10 y 40, tendras 7 oportunidades)" << endl;
    cout << "Ingrese el numero que corresponde al nivel que deseas : ";
    cin >> nivel;

    int numeroAdivinar;
    int intentos;
    int rangoInicio;
    int rangoFin;

    if (nivel == 1) {
        rangoInicio = 1;
        rangoFin = 10;
        intentos = 5;
    } else if (nivel == 2) {
        rangoInicio = 10;
        rangoFin = 40;
        intentos = 7;
    } else {
        cout << "Opcion invalida. Saliendo del juego." << endl;
        return 0;
    }

    numeroAdivinar = rand() % (rangoFin - rangoInicio + 1) + rangoInicio;

    cout << "Comencemos a jugar." << endl;
    cout << "Tienes " << intentos << " oportunidades para adivinar el numero. BUENA SUERTE." << endl;

    int intento;
    while (intentos > 0) {
        cout << "Ingrese un numero: ";
        cin >> intento;

        if (intento == numeroAdivinar) {
            cout << "Felicidades Has adivinado el numero " << numeroAdivinar << "." << endl;
            return 0;
        } else if (intento < numeroAdivinar) {
            cout << "El numero que ingresaste es mas bajo." << endl;
        } else {
            cout << "El numero que ingresaste es mas alto." << endl;
        }

        intentos--;
    }

    cout << "Se acabaron tus oportunidades, Mala suerte. El numero era: " << numeroAdivinar << endl;
    cout << "Mejor suerte la proxima vez" << endl;

    return 0;
}

