#include <iostream>
#include "Clase.h"

using namespace std;

struct nodo{
    int dato;

    nodo *isq, *der;
};

nodo *crearNodo (int dato){ // Recerva la memoria para un solo nodo
    nodo *nuevo_nodo = new nodo ();

    nuevo_nodo->dato = dato; 

    return nuevo_nodo;
}

void InsertarNodo (int dato, nodo *&arbol){ // Inserta el nodo a la memoria de arbol dependiendo del dato
    if (arbol == NULL){
        arbol = crearNodo (dato);
    }
    else if (arbol->dato > dato)
        InsertarNodo (dato, arbol->isq);
    else
        InsertarNodo (dato, arbol->der); 
}

void Mostrar_Preorden (nodo *arbol){
    if (arbol == NULL)
        return;

    cout<< arbol->dato << " " << endl;
    Mostrar_Preorden (arbol->isq);
    Mostrar_Preorden (arbol->der);
}

int main (){
    //nodo *Arbol = NULL;

    Clase obj1(1,8), *obj2 = new Clase(); // Inicializa num1 = 1 y num2 = 9

    cout<< "Los datos del objeto 1 son:" << endl;
    cout<< "El dato de num1 es: " << obj1.getNum1() << endl;
    cout<< "El valor de num2 es: " << obj1.getNum2() << endl;

    obj2->SetNum1(4);
    obj2->SetNum2(3);

    cout<< "\nLos datos del objeto 2 son:" << endl;
    cout<< "El dato de num1 es: " << obj2->getNum1() << endl;
    cout<< "El valor de num2 es: " << obj2->getNum2() << endl;

    /*InsertarNodo (20, Arbol);
    InsertarNodo (10, Arbol);
    InsertarNodo (22, Arbol);
    InsertarNodo (19, Arbol);
    InsertarNodo (15, Arbol);
    InsertarNodo (21, Arbol);

    Mostrar_Preorden (Arbol);*/

    return 0;
}
