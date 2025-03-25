#include <iostream>
#include <cmath>
#include "Cabecera.h"

// Inicializar la región con valores aleatorios
void inicializarRegion(Celda region[][MAX_COLUMNAS], int filas, int columnas) {
    srand(time(0));  // Para numeros aleatorios
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            region[i][j].temperatura = -10 + rand() % 51; // -10 a 40
            region[i][j].humedad = rand() % 101;         // 0 a 100
            region[i][j].viento = rand() % 101;          // 0 a 100
        }
    }
}

// Mostrar la región en tablas
void mostrarRegion(Celda region[][MAX_COLUMNAS], int filas, int columnas) {
    cout << "Temperatura (C):" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << setw(6) << fixed << setprecision(1) << region[i][j].temperatura;
        }
        cout << endl;
    }
    cout << "Humedad (%):" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << setw(6) << fixed << setprecision(1) << region[i][j].humedad;
        }
        cout << endl;
    }
    cout << "Viento (km/h):" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << setw(6) << fixed << setprecision(1) << region[i][j].viento;
        }
        cout << endl;
    }
}

// Calcular vecinos
void calcularVecinos(Celda region[][MAX_COLUMNAS], Celda nuevaRegion[][MAX_COLUMNAS], int filas, int columnas) {
   
   for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            float sumaTemperaturas = 0, sumaHumedad = 0, sumaViento = 0;
            int vecinos = 0;

            // Vecino de arriba
            if (i - 1 >= 0) {
                sumaTemperaturas += region[i - 1][j].temperatura;
                sumaHumedad += region[i - 1][j].humedad;
                sumaViento += region[i - 1][j].viento;
                vecinos++;
            }

            // Vecino de abajo
            if (i + 1 < filas) {
                sumaTemperaturas += region[i + 1][j].temperatura;
                sumaHumedad += region[i + 1][j].humedad;
                sumaViento += region[i + 1][j].viento;
                vecinos++;
            }

            // Vecino de la izquierda
            if (j - 1 >= 0) {
                sumaTemperaturas += region[i][j - 1].temperatura;
                sumaHumedad += region[i][j - 1].humedad;
                sumaViento += region[i][j - 1].viento;
                vecinos++;
            }

            // Vecino de la derecha
            if (j + 1 < columnas) {
                sumaTemperaturas += region[i][j + 1].temperatura;
                sumaHumedad += region[i][j + 1].humedad;
                sumaViento += region[i][j + 1].viento;
                vecinos++;
            }

            // Calculo promedios
            if (vecinos > 0) {
                nuevaRegion[i][j].temperatura = sumaTemperaturas / vecinos;
                nuevaRegion[i][j].humedad = sumaHumedad / vecinos;
                nuevaRegion[i][j].viento = sumaViento / vecinos;
            } else {
                // Si no hay vecinos valores =
                nuevaRegion[i][j] = region[i][j];
            }
        }
    }
}

// Simular un dia de cambios en la region
void simularDia(Celda region[][MAX_COLUMNAS], int filas, int columnas) {
    Celda nuevaRegion[MAX_FILAS][MAX_COLUMNAS];

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            

            // Actualizar temperatura y humedad basado en los vecinos
            if (vecinos.totalVecinos > 0) {
                nuevaRegion[i][j].temperatura = vecinos.sumaTemperaturas / vecinos.totalVecinos;
                nuevaRegion[i][j].humedad = vecinos.sumaHumedad / vecinos.totalVecinos;
            } 
			
			else {
                
				// No hay vecinos se mantienen los valores =
                nuevaRegion[i][j].temperatura = region[i][j].temperatura;
                nuevaRegion[i][j].humedad = region[i][j].humedad;
            }

            // Ajustar viento
            nuevaRegion[i][j].viento = region[i][j].viento + (rand() % 21 - 10);
            nuevaRegion[i][j].viento = max(0.0f, min(100.0f, nuevaRegion[i][j].viento));
        }
    }

    // Copiar nueva region de vuelta a la matriz original
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            region[i][j] = nuevaRegion[i][j];
        }
    }
}

// Calcular promedios

struct Promed calcularPromedios(struct Celda region[][MAX_COLUMNAS], int filas, int columnas) {
    float sumaTemp = 0, sumaHumedad = 0, sumaViento = 0;
    int totalCeldas = filas * columnas;
	struct Promed sol;

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            sumaTemp += region[i][j].temperatura;
            sumaHumedad += region[i][j].humedad;
            sumaViento += region[i][j].viento;
        }
    }

    sol.tempPromedio = sumaTemp / totalCeldas;
    sol.humedadPromedio = sumaHumedad / totalCeldas;
    sol.vientoPromedio = sumaViento / totalCeldas;
	
	return sol ;
}



// Encontrar extremos de temperatura

struct Extrem encontrarExtremos(struct Celda region[][MAX_COLUMNAS], int filas, int columnas) {
    float maxTemp = -100.0, minTemp = 100.0;
	struct Extrem solucion;

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (region[i][j].temperatura > maxTemp) {
                maxTemp = region[i][j].temperatura;
                solucion.filaMax = i;
                solucion.colMax = j;
            }
            if (region[i][j].temperatura < minTemp) {
                minTemp = region[i][j].temperatura;
                solucion.filaMin = i;
                solucion.colMin = j;
            }
        }
    }
	return solucion;
}