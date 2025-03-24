/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 

Descripcion: 

Objetivo:

Diseñar un programa que simule una predicción meteorológica en una región dividida
en una cuadrícula de 𝑀𝑀 × 𝑁𝑁 celdas. Cada celda representa una zona y contiene valores de
temperatura, humedad y velocidad del viento. La simulación mostrará cómo cambian estas
condiciones a lo largo de varios días en función de ciertas reglas.

Requerimientos:

1. Inicialización de la Región:

o El programa debe pedir al usuario las dimensiones de la región (𝑀𝑀 filas y 𝑁𝑁
columnas ), con un máximo de 𝑀𝑀 = 30, 𝑁𝑁 = 30.

o Inicializar cada celda con valores aleatorios de:

 Temperatura (en grados Celsius, entre -10 y 40).

 Humedad (en porcentaje, entre 0 y 100).

 Velocidad del viento (en km/h, entre 0 y 100).

2. Simulación de Cambios Diarios:

o La simulación se realiza por un número de días que el usuario define, con un
límite máximo de 30 días.

o Para cada día, actualizar las condiciones de cada celda siguiendo las reglas:

 La temperatura de cada celda se ajusta según el promedio de las
temperaturas de las celdas vecinas.

 La humedad se reduce en un 5% en celdas con temperaturas mayores a
30 grados y aumenta un 3% en celdas con temperaturas menores a 0
grados. En el resto, se producen cambios de forma aleatoria(+/-2%).

 La velocidad del viento cambia en un valor aleatorio (+/- 10 km/h) sobre
el promedio de las celdas vecinas, pero sin exceder 100 km/h ni ser
menor de 0 km/h.

3. Especificaciones para Cálculos de Vecinos:

o Para cada celda de la matriz, calcular el promedio de los valores de sus celdas
vecinas. A continuación, se detalla cómo manejar las celdas en el borde y las
esquinas:

 Celdas internas (no en el borde): se consideran los 8 vecinos (superior,
inferior, izquierda, derecha y las 4 diagonales).

 Celdas en los bordes laterales:

 Si una celda está en la primera o última fila (borde superior o
inferior), se considera solo 5 vecinos: el vecino a la izquierda,
derecha y los 3 vecinos de la fila adyacente (o inferior si es el
borde superior y viceversa).

 Si una celda está en la primera o última columna (borde izquierdo
o derecho), también tiene solo 5 vecinos: el vecino arriba, abajo
y los 3 vecinos en la columna adyacente.

 Esquinas:

 Las esquinas solo tienen 3 vecinos:

 Esquina superior izquierda: los vecinos son el de la
derecha, abajo y la diagonal inferior derecha.

 Esquina superior derecha: los vecinos son el de la
izquierda, abajo y la diagonal inferior izquierda.

 Esquina inferior izquierda: los vecinos son el de arriba,
derecha y la diagonal superior derecha.

 Esquina inferior derecha: los vecinos son el de arriba,
izquierda y la diagonal superior izquierda.

4. Mostrar Resultados:

o Al final de cada día, el programa debe mostrar:

 La temperatura, humedad y velocidad del viento, en cada celda. La forma
de presentarse ha de ser en forma de tabla. Se deben sacar tres tablas,
una para cada medida, para ese día.

 Temperatura promedio, humedad promedio y velocidad del viento
promedio de toda la región, para ese día.

 La celda con la temperatura más alta y la más baja, con sus coordenadas,
para ese día.

 Número de celdas que superan el 80% de humedad y que tienen menos
de 10 km/h de viento, para ese día.

 Al final de cada día, debe parar el programa hasta que se pulse la tecla
[Intro].

 Los valores meteorológicos deben mostrarse con un solo decimal.

5. Finalización de la Simulación:

o Al completar la simulación, el programa debe presentar un resumen final con la
siguiente información:

 Condiciones promedio de toda la región para cada parámetro
(temperatura, humedad y velocidad del viento) calculadas como el
promedio de todos los valores en la matriz tras el último día de
simulación, de todos los días.

 Valor máximo y mínimo registrado de cada parámetro (temperatura,
humedad y velocidad del viento) durante la simulación de todos los días,
indicando las coordenadas de la celda y el día en que ocurrieron.

 Resumen de celdas por condiciones específicas, incluyendo:

 Número total de celdas con humedad superior al 80% y velocidad
del viento inferior a 10 km/h de todos los días.

 Porcentaje de celdas con temperaturas mayores a 30 grados de
todos los días

*/

#include <iostream>
#include <iomanip> // Para definir la cant de decimales
#include <cstdlib> // Para randm
#include <ctime>   // Para usarlo con randm para dar un num randm en funcion del tiempo

using namespace std;

#define MAX_FILAS 30
#define MAX_COLUMNAS 30


struct Celda {  // Matriz
	
    float temperatura;   // Grados Celsius
    float humedad;       // Porcentaje
    float viento;        // km/h
};

struct Promed {
	
	float tempPromedio;
	float humedadPromedio;
	float vientoPromedio;
};

struct Extrem {
	
	int filaMax;
	int colMax; 
	int filaMin; 
	int colMin;
};


void inicializarRegion(Celda region[][MAX_COLUMNAS], int filas, int columnas);

/*
Nombre: inicializarRegion

Parametros de entradas: 

region[][MAX_COLUMNAS]: Una estructura de tipo Celda que representa las condiciones de la region.

filas: Un entero que indica el numero de filas de la Matriz.

columnas: Un entero que indica el numero de columnas de la Matriz.

Parametros de salida: Ninguno.

Funcion:  Inicia una struct tipo celda de la region con valores aleatorios de temperatura, humedad y viento:

Temperatura: entre -10 y 40 grados Celsius.
Humedad: entre 0 y 100%.
Viento: entre 0 y 100 km/h.

*/

void calcularVecinos(Celda region[][MAX_COLUMNAS], Celda nuevaRegion[][MAX_COLUMNAS], int filas, int columnas);

/*
Nombre: calcularVecinos

Parámetros de entrada:

- region[][MAX_COLUMNAS]: Matriz de celdas con los valores de temperatura y humedad.
- filas: Número total de filas de la matriz.
- columnas: Numero total de columnas de la matriz.

Parametros de salida:



Descripcion:

Esta funcion calcula unicamente los vecinos de una celda específica en la matriz.
Si la celda esta en los bordes, solo utiliza el vecino que existe.
*/

void mostrarRegion(struct Celda region[][MAX_COLUMNAS], int filas, int columnas);

/*
Nombre: mostrarRegion

Parametros de entradas: 

region[][MAX_COLUMNAS]: Una estructura de tipo Celda que representa las condiciones de la region.

filas: Un entero que indica el numero de filas de la Matriz.

columnas: Un entero que indica el numero de columnas de la Matriz.

Parametros de salida: Ninguno.

Funcion: Muestra en forma de tablas los valores de temperatura, humedad y viento en forma decimal.


*/

void simularDia(Celda region[][MAX_COLUMNAS], int filas, int columnas);

/*
Nombre: simularDia

Parametros de entradas: 

region[][MAX_COLUMNAS]: Una estructura de tipo Celda que representa las condiciones de la region.

filas: Un entero que indica el numero de filas de la Matriz.

columnas: Un entero que indica el numero de columnas de la Matriz.

Parametros de salida: Ninguno.

Funcion: Simula los cambios meteorologicos de la region para un día, siguiendo las reglas:

Ajustar temperatura al promedio de las vecinas.

Cambiar la humedad dependiendo de la temperatura:

Reducir 5% si la temperatura es >30 °C.
Aumentar 3% si la temperatura es <0 °C.
Cambios aleatorios de +/-2% en otros casos.
Cambiar el viento en +/-10 km/h dependiendo del promedio de las celdas vecinas.

*/

struct Promed calcularPromedios(struct Celda region[][MAX_COLUMNAS], int filas, int columnas);

/*
Nombre: calcularPromedios

Parametros de entradas: 

region[][MAX_COLUMNAS]: Una estructura de tipo Celda que representa las condiciones de la region.

filas: Un entero que indica el numero de filas de la Matriz.

columnas: Un entero que indica el numero de columnas de la Matriz.

Parametros de salida: 

Struct Promed:

	tempPromedio: Un flotante donde se almacena la temperatura promedio.

	humedadPromedio: Un flotante donde se almacena la humedad promedio.

	vientoPromedio: Un flotante donde se almacena la velocidad del viento promedio.

Funcion: Calcula y devuelve los promedios de temperatura, humedad y viento de toda la region.

*/

struct Extrem encontrarExtremos(struct Celda region[][MAX_COLUMNAS], int filas, int columnas);

/*
Nombre: encontrarExtremos

Parametros de entradas: 

region[][MAX_COLUMNAS]: Una estructura de tipo Celda que representa las condiciones de la region.

filas: Un entero que indica el numero de filas de la Matriz.

columnas: Un entero que indica el numero de columnas de la Matriz.

Parametros de salida: 

Estructura extrem

	filaMax: Un entero donde se almacena la fila de la matriz con la temperatura máxima.

	colMax: Un entero donde se almacena la columna de la matriz con la temperatura máxima.

	filaMin: Un entero donde se almacena la fila de la matriz con la temperatura mínima.

	colMin: Un entero donde se almacena la columna de la matriz con la temperatura mínima.

Funcion:  Encuentra la temperatura más alta y más baja, y devuelve sus coordenadas.

*/

int contarCeldasHumedadViento(struct Celda region[][MAX_COLUMNAS], int filas, int columnas);

/*
Nombre: contarCeldasHumedadViento

Parametros de entradas: 

region[][MAX_COLUMNAS]: Una estructura de tipo Celda que representa las condiciones de la region.

filas: Un entero que indica el numero de filas de la Matriz.

columnas: Un entero que indica el numero de columnas de la Matriz.

Parametros de salida: Entero que indica el numero de Matrices que cumplen la condición.

Funcion: Cuenta las Matrices con humedad >80% y velocidad del viento <10 km/h.

*/

