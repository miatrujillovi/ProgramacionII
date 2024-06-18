#include <iostream>
#include <vector>

struct Ayuda{
        bool helpMe;
        std::string saveMe;
        char ICANT;
        int HELP;
};

int main() {
    // ENTENDIMIENTO DE REFERENCIAS
    /* int i = 5;
    int &ref = i;
    std::cout << i << std::endl;
    std::cout << &ref << std::endl; */

    // SEMANTICA DE VALORES
    /* int i = 10;
    int j = i;
    j += 25;
    std::cout << i << std::endl;
    std::cout << j << std::endl; */

    // EL PUNTERO (p1) GUARDA UN ESPACIO DE MEMORIA EN EL HEAP
    /* int *p1 = new int(11);
    int *p2 = p1;
    *p1 = 25;
    std::cout << *p1 << std::endl;
    std::cout << *p2 << std::endl; */

    //EJERCICIO CON PUNTEROS EN HEAP
    /* int *p1 = new int(1);
    int *p2 = new int(2);
    int *p3 = p1;
    int *p4 = p2;
    *p1 = 10;
    *p2 = 20;
    std::cout << *p1 << " " << *p3 << std::endl;
    std::cout << *p2 << " " << *p4 << std::endl;
    delete p3;
    delete p4; */

    // EJERCICIO USANDO MALLOC, CALLOC Y REALLOC CON VOIDS
    /* void *p1 = malloc(500);
    void *p2 = calloc (5, sizeof(500));
    p2 =  realloc(p2, 10*sizeof(200));
    delete p1;
    delete p2; */

    // 1.- ALOCA CON MALLOC UN INT Y LIBERAR MEMORIA
    /* int *pint = (int *) malloc (sizeof(int));
    *pint = 100;
    std::cout << *pint << std::endl;
    free (pint); */

    // 2.- CREAR UN ESPACIO DE MEMORIA DE 20 ENTEROS, CON VALOR, IMPRIMIRLOS Y LIBERAR MEMORIA
    /* int *pint2 = (int *) calloc(20, sizeof(int));
    for(int i=0;i<20;i++){
        // La parte izquierda mueve los indices de espacios dentro de la memoria y la derecha rellena con datos
        *(pint2 + i) = i*10;
    }
    for(int i=0;i<20;i++){
        std::cout << *(pint2 + i) << std::endl;
    }
    free (pint2); */

    // 3.- TOMA pint2 Y DUPLICAR EL TAMAÑO DE MEMORIA
    /* int *temp = (int *) realloc(pint2, 40*sizeof(int));
    pint2 = temp;
    free (pint2); */

    // 4.- ALOCAR MEMORIA PARA UN INT USANDO NEW, ASIGNAR VALOR, IMPRIMIR Y LIBERAR MEMORIA CON DELETE
    /* int *pint3 = new int;
    *pint3 = 6;
    std::cout << pint3 << std::endl;
    delete pint3; */

    // 5.- UTILIZANDO NEW Y DELETE, CREAR ARREGLO DE 20 ELEMENTOS, IMPRIMIR Y LIBERAR
    /* int *pint4 = new int(20);
    for(int i=0;i<20;i++){
        *(pint4 + i) = i*5;
    }
    for(int i=0; i<20;i++){
        std::cout << *(pint4 + i) << std::endl;
    }
    delete pint4; */

    // 6.- CREAR ESTRUCTURA (min 4, distintos tipos de datos) E INSTANCIAR UTILIZANDO NEW Y MALLOC
    /* Ayuda *heeeeeelp1 = new Ayuda;
    delete heeeeeelp1; */

    // 7.- USANDO LA MISMA ESTRUCTURA, INSTANCIAR CON MALLOC Y LIBERAR CON FREE
    /* Ayuda *heeeeeelp2 = (Ayuda *) malloc (sizeof(Ayuda));
    free (heeeeeelp2); */

    // 8.- ALOCAR ESTRUCTURA UTILIZANDO CALLOC
    /* Ayuda *heeeeeelp3 = (Ayuda *) calloc (10, sizeof(Ayuda));
    free (heeeeeelp3); */

    // 9.- CON PUNTEROS INTELIGENTES ALMACENAR UN ESPACIO PARA INT, DARLE VALOR Y LIBERAR MEMORIA
    /* std::unique_ptr<int> uniquePtr1 = std::make_unique<int>(10);
    *uniquePtr1 = 100; */

    // 10.- USANDO REALLOC, ENCOGER UN ARREGLO CREADO CON CALLOC A LA MITAD DEL TAMAÑO ORIGINAL
    /* void *ptrR = calloc  (15, sizeof(200));
    ptrR = realloc(ptrR, 2/sizeof(200));
    delete ptrR; */

    return 0;
}
