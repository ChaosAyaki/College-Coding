#include "Cabecera.h"
#include <iostream>
#include <cmath>
#include <string>
#define MAX_DIM 1000

// Añadir un producto al inventario

int anadir(struct inv inventario[], int num_elem, struct inv elem) {
    if (num_elem >= MAX_DIM) {
        cout << "El inventario esta lleno. No se pueden anadir mas productos." << endl;
        return num_elem;
    }
    inventario[num_elem] = elem;
    num_elem++;
    cout << "Producto anadido correctamente." << endl;
	return num_elem;
}


// Eliminar un producto del inventario

int eliminar(struct inv inventario[], int num_elem, string ID) {
    for (int i = 0; i < num_elem; i++) {
        if (inventario[i].ID == ID) { 
            for (int j = i; j < num_elem - 1; j++) {
                inventario[j] = inventario[j + 1];
            }
            num_elem--;
            cout << "Producto eliminado correctamente." << endl;
            return num_elem;
        }
    }
    cout << "Producto no encontrado." << endl;
	return num_elem;
}


// Buscar un producto por su ID

void buscar(struct inv inventario[], int num_elem, string ID) {
    for (int i = 0; i < num_elem; i++) {
        if (inventario[i].ID == ID) {
            cout << "ID: " << inventario[i].ID << endl;
            cout << "Nombre: " << inventario[i].nom << endl;
            cout << "Categoria: " << inventario[i].categ << endl;
            cout << "Cantidad: " << inventario[i].cant << endl;
            cout << "Precio: " << inventario[i].preci << endl;
            return;
        }
    }
    cout << "Producto no encontrado." << endl;
}


// Listar todos los productos

void listar(struct inv inventario[], int num_elem) {
    if (num_elem == 0) {
        cout << "El inventario esta vacio." << endl;
        return;
    }
    for (int i = 0; i < num_elem; i++) {
        cout << i + 1 << ". " << inventario[i].nom 
             << " (ID: " << inventario[i].ID 
             << ", Categoria: " << inventario[i].categ 
             << ", Cantidad: " << inventario[i].cant 
             << ", Precio: " << inventario[i].preci << ")"<< endl;
    }
}


// Calcular el valor total del inventario

float valorTotal(struct inv inventario[], int num_elem) {
    float total = 0;
    for (int i = 0; i < num_elem; i++) {
        total += inventario[i].cant * inventario[i].preci;
    }
    return total;
}


// Filtrar por categoría

void filtrarPorCategoria(struct inv inventario[], int num_elem, string categ) {
    bool encontrado = false;
    for (int i = 0; i < num_elem; i++) {
        if (inventario[i].categ == categ) {
            cout << inventario[i].nom << " (ID: " << inventario[i].ID << ")" << endl;
            encontrado = true;
        }
    }
    if (!encontrado) cout << "No hay productos en la categoria especificada." << endl;
}


// Mostrar el producto mas caro y mas barato

void mostrarMasCaroYMasBarato(struct inv inventario[], int num_elem) {
    if (num_elem == 0) {
        cout << "El inventario esta vacio." << endl;
        return;
    }

    int idxCaro = 0, idxBarato = 0;
    for (int i = 1; i < num_elem; i++) {
        if (inventario[i].preci > inventario[idxCaro].preci) idxCaro = i;
        if (inventario[i].preci < inventario[idxBarato].preci) idxBarato = i;
    }

    cout << "Producto mas caro: " << inventario[idxCaro].nom << " (ID: " << inventario[idxCaro].ID << ")" << endl;
    cout << "Producto mas barato: " << inventario[idxBarato].nom << " (ID: " << inventario[idxBarato].ID << ")" << endl;
}