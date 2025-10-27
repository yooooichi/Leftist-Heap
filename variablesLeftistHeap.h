#include <iostream>
using namespace std;

struct Nodo { // min heap sesgado
    int dato; // prioridad
    string caso;
    string descripcion;
    Nodo* izq;
    Nodo* der;
    
    Nodo(int v, string x, string z) : dato(v), caso(x), descripcion(z), izq(nullptr), der(nullptr) {};
};

Nodo* insertar(Nodo* aux1) {
	string s1, s2;
	int b;
	
	cout << "Ingrese el nombre del incidente: ";
	getline(cin, s1);
	
	cout << "Ingrese una descripcion para el incidente: ";
	getline(cin, s2);
	
  cout << "Ingrese una prioridad para el incidente registrado: ";
  cin >> b;
	
	Nodo* temp = new Nodo(b, s1, s2);
    merge(aux1, temp); // donde aux1 es la raiz
    
    return aux1;
} 

