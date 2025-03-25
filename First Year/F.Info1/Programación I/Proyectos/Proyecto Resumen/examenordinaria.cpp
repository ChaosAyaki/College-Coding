#include <iostream>
#define MAX_SIZE 100  // Tamaño máximo de vector y matriz

using namespace std;
 

 struct datos {
        string nombre;
		float altura;
		int pie;
    };

// Prototipos de las funciones (los alumnos deben escribir aquí los prototipos)

	int f1 (int v[], int n);
	int f2 (int mat[MAX_SIZE][MAX_SIZE], int n, int resul[]);


int main() {
    cout << "Nombre: Pablo Dominguez Corbacho Modelo: A" << endl;
	
	// Hecho el ejercicio 1 y 2

   /*

    // Zona de pruebas para el ejercicio 1
    
    cout << "Ejercicio 1: Vector de enteros," << endl;
    int n;
    cout << "Introduce el tamaño del vector: ";
    cin >> n;
    int v[MAX_SIZE];
    for (int i = 0; i < n; i++) {
        cout << "Introduce el elemento " << i << ": ";
        cin >> v[i];
    }
    cout << "Resultado de la función f1: " << f1(v, n) << endl;
    */

    // Zona de pruebas para el ejercicio 2
    /*
    cout << "Ejercicio 2: Matriz cuadrada, " << endl;
	
    int size;
    cout << "Introduce el tamaño de la matriz cuadrada: ";
    cin >> size;
    int matrix[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "Introduce el elemento [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    int result[MAX_SIZE];
    f2(matrix, size, result);
    cout << "vector resultado ";
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    */

    // Zona de pruebas para el ejercicio 3
    /*
    cout << "Ejercicio 3: Matriz de enteros" << endl;
    int rows, cols;
    cout << "Introduce el número de filas: ";
    cin >> rows;
    cout << "Introduce el número de columnas: ";
    cin >> cols;
    int matrix1[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Introduce el elemento [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }
    int result1[MAX_SIZE][MAX_SIZE];
    f3(matrix1, rows, cols, result1);
    cout << "matriz de salida: " << endl;
    for (int i = 0; i < rows; i++) {
    	for (int j = 0; j < cols; j++) {
        	cout << result1[i][j] << " ";
    	}
    	cout << endl;
   }	
    */

    // Zona de pruebas para el ejercicio 4
    /*
    cout << "Ejercicio 4: Vector de estructuras de jugadores" << endl;
   
    int numjugadores;
    cout << "Introduce el número de jugadores: ";
    cin >> numjugadores;
    struct datos vdatos[MAX_SIZE];
    for (int i = 0; i < numjugadores; i++) {
        cout << "Introduce los datos del jugador " << i + 1 << " (Nombre Altura Pie): ";
        cin >> vdatos[i].nombre; 
		cin >> vdatos[i].altura;
		cin >> vdatos[i].pie;
    }
    struct datos maxdatos = f4(vdatos, numjugadores);
    cout << "jugador seleccionado: (" << maxdatos.nombre << ", " << maxdatos.altura << ", " << maxdatos.pie << ")" << endl;
    */

    return 0;
}

// Aquí los estudiantes deben escribir las funciones


	int f1 (int v[], int n){
		
		int cont=0;
	
	for(int i=0; i< n; i++){
		if (v[i]> 0 && v[i] % v[i] == 0 && v[i] % 1 == 0){
			cont++;
		}
	}
	return cont;
}	

int f2 (int mat[MAX_SIZE][MAX_SIZE], int n, int resul[]){
	int i;
	for ( i = 0; i < n; i++) {
		int suma=0;
		 for (int j = 0; j < n; j++) {
		    if ( mat[i][j] % 2 == 0 ){
				suma += mat[i][j];
				resul[i]= suma;
			}
		 }
		
	}
	
	return resul[i];
}