/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 02/12/2024

Descripcion: 

Ejercicio 2: Inventario de Productos en una Tienda (4 puntos)

1. Objetivo: Desarrollar un programa que gestione el inventario de productos de una tienda.
El programa debe permitir almacenar información detallada de cada producto en el
inventario y realizar diversas operaciones de consulta y actualización. El inventario tendrá
como máximo 1000 productos

2. Descripción del Producto: Cada producto en el inventario debe contener la siguiente
información:
• ID del producto: un identificador único para cada producto.( string )
• Nombre del producto: el nombre específico del producto. ( String )
• Categoría: el tipo o categoría a la que pertenece el producto (por ejemplo, alimentos, electrónicos, ropa, etc.). ( String )
• Cantidad en stock: la cantidad actual de este producto en el inventario. ( Int )
• Precio unitario: el precio de una unidad del producto. ( Float )

3. Requerimientos:

• Inicialización del Inventario: El Inventario debe comenzar inicialmente
vacío. En caso de estar vacío, bien porque no se ha introducido nada o
por que se ha borrado todo el inventario, el programa no hará nada en
ninguna opción del menú salvo en la 1 y en la 8.

• Operaciones Disponibles:
1) Añadir un nuevo producto al inventario.
2) Eliminar un producto especificado del inventario.
3) Buscar un producto por su identificador y mostrar toda su información.
4) Listar todos los productos disponibles en el inventario.
5) Calcular y mostrar el valor total del inventario, considerando la cantidad y el precio de cada producto.
6) Filtrar y mostrar todos los productos de una categoría específica indicada por el usuario.
7) Determinar y mostrar los datos del producto más caro y del producto más barato en el inventario.
8) Salir del programa.

*/

#include <iostream>
#include <cmath>
#include <string>
#define MAX_DIM 1000
using namespace std;

struct inv {

	string ID;
	string nom;
	string categ;
	int cant;
	float preci;
};


int anadir(struct inv inventario[], int num_elem, struct inv elem);
 
/*
Nombre: anadir

Parametros de entradas: 

inventario[]: Una estructura de tipo inv que contiene los productos del inventario.

num_elem: Un entero que indica el numero total de productos en el inventario.

elem: Una estructura de tipo inv que contiene los datos del producto.

Parametros de salida: Entero que devuelve el numero de elementos de la lista.

Funcion: Añade un producto al inventario en la posicion especificada.

*/

int eliminar(struct inv inventario[], int num_elem, string ID);

/*
Nombre: eliminar 

Parametros de entradas:

inventario[]: Una estructura de tipo inv que contiene los productos del inventario.

num_elem: Un entero que indica el numero total de productos en el inventario.

ID: Un String que representa el identificador del producto a eliminar.

Parametros de salida: Entero que devuelve el numero de elementos de la lista.

Funcion: Busca y elimina un producto del inventario por su ID.

*/

void buscar(struct inv inventario[], int num_elem, string ID);

/*
Nombre: buscar

Parametros de entradas:

inventario[]: Una estructura de tipo inv que contiene los productos del inventario.

num_elem: Un entero que indica el numero total de productos en el inventario.

ID: Un String que representa el identificador del producto a eliminar.

Parametros de salida: Ninguno.

Funcion: Busca un producto en el inventario por su ID y muestra su informacion si lo encuentra.

*/

void listar(struct inv inventario[], int num_elem);

/*
Nombre: listar

Parametros de entradas:

inventario[]: Una estructura de tipo inv que contiene los productos del inventario.

num_elem: Un entero que indica el número total de productos en el inventario.

Parametros de salida: Ninguno.

Funcion: Muestra todos los productos disponibles en el inventario.

*/

float valorTotal(struct inv inventario[], int num_elem);

/*
Nombre: valorTotal

Parametros de entradas:

inventario[]: Una estructura de tipo inv que contiene los productos del inventario.

num_elem: Un entero que indica el número total de productos en el inventario.

Parametros de salida: Un valor de tipo float que representa el valor total del inventario.

Funcion: Calcula y devuelve el valor total del inventario, las cantidades y los precios de los productos.


*/

void filtrarPorCategoria(struct inv inventario[], int num_elem, string categ);

/*
Nombre: filtrarPorCategoria

Parametros de entradas:

inventario[]: Una estructura de tipo inv que contiene los productos del inventario.

num_elem: Un entero que indica el numero total de productos en el inventario.

categ: Un String que dice la categoría a filtrar.

Parametros de salida: Ninguno.

Funcion: Filtra y muestra todos los productos del inventario que pertenecen a una categoría.

*/

void mostrarMasCaroYMasBarato(struct inv inventario[], int num_elem);

/*
Nombre: mostrarMasCaroYMasBarato

Parametros de entradas:

inventario[]: Una estructura de tipo inv que contiene los productos del inventario.

num_elem: Un entero que indica el número total de productos en el inventario.

Parametros de salida: Ninguno.

Funcion: Muestra el producto mas caro y el mas barato del inventario.

*/
