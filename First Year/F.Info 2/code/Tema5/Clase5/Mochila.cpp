#include "Mochila.h"

template <typename T> Mochila<T>::Mochila(int n) {
    this->n = n;
    datos = new T[n];
}

template <typename T> void Mochila<T>::modificar(int i, T dato) {
    datos[i] = dato;
}

template <typename T> T Mochila<T>::obtener(int i) {
    return datos[i];
}

template <typename T> Mochila<T>::~Mochila() {
    delete[] datos;
}

