#include <iostream>
#include <conio.h>
using namespace std;

struct nodo {
    int dato;
    struct nodo* siguiente;
};

void Insertar(nodo*& listasimple, int n);
void MostrarLista(nodo* listasimple);
void QuickSort(nodo*& listasimple);

void MostrarLista(nodo* listasimple) {
    nodo* actual = listasimple;
    while (actual != NULL) {
        cout << actual->dato << " ";
        actual = actual->siguiente;
    }
    cout << endl;
}

void QuickSort(nodo*& listasimple) {
    if (listasimple == NULL || listasimple->siguiente == NULL) {
        return;
    }

    nodo* pivot = listasimple;
    listasimple = listasimple->siguiente;

    nodo* less = NULL;
    nodo* greater = NULL;

    while (listasimple != NULL) {
        nodo* next = listasimple->siguiente;
        if (listasimplesimple->dato < pivot->dato) {
            listasimple->siguiente = less;
            less = lista;
        } else {
            listasimple->siguiente = greater;
            greater = listasimple;
        }
        listasimple = next;
    }

    QuickSort(less);
    QuickSort(greater);

    if (less == NULL) {
        lista = pivot;
    } else {
        nodo* tail = less;
        while (tail->siguiente != NULL) {
            tail = tail->siguiente;
        }
        tail->siguiente = pivot;
        lista = less;
    }

    pivot->siguiente = greater;
}

int main() {
    nodo* listasimple = NULL;
    int nro, m, nuevo;
    cout << "Cantidad de la lista\n";
    cin >> m;

    for (int i = 0; i < m; i++) {
        cout << "Ingrese el valor\n";
        cin >> nro;
        Insertar(lista, numero);
    }

    int opc;
    do {
        cout << "OPCIONES\n";
        cout << "1. Mostrar lista \n";
        cout << "2. Mostrar lista organizada\n";
        cin >> opc;

        switch (opc) {
            case 1:
                cout << "Lista en desorden: ";
                mostrarLista(listasimple);
                system("pause");
                break;
            case 2:
                QuickSort(listasimple);
                cout << "Lista ordenada con QuickSort: ";
                mostrarLista(listasimple);
                system("pause");
                break;
        }
        system("cls");
    } while (opc != 3);

    return 0;
}

void insertar(nodo*& listasimple, int n) {
    nodo* Nlista = new nodo();
    Nlista->dato = n;
    Nlista->siguiente = lista;
    lista = Nlista;
}


