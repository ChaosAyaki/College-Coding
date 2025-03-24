/*
Realizado por: Pablo Dominguez Corbacho
Fecha:24/09/2024

Descripcion:Un programa que dando un numero de bytes obtenga una magnitud
equivalente expresada en Mbytes, Kbytes y bytes.

*/

#include <iostream>
using namespace std;

int main () {

 long Nbytes;

 cout<< "Introduce un numero de bytes" << endl;
 cin>> Nbytes;

 cout<< "Numero de bytes:"<<Nbytes << endl;

 const float T= 1024;

 float NKbytes= Nbytes/T;
 cout<<"Numero de Kbytes:"<< NKbytes<< endl;
 
 float NMbytes= NKbytes/T;
 cout<<"Numero de Mbytes:"<< NMbytes<< endl;

 float NGbytes= NMbytes/T;
 cout<<"Numero de Gbytes:"<< NGbytes<< endl;

  return 0;
}