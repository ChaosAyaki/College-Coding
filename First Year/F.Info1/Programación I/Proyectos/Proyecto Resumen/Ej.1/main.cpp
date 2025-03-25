#include "Cabecera.h"
#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    int filas, columnas, dias;
    
    cout<< "Introduce filas (maximo 30): "<< endl;
    cin>> filas;
    
    cout<< "Introduce columnas (maximo 30): "<< endl;
    cin>> columnas;
    
    cout<< "Introduce dias (maximo 30): "<< endl;
    cin>> dias;

    if (filas <= 0 || filas > MAX_FILAS || columnas <= 0 || columnas > MAX_COLUMNAS) {
        cout<< "Error: Dimensiones invalidas. Deben estar entre 1 y 30" << endl;
        return 1;
    }

    if (dias <= 0 || dias > 30) {
        cout<< "Error: Numero de dias invalido. Debe estar entre 1 y 30." << endl;
        return 1;
    }

    Celda region[MAX_FILAS][MAX_COLUMNAS];
    inicializarRegion(region, filas, columnas);

    // Variables para el resumen
    float totalTemp = 0, totalHumedad = 0, totalViento = 0;
    float maxTemp = -100.0, minTemp = 100.0;
    float maxHumedad = -1.0, minHumedad = 101.0;
    float maxViento = -1.0, minViento = 101.0;
    int maxTempDay = 0, minTempDay = 0;
    int maxHumedadDay = 0, minHumedadDay = 0;
    int maxVientoDay = 0, minVientoDay = 0;
    
    int totalCeldasAltaHumedad = 0, totalCeldasAltaTemp = 0;
    
    // Simulación de días
    for (int i = 1; i <= dias; ++i) {
        cout << "Dia " << i << ":" << endl;
        mostrarRegion(region, filas, columnas);

        // Promedios
        float tempPromedio, humedadPromedio, vientoPromedio;
		
		struct Promed sol;
        sol=calcularPromedios(region, filas, columnas);
		

        cout<< "Promedio temperatura: " << sol.tempPromedio << "C" << endl;
        cout<< "Promedio humedad: " << sol.humedadPromedio << "%" << endl;
        cout<< "Promedio viento: " << sol.vientoPromedio << "km/h" << endl;

        // Extremos
        int filaMax, colMax, filaMin, colMin;
		struct Extrem s;
        s=encontrarExtremos(region, filas, columnas);

        cout<< "Maxima temperatura: " << region[s.filaMax][s.colMax].temperatura << "C en (" << s.filaMax << ", " << s.colMax << ")" << endl;
        cout<< "Minima temperatura: " << region[s.filaMin][s.colMin].temperatura << "C en (" << s.filaMin << ", " << s.colMin << ")" << endl;

        // Acumular valores para el resumen
        totalTemp += sol.tempPromedio;
        totalHumedad += sol.humedadPromedio;
        totalViento += sol.vientoPromedio;

        // Buscar maximos y minimos de todos los dias
        for (int r = 0; r < filas; ++r) {
            for (int c = 0; c < columnas; ++c) {
                
				// Temperatura maxima
                if (region[r][c].temperatura > maxTemp) {
                    maxTemp = region[r][c].temperatura;
                    maxTempDay = i;
                }

                // Temperatura minima
                if (region[r][c].temperatura < minTemp) {
                    minTemp = region[r][c].temperatura;
                    minTempDay = i;
                }

                // Humedad maxima
                if (region[r][c].humedad > maxHumedad) {
                    maxHumedad = region[r][c].humedad;
                    maxHumedadDay = i;
                }

                // Humedad minima
                if (region[r][c].humedad < minHumedad) {
                    minHumedad = region[r][c].humedad;
                    minHumedadDay = i;
                }

                // Viento maximo
                if (region[r][c].viento > maxViento) {
                    maxViento = region[r][c].viento;
                    maxVientoDay = i;
                }

                // Viento minimo
                if (region[r][c].viento < minViento) {
                    minViento = region[r][c].viento;
                    minVientoDay = i;
                }

                // Celdas con alta humedad (>80%) y viento bajo (<10 km/h)
                if (region[r][c].humedad > 80 && region[r][c].viento < 10) {
                    totalCeldasAltaHumedad++;
                }

                // Celdas con temperatura mayor a 30°C
                if (region[r][c].temperatura > 30) {
                    totalCeldasAltaTemp++;
                }
            }
        }

        simularDia(region, filas, columnas);

        cout<< "Presione Enter para continuar..." << endl;
        cin.ignore();
        cin.get();
    }

    // Resumen final
	
    float promedioTempFinal = totalTemp / dias;
    float promedioHumedadFinal = totalHumedad / dias;
    float promedioVientoFinal = totalViento / dias;

    cout<< "Resumen final de la simulacion:" << endl;
	cout<<" "<< endl;
	
    cout<< "Promedio de temperatura de toda la region: " << promedioTempFinal << "C" << endl;
    cout<< "Promedio de humedad de toda la region: " << promedioHumedadFinal << "%" << endl;
    cout<< "Promedio de viento de toda la region: " << promedioVientoFinal << "km/h" << endl;

    cout<< "Maxima temperatura registrada: " << maxTemp << "C (Dia " << maxTempDay << ")" << endl;
    cout<< "Minima temperatura registrada: " << minTemp << "C (Dia " << minTempDay << ")" << endl;
    cout<< "Maxima humedad registrada: " << maxHumedad << "% (Dia " << maxHumedadDay << ")" << endl;
    cout<< "Minima humedad registrada: " << minHumedad << "% (Dia " << minHumedadDay << ")" << endl;
    cout<< "Maxima velocidad de viento registrada: " << maxViento << " km/h (Dia " << maxVientoDay << ")" << endl;
    cout<< "Minima velocidad de viento registrada: " << minViento << " km/h (Dia " << minVientoDay << ")" << endl;

    cout<< "Numero de celdas con humedad > 80% y viento < 10 km/h: " << totalCeldasAltaHumedad << endl;
    cout<< "Porcentaje de celdas con temperatura mayor a 30C: " << (float)totalCeldasAltaTemp / (filas * columnas) * 100 << "%" << endl;


	cout<<" "<< endl;
    cout<< "Simulacion finalizada" << endl;

    return 0;
}