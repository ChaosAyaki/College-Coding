#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <string>
#include <fstream>

#include "Estudiante.h"
#include "Complejo.h"

using namespace std;


ofstream datos_estudiantes = ofstream("Estudiantes.txt", ios::out); // 1
ifstream datos_de_lectura = ifstream("DatosEstudiantes.txt", ios::in); // 1


ifstream datos_dni = ifstream("DNIS.txt", ios::in); // 1
ifstream datos_nombre = ifstream("nombres.txt", ios::in); // 1


ifstream datos_c_e = ifstream("DatosNumeros_estudiantes.txt", ios::in); // 1

ostream& operator<<(ostream& os, Estudiante& estudiante){
    os << setw(12) << right << estudiante.DNI << " ";
    os << setw(20) << left << estudiante.nombre << " ";
    os << setprecision(2) << fixed << setw(10) << right << estudiante.puntaje_acumulado;

    // if (&os == &cout){
    //     os << setw(12) << right << estudiante.DNI << " ";
    //     os << setprecision(1) << fixed << setw(10) << right << estudiante.puntaje_acumulado;
    // }
    // else if (&os == &datos_estudiantes){
    //     os << setw(20) << left << estudiante.nombre << " ";
    //     os << setw(12) << right << estudiante.DNI << " ";
    // }
    return os;
}

istream& operator>>(istream& is, Estudiante& estudiante){
    if (&is ==  &datos_nombre){
        is >> quoted(estudiante.nombre);
        return is;
    }
    else if (&is ==  &datos_dni){
        is >> estudiante.DNI;
        return is;
    }


    return is >> estudiante.DNI >> quoted(estudiante.nombre)>> estudiante.puntaje_acumulado;
}

int main()
{
    int codigo_ejemplo;
    cout << "Ingrese el numero de ejemplo que desea ejecutar: ";
    cin >> codigo_ejemplo;

    switch (codigo_ejemplo)
    {
    case 1:
    { // Ejemplo 1 
        string titulo = "Este es el ejemplo 1";
        cout << "Sin setw: " << titulo << endl;
        cout << "Con setw=30 : " << setw(30) << titulo << endl;
        cout << "Con setw=10 : " << setw(10) << titulo << endl;

        cout << "Justificado a la izquierda: " << left << setw(30) << titulo << endl;
        cout << "Justificado a la derecha  : " << right << setw(30) << titulo << endl;
        break;
    }
    case 2:{
        // Ejemplo 2
        string titulo1 = "Este es el";
        string titulo2 = "_ejemplo 2";
        cout << right << setw(30) << titulo1 << setw(30) << titulo2 << " fin de linea" << endl;
        cout << right << setw(30) << titulo1 << left << setw(15) << titulo2 << setw(30) << " fin de linea" <<endl;
        string nombre = "Federico Santiago";
        string apellido = "Valverde Dipetta";
        string DNI = "12345678X";

        cout << right << setw(12) << DNI << " "  << left << setw(20) <<  nombre << " " << setw(28) <<  apellido << endl;
        break;
    }
    case 3:{
        float pi = 3.14159;
        cout << setprecision(5) << pi << endl;
        cout << setprecision(9) << pi << endl;
        cout << fixed;
        cout << setprecision(5) << pi << endl;
        cout << setprecision(9) << pi << endl;
        cout << scientific;
        cout << setprecision(5) << pi << endl;
        cout << setprecision(9) << pi << endl;
        break;
    }
    case 4: {
        Estudiante estudiante1("Jude", 5);
        Estudiante estudiante2("Kylian", 9);
        Estudiante estudiante3("Vinicius", 7);
        Estudiante estudiante4("Brahim", 21);

        estudiante1.setPuntajeAcumulado(7.34);
        estudiante2.setPuntajeAcumulado(9.2);
        estudiante3.setPuntajeAcumulado(5.0);
        estudiante4.setPuntajeAcumulado(4.99);

        cout << estudiante1 << endl;
        cout << estudiante2 << endl;
        cout << estudiante3 << endl;
        cout << estudiante4 << endl;
        break;
    }
    case 5: {
        Estudiante est;
        long int dni;
        string nombre;
        float puntaje;

        cout << "Ingrese el nombre del estudiante: ";
        cin >> nombre;
        cout << "Ingrese el DNI del estudiante: ";
        cin >> dni;
        cout << "Ingrese el puntaje del estudiante: ";
        cin >> puntaje;

        est.setNombre(nombre);
        est.setDNI(dni);
        est.setPuntajeAcumulado(puntaje);

        cout << est << endl;
        break;
    }
    case 6:{
        long int dni;
        string nombre;
        float puntaje;

        cout << "Ingrese los datos del estudiante: ";
        cout << "DNI Nombre Puntaje" << endl;
        cin >> dni >> nombre >> puntaje;

        Estudiante est = Estudiante(nombre, dni, puntaje);

        cout << est << endl;

        break;
    }
    case 7:{
        long int dni;
        string nombre;
        float puntaje;

        cout << "Ingrese los datos del estudiante: ";
        cout << "DNI ''Nombre'' Puntaje" << endl;
        cin >> dni >> quoted(nombre) >> puntaje;

        Estudiante est = Estudiante(nombre, dni, puntaje);

        cout << est << endl;

        break;
    }
    case 8:{

        cout << "Ingrese los datos de un solo estudiante: ";
        Estudiante est;
        cin >> est;
        cout << est << endl;

        break;
    }
    case 9: {
        cout << "Ingrese un flotante y un entero: ";
        float f;
        int i;
        cin >> f >> i;

        cout << "Ingrese los datos de 1 estudiante y el anio actual: ";
        Estudiante est2;
        int anio;
        cin >> est2 >> anio;

        cout << est2 << endl;
        cout << "Anio: " << anio << endl;

        cout << "Ingrese un estudiante, un string entre comillas y otro estudiante: ";
        Estudiante est3;
        string s;
        Estudiante est4;
        cin >> est3 >> quoted(s) >> est4;

        cout << est3 << endl;
        cout << "String: " << s << endl;
        cout << est4 << endl;
        break;
    }

    case 10:{
        ofstream fichero = ofstream("datos.txt", ios::out); // 1
        if (fichero){ // 2
            string dato = "Hola mundo";
            fichero << dato << endl; // 3
            fichero.close(); // 4
        }
        break;
    }

    case 11:{
        if (datos_estudiantes){
            list<Estudiante> estudiantes;

            Estudiante est1("Jude", 5, 7.34);
            Estudiante est2("Kylian", 9, 9.264);
            Estudiante est3("Vinicius", 7, 5.0);
            Estudiante est4("Brahim", 21, 4.99);

            estudiantes.push_back(est1);
            estudiantes.push_back(est2);
            estudiantes.push_back(est3);
            estudiantes.push_back(est4);

            list<Estudiante>::iterator it = estudiantes.begin();

            for(int i = 0; i < estudiantes.size(); i++){
                datos_estudiantes << *it << endl;

                cout << "Est: " << *it << endl;
                it++;
            }
            datos_estudiantes.close();
        }
        break;
    }

    case 12:{
        ifstream fichero = ifstream("datos.txt", ios::in); // 1
        if (fichero){ // 2
            string dato;
            fichero >> dato; //3
            cout << dato << endl; 
            fichero >> dato; //3
            cout << dato << endl; 
            fichero.close(); // 4
        }
        break;
    }
    case 13:{
        ofstream fichero = ofstream("datos.txt", ios::out);
        if (fichero){
            string dato = "Hola mundo";
            fichero << quoted(dato) << endl;
            fichero.close();
        }
        ifstream fichero2 = ifstream("datos.txt", ios::in);
        if (fichero2){
            string dato;
            fichero2 >> quoted(dato);
            cout << dato << endl;
            fichero2.close();
        }
        break;
    }

    case 14:{
        if (datos_de_lectura){
            // Estudiante e;
            // datos_de_lectura >> e;
            // cout << e << endl;
            // datos_de_lectura >> e;
            // cout << e << endl;
            // datos_de_lectura >> e;
            // cout << e << endl;
            // datos_de_lectura >> e;
            // cout << e << endl;
            // datos_de_lectura >> e;
            // cout << e << endl;

            list<Estudiante> estudiantes;
            Estudiante est;
            while(datos_de_lectura >> est){
                estudiantes.push_back(est);
            }

            list<Estudiante>::iterator it = estudiantes.begin();

            for(int i = 0; i < estudiantes.size(); i++){
                cout << *it << endl;
                it++;
            }
            datos_de_lectura.close();
        
        }
        break;
    }

    case 16:{
        // combinacion 2 istreams
        Estudiante est;
        
        cout << "Antes de leer nombre: " << est << endl;
        datos_nombre >> est;
        
        cout << "Antes de leer DNI: " << est << endl;
        datos_dni >> est;

        cout << "Dato final: " << est << endl;

        break;
    }

    default:
    {
        cout << "Caso default" << endl;
        
        break;
    }
    }

    return 0;
}