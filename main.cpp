#include <iostream>
using namespace std;

// Estructura de datos para almacenar un nodo de �rbol binario
struct Node
{
    int dato;
    Node *izquierda, *derecha;

    Node(int dato)
    {
        this->dato = dato;
        this->izquierda = this->derecha = nullptr;
    }
};

// Funci�n recursivo para calcular la altura de un �rbol binario dado
int altura(Node* arbol)
{
    // caso base: el �rbol vac�o tiene una altura de 0
    if (arbol == nullptr) {
        return 0;
    }

    // recurre para el sub�rbol izquierdo y derecho y considera la profundidad m�xima
    return 1 + max(altura(arbol->izquierda), altura(arbol->derecha));
}

int main()
{
    Node* arbol = new Node(15);
    arbol->izquierda = new Node(10);
    arbol->derecha = new Node(20);
    arbol->izquierda->izquierda = new Node(8);
    arbol->izquierda->derecha = new Node(12);
    arbol->derecha->izquierda = new Node(16);
    arbol->derecha->derecha = new Node(25);

    cout << "La altura del arbol es " << altura(arbol);

    return 0;
}
