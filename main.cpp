#include <iostream>
using namespace std;
#include "funciones.h"
#include<clocale>
#include "rlutil.h"
using namespace rlutil;

int main(){

    setlocale(LC_ALL,"Spanish");

    const int t1=15;
    const int t2=9;
    float pescadores[t1], pescadoresKg[t1];
    float pesoMinimo[t2]={0.5, 2, 4, 5, 1, 5, 1.5, 3, 2.5 };
    string especie[t2]={"Anchoa", "Pejerrey", "Bagre", "Boga", "Caballa", "Carpa", "Trucha Patagónica", "Dorado", "Lisa" };
    int especieCap[t2];
    const int t3=18;
    int contHoras[t3];

    cero( pescadores, t1 );
    cero( pescadoresKg, t1 );
    cero2( especieCap, t2 );
    cero2( contHoras, t3);

    int n;
    do{
        setColor(WHITE);
        setBackgroundColor(MAGENTA);
        cout << "UP IN THE SKY FISHING TOURNAMENT 2020" << endl;
        cout << "-------------------------------------"<< endl<<endl;
        setBackgroundColor(BLACK );
        cout << "1 - REGISTRAR CAPTURAS" << endl;
        cout << "2 - REPORTE A" << endl;
        cout << "3 - REPORTE B" << endl;
        cout << "4 - REPORTE C" << endl;
        cout << "5 - REPORTE D" << endl;
        cout << "6 - CRÉDITOS" << endl;
        cout << "-------------------------------" << endl;
        cout << "0 - SALIR" << endl;
        cout << "> ";
        cin >> n;
        switch (n){
        case 1:
            capturas(pescadores, t1, pesoMinimo, t2, especie, t2, especieCap, t2, contHoras, t3, pescadoresKg, t1);
            break;
        case 2:
            reporteA(pescadores, t1);
            break;
        case 3:
            reporteB(especieCap, t2, especie, t2);
            break;
        case 4:
            reporteC( contHoras, t3);
            break;
        case 5:
            reporteD( pescadoresKg, t1);
            break;
        case 6:
            creditos();
            break;
        }
    }while( n!=0 );

    return 0;
}
