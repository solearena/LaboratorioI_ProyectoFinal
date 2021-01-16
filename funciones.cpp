

#include<iostream>
using namespace std;
#include<clocale>
#include "funciones.h"
#include "rlutil.h"
using namespace rlutil;

void cero( float v[], int tam ){
    for( int i=0; i<tam; i++ ){
        v[i]=0;
    }
}

void cero2( int v[], int tam ){
    for( int i=0; i<tam; i++ ){
        v[i]=0;
    }
}

//Por cada pescador, indicar el código de participante y el peso de la captura individual más pesada que hayan registrado. No listar información de un participante que no haya realizado capturas.

void capturas( float pescadores[], int tam1, float pesoMinimo[], int tam2, string especie[], int tam3, int especieCap[], int tam4, int contHoras[], int tam5, float pescadoresKg[], int tam6 ){

    int participante, codigoEspecie;
    float kg;
    int hora;
    cls();
    cout << "CÓDIGO DE PESCADOR: ";
    cin >> participante;
    while( participante != 0 ){
        while( participante<100 || participante>114 ){
            setBackgroundColor(RED);
            cout << "CÓDIGO ERRONEO." << endl;
            setBackgroundColor(BLACK);
            cout << "El código de pescador debe estar comprendido entre 100 y 114. " << endl;
            cout << "CÓDIGO DE PESCADOR: ";
            cin >> participante;
        }
        cout << "CÓDIGO DE ESPECIE : ";
        cin >> codigoEspecie;
        while( codigoEspecie<10 || codigoEspecie>90 || codigoEspecie%10!=0  ){
            setBackgroundColor(RED);
            cout << "CÓDIGO ERRONEO." << endl;
            setBackgroundColor(BLACK);
            cout << "El código de especie debe ser multiplo de 10. " << endl;
            cout << "CÓDIGO DE ESPECIE : ";
            cin >> codigoEspecie;
        }
        especieCap[codigoEspecie/10-1]++; //contador para el Reporte B
        for( int i=0; i<tam3; i++ ){
            if( codigoEspecie == i*10 + 10 ){
                setBackgroundColor(MAGENTA);
                cout << " *** [ " << especie[i] << " ] *** " << endl;
                setBackgroundColor(BLACK);
            }
        }
        cout << "HORA              : ";
        cin >> hora;
        while( hora>23 || hora<6 ){
            setBackgroundColor(RED);
            cout << "HORARIO INCORRECTO." << endl;
            setBackgroundColor(BLACK);
            cout << "El rango horario debe estar comprendido entre las 6 y las 23 hs. " << endl;
            cout << "HORA              : ";
            cin >> hora;
        }
        contHoras[hora - 6]++; //contador para el Reporte C
        cout << "KILOGRAMOS        : ";
        cin >> kg;
        while ( pesoMinimo[codigoEspecie/10-1] > kg){
            setBackgroundColor(RED);
            cout << "PESO INCORRECTO " << endl;
            setBackgroundColor(BLACK);
            cout << "Ingrese un peso mayor a: " << pesoMinimo[codigoEspecie/10-1] << "kg" << endl;
            cout << "> ";
            cin >> kg;
        }
        pescadores[participante-100] += kg; //Acumulador para el Reporte A
        if( pescadoresKg[participante-100]< kg){
            pescadoresKg[participante-100] = kg;
        }
        cls();
        cout << "CÓDIGO DE PESCADOR: ";
        cin >> participante;
    }
    anykey();
    cls();
}

void reporteA( float v[], int tam ){
    cls();
    float maximo;
    int cliente;
    maximo = v[0];
    cliente = 100;
    for( int i=0; i<tam; i++ ){
        if( v[i]>maximo ){
            maximo = v[i];
            cliente = 100 + i;
        }
    }
    msleep(400);
    setBackgroundColor(MAGENTA);
    cout << endl << "REPORTE A: GANADOR DE LA COMPETENCIA" << endl;
    cout << "------------------------------------" << endl << endl;
    setBackgroundColor(BLACK);
    cout << "PESCADOR: " << cliente << endl;
    cout << "TOTAL KG: " << maximo << endl << endl;
    anykey();
    cls();
}

void reporteB( int especiaCap[], int tam1, string especie[], int tam2 ){
    cls();
    msleep(400);
    setBackgroundColor(MAGENTA);
    cout << endl << "REPORTE B: ESTADÍSTICAS DE ESPECIES" << endl;
    cout << "-----------------------------------" << endl << endl;
    setBackgroundColor(BLACK);
    for( int i=0; i<tam1; i++ ){
        cout << "ESPECIE : " << especie[i] << endl;
        cout << "CÓDIGO  : " << i*10 + 10 << endl;
        cout << "CANTIDAD: " << especiaCap[i] << endl;
        cout << "----------------" << endl;
    }
    anykey();
    cls();
}

void reporteC( int contHoras[], int tam ){
    cls();
    int acu=0;
    msleep(400);
    setBackgroundColor(MAGENTA);
    cout << endl << "REPORTE C: PORCENTAJE HORARIO" << endl;
    cout << "-----------------------------" << endl << endl;
    setBackgroundColor(BLACK);
    //Acumulamos la cantidad de horas que se pesco en total:
    for( int i=0; i<tam; i++ ){
        acu += contHoras[i];
    }
    //Verificamos que acu sea distinto de cero para no hacer una división con resultado infinito
    if( acu!= 0){
       for( int i=0; i<tam; i++ ){
            cout << "HORA                  : " << i + 6 << endl;
            cout << "PORCENTAJE DE CAPTURAS: " << (float) contHoras[i]/acu*100 << "%" << endl << endl;
        }
    }
    else{
        cout << "NO SE EFECTUARON CAPTURAS " << endl << endl;
    }
    anykey();
    cls();
}

void reporteD( float pescadoresKg[], int tam ){
    cout << endl << "REPORTE D" << endl;
    cout << "---------" << endl << endl;
    for( int i=0; i<tam; i++ ){
        if( pescadoresKg[i]!=0 ){

            cout << "PESCADOR      : " << i + 100 << endl;
            cout << "CANTIDAD DE KG: " << pescadoresKg[i] << endl;
            cout << "---------" << endl << endl;
        }
    }
    anykey();
    cls();
}

void creditos(void){
    cls();
    msleep(500);
    setColor(LIGHTMAGENTA);
    cout << endl << endl;
    cout << "                  *         " << endl; //1
    cout << "                ***         " << endl; //2
    cout << "               ****         " << endl; //3
    cout << "             ******         " << endl; //4
    cout << "           *********        " << endl; //5
    cout << "         ************      *    ******************************************" << endl; //6
    cout << "        **************    **    ******************************************" << endl; //7
    cout << "       **  ************* ***    *             UP IN THE SKY              *" << endl; //8
    cout << "      ***  *****************    *  MARIA SOLEDAD ARENA --> LEGAJO: 24150 *" << endl; //9
    cout << "       ***************** ***    *   FLORENCIA FARIAS --> LEGAJO: 24194   *" << endl; //10
    cout << "        **************    **    ******************************************" << endl; //11
    cout << "         ************      *    ******************************************" << endl; //12
    cout << "           *********        " << endl; //13=5
    cout << "             ******         " << endl; //14=4
    cout << "               ****         " << endl; //15=3
    cout << "                ***         " << endl; //16=2
    cout << "                  *         " << endl; //17=1
    //Armamos el cuadrado que recubre al pez:
    for(int i=1; i<=80; i++){
        gotoxy(i,1);
        cout << "*";
        gotoxy(i,24);
        cout <<"*";
        if(i<24){
            gotoxy(1,i);
            cout << "*";
            gotoxy(80,i);
            cout << "*";
       }
    }
    cout << endl << endl;
    anykey();
    cls();
}
