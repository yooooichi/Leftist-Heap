#include <iostream>
#include <vector>
using namespace std;

struct Nodo { // min leftist heap
    int dato; // prioridad
    string ubicacion;
    string descripcion;
    int npl;
    
    Nodo* izq;
    Nodo* der;
    
    Nodo(int v, string x, string z) : dato(v), ubicacion(x), descripcion(z), npl(0), izq(nullptr), der(nullptr) {};
};
vector<Nodo*> zonas;

void mostrarZonas() {
	for(int i = 0; i < zonas.size(); i++) {
		cout << "Zona #" << i << endl;
		cout << "Nombre del incidente: " << zonas[i]->caso << endl;
		cout << "Descripcion del incidente: " << zonas[i]->descripcio << endl;
	}
}

Nodo* merge(Nodo* heap, Nodo* nuevoNodo){
    if(!heap) return nuevoNodo;
    if(!nuevoNodo) return heap;
    
    if(heap->dato > nuevoNodo->dato)
        swap(heap, nuevoNodo);
    
    heap->der = merge(heap->der, nuevoNodo);
    
    int nplD = heap->der ? heap->der->npl : -1;
    int nplI = heap->izq ? heap->izq->npl : -1;

    if(nplI < nplD){
        swap(heap->der, heap->izq);
    }
    
    heap->npl = (heap->der ? heap->der->npl : -1) + 1;
    
    return heap;

}

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
Nodo* atenderIncidente(Nodo* heap) {
    if (!heap) {
        cout << "No hay incidentes para atender." << endl;
        return nullptr;
    }
    cout << "Incidente atendido:" << endl;
    cout << "Prioridad: " << heap->dato << endl;
    cout << "Ubicación: " << heap->ubicacion << endl;
    cout << "Descripción: " << heap->descripcion << endl;
    
    Nodo* izquierdo = heap->izq;
    Nodo* derecho = heap->der;
    
    delete heap;
    return merge(izquierdo, derecho);
}
void fusionarDosZonas(Nodo* zona1, Nodo* zona2){
    cout<<"Debido a la falta de recursos, se va a proceder a fusionar la zona de atención "<<zona1->ubicacion<<" y "<<zona2->ubicacion<<". "<<endl;
    merge(zona1, zona2);
    
    cout<<"Zonas fusionadas correctamente."<<endl;
}
