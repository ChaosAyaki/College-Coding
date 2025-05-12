#include<iostream>
#include<fstream> //La libreria que se debe usar para hacer cosas con ficheros 
#include<string>

using namespace std;

int main(){
    
    ofstream fichero("datos.txt"); //Esto crea o abre un archivo con el nombre dentro del parentesis
    
    if (fichero) {
        fichero << "Hola mundo" << endl; //Lo que hace es hacer un cout dentro del fichero que diga hola mundo 
        fichero.close(); //Siempre cerrar para optimizar memoria y todo eso 
    } else {
        cout << "No se puede abrir el .txt " << endl;
    }
    return 0;
}