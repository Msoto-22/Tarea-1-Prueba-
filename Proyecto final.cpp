#include <iostream>

	using namespace std;

int main() {
    int partidosJugados, partidosGanados, partidosPerdidos, partidosEmpatados;
    int golesAFavor, golesEnContra, puntosObtenidos;
    string codigoEquipo;
    
    cout << "Ingrese el codigo del equipo: ";
    cin >> codigoEquipo ;

    cout << "Ingrese el numero de partidos jugados: ";
    cin >> partidosJugados;

    cout << "Ingrese el numero de partidos ganados: ";
    cin >> partidosGanados;

    cout << "Ingrese el numero de partidos perdidos: ";
    cin >> partidosPerdidos;

    cout << "Ingrese el numero de partidos empatados: ";
    cin >> partidosEmpatados;

    cout << "Ingrese el numero de goles a favor: ";
    cin >> golesAFavor;

    cout << "Ingrese el numero de goles en contra: ";
    cin >> golesEnContra;

    puntosObtenidos = (partidosGanados * 3) + partidosEmpatados;
    
    if (puntosObtenidos > 20 && golesEnContra == 0) {
        puntosObtenidos += golesAFavor;
    }
    cout << codigoEquipo ;
    cout << "\nPuntos obtenidos: " << puntosObtenidos << endl;

    if (puntosObtenidos > 30) {
        cout << "Categoria del equipo: Categoria 1" << endl;
    } else if (puntosObtenidos >= 15) {
        cout << "Categoria del equipo: Categoria 2" << endl;
    } else {
        cout << "Categoria del equipo: Categoria 3" << endl;
    }

    return 0;
}

