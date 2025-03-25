#include "utils.h"

int variable_static = 42;

int main()
{
    int codigo_ejemplo;

    cout << "Ingrese el numero de ejemplo que desea ver: ";
    cin >> codigo_ejemplo;

    switch (codigo_ejemplo)
    {
    case 0:
    {
        cout << "Ejemplo 0: " << endl;
        short int var = 5;
        double var2 = 5.4;
        cout << "La variable var : " << var << " tiene una direccion igual a    : " << &var << endl;
        cout << "La variable var2: " << var2 << " tiene una direccion igual a  : " << &var2 << endl;
        break;
    }

    case 1:
    {
        cout << "Ejemplo 1: " << endl;
        int var = 5;
        int *dir_var = &var;

        cout << "dir_var (" << dir_var << ") es un puntero que guarda la direccion de var" << endl;
        cout << "Es decir que dir_var es una nueva variable tipo puntero" << endl;

        cout << "El valor que almacena dir_var es: " << dir_var << endl;

        int var2 = 4324523;
        dir_var = &var2;

        cout << "Al realizar dir_var = &var2 se cambia la direccion que guarda dir_var" << endl;
        cout << "El nuevo valor que almacena dir_var es: " << dir_var << endl;

        break;
    }
    case 2:
    {
        cout << "Ejemplo 2: " << endl;
        char c1 = '!', c2, c3 = 'a';
        char *p_c1, *p_c2; // punteros
        p_c1 = &c1;        // la dirección de c1 se almacena en p_c1
        p_c2 = p_c1;       // el valor de p_c1 se almacena en p_c2

        c2 = *p_c2; // c2 copia el valor de lo que apunta p_c2
        *p_c1 = c3; // c1 copia el contenido

        cout << "c1 no se ha modificado directamente, pero si a traves de p_c1" << endl;
        cout << "c1 = " << c1 << endl;

        cout << "c2 ha copiado el valor de lo que apunta p_c2" << endl;
        cout << "c2 = " << c2 << endl;

        break;
    }

    case 3:
    {
        cout << "Ejemplo 3: " << endl;
        int numero = 5;           // variable
        int &ref_numero = numero; // referencia

        cout << "Los numeros " << numero << " y " << ref_numero << " son iguales" << endl;
        ref_numero = 10; // modifica la referencia
        cout << "Los numeros " << numero << " y " << ref_numero << " son iguales" << endl;
        cout << "pero solo se modifico la referencia" << endl;

        break;
    }

    case 4:
    {
        cout << "Ejemplo 4: " << endl;
        static int variable_static_interna = 42;
        cout << "Direccion de variable_satic: " << &variable_static << endl;
        cout << "Direccion de variable_static_interna: " << &variable_static_interna << endl;

        // Lo siguiente no hace falta aprender
        uintptr_t direccionNumerica = reinterpret_cast<uintptr_t>(funcionCualquiera);
        cout << "Direccion de funcion_static: " << hex << direccionNumerica << endl;
        // Lo anterior no hace falta aprender

        cout << "Las tres direcciones son parecidas, pero no iguales" << endl;

        break;
    }
    
    case 5:{
        cout << "Ejemplo 5: " << endl;
            int var_en_pila1 = 1;
            float var_en_pila2 = 2.0;
            double resultado = funcionSumaIntFloat(var_en_pila1, var_en_pila2);
            
            cout << "La direccion de var_en_pila1 es: " << &var_en_pila1 << endl;
            cout << "La direccion de var_en_pila2 es: " << &var_en_pila2 << endl;
            cout << "La direccion de resultado es: " << &resultado << endl;
            
            break;}

    case 6:{

        cout << "Ejemplo 6: " << endl;
            int var_en_pila1 = 1;
            float var_en_pila2 = 2.0;
            double resultado = funcionSumaIntFloat(var_en_pila1, var_en_pila2);
            string dir;
            dir = "La direccion de ";
            
            cout << dir << "var_en_pila1 es: " << &var_en_pila1 << endl;
            cout << dir << "var_en_pila2 es: " << &var_en_pila2 << endl;
            cout << dir << "resultado es: " << &resultado << endl;
            double resultado2 = funcionSumaIntFloat(var_en_pila1, var_en_pila2);
            cout << dir << "resultado es: " << &resultado2 << endl;

            break;}
            
    case 7:{
        cout << "Ejemplo 7: " << endl;
            int* var_en_heap = new int; // crear variable en heap
            *var_en_heap = 1; // asignar un valor
            cout << "La direccion de var_en_heap es: " << &var_en_heap << endl; // direccion de la variable
            delete var_en_heap; // liberar memoria

            break;}
    
    case 8:{
        cout << "Ejemplo 8: " << endl;
            static int var1;
            int var3;
            int* var5 = new int;

            static float var2;
            float var4;
            float* var6 = new float;
            
            cout << "La direccion de var1 es: " << &var1 << endl;
            cout << "La direccion de var2 es: " << &var2 << endl;
            cout << "La direccion de var3 es: " << &var3 << endl;
            cout << "La direccion de var4 es: " << &var4 << endl;
            cout << "La direccion de var5 es: " << &var5 << endl;
            cout << "La direccion de var6 es: " << &var6 << endl;

            cout << "Var1 y var2 tienen direcciones parecidas" << endl;
            cout << "Var3 y var4 tienen direcciones parecidas" << endl;
            cout << "Var5 y var6 tienen direcciones parecidas" << endl;
            
            delete var5;
            delete var6;

            break;}

    case 9:
    {
        cout << "Ejemplo 9: " << endl;
        int numero = 5;
        cout << "Factorial de "<< numero;
        // cout << "Direccion de numero: " << &numero << endl;
        int resultado = factorial_pv(numero);
        cout << " es " << resultado << endl;
        break;
    }
    case 10:
    {
        cout << "Ejemplo 10: " << endl;
        int numero = 5;
        cout << "Factorial de "<< numero;
        // cout << "Direccion de numero: " << &numero << endl;
        factorial_pr(numero);
        cout << " es " << numero << endl;

        break;
    }

    case 11:
    {
        cout << "Ejemplo 11: " << endl;
        int numero = 5;
        cout << "Factorial de "<< numero;
        factorial_puntero(&numero);
        cout << " es " << numero << endl;

        
        // o bien
        int numero2 = 5;
        cout << "Factorial de "<< numero2;
        int *p_numero = &numero2;
        factorial_puntero(p_numero);
        cout << " es " << *p_numero << endl;

        break;
    }

    case 12:
    {
        cout << "Ejemplo 12: " << endl;

        int x[] = {5, 7, 11, 13};

        int *p_x = &x[0];
        cout << "El primer elemento es " << *p_x << endl;
        cout << "El segundo elemento es " << *(p_x + 1) << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << "El elemento " << i << " es " << *(p_x + i) << endl;
        }

        *(p_x + 1) = 10; // modifica el segundo elemento: x[1] = 10

        float y[][2] = {{1.1,2.2,},
                        {3.3, 4.4}};

        float *p_y = &y[0][0];
        cout << "El primer elemento es " << *p_y << endl;
        cout << "El segundo elemento es " << *(p_y + 1) << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << "El elemento " << i << " es " << *(p_y + i) << endl;
        }

        break;
    }
    case 13:
    {
        cout << "Ejemplo 13: " << endl;
        int var, *punt1, **punt2;
        var = 10;       // variable del tipo entero
        punt1 = &var;   // puntero al entero var
        punt2 = &punt1; // puntero al puntero punt1

        cout << "Obteniendo el valor a traves de var, puntero y puntero a puntero:" << endl;
        cout << "var = " << var << endl;
        cout << "*punt1 = " << *punt1 << endl;
        cout << "**punt2 = " << **punt2 << endl;

        cout << "Obteniendo la direccion de var a traves del puntero y puntero a puntero:" << endl;
        cout << "punt1 = " << punt1 << endl;
        cout << "*punt2 = " << *punt2 << endl;

        cout << "Obteniendo la direccion de punt1 a traves del puntero a puntero:" << endl;
        cout << "punt2 = " << punt2 << endl;
        break;
    }

    case 14:
    {
        cout << "Ejemplo 14: " << endl;
        int arreglo1[6] = {0, 1, 2, 3, 4, 5};
        int arreglo2[3] = {6, 7, 8};
        int arreglo3[4] = {9, 10, 11, 12};
        int *arreglos[3] = {&arreglo1[0], &arreglo2[0], &arreglo3[0]};
        int **punt_a_arreglos = &arreglos[0];

        cout << "Sabiendo que punt_a_arreglos apunta al inicio de arreglos" << endl;

        cout << "Los numeros 0, 6 y 9 se obtienen de la siguiente manera:" << endl;
        cout << "**punt_a_arreglos = " << **punt_a_arreglos << endl;
        cout << "**(punt_a_arreglos+1) = " << **(punt_a_arreglos + 1) << endl;
        cout << "**(punt_a_arreglos+2) = " << **(punt_a_arreglos + 2) << endl;

        cout << "Los numeros 1, 7, 10 se obtienen de la siguiente manera:" << endl;
        cout << "*(*punt_a_arreglos+1) = " << *(*punt_a_arreglos + 1) << endl;
        cout << "*(*(punt_a_arreglos+1)+1) = " << *(*(punt_a_arreglos + 1) + 1) << endl;
        cout << "*(*(punt_a_arreglos+2)+1) = " << *(*(punt_a_arreglos + 2) + 1) << endl;

        cout << "Sumando 1 a 12 se obtendria 13:" << endl;
        cout << "*(*(punt_a_arreglos+2)+3)+1 = " << *(*(punt_a_arreglos + 2) + 3) + 1 << endl;
        break;
    }
    case 15:
    {
        double v1[] = {1.1, 2.2, 3.3};
        double v2[] = {4.4, 5.5, 6.6};
        double v3[3];
        int n = 3;

        double *p_v1, *p_v2, *p_v3;

        p_v1 = &v1[0];
        p_v2 = &v2[0];
        p_v3 = &v3[0];

        sumaVectores(p_v1, p_v2, p_v3, n);
        for (int i = 0; i < n; i++)
        {
            cout << *(p_v3 + i) << endl;
        }

        double *arreglo_p[3] = {p_v1, p_v2, p_v3};
        double **p_arreglo_p = &arreglo_p[0];
        sumaVectoresP(p_arreglo_p, n);

        for (int i = 0; i < n; i++)
        {
            cout << *(p_v3 + i) << endl;
        }

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
