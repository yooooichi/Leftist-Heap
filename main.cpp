#include <iostream>
#include <variablesLeftistHeap.h>
using namespace std;

int main() {
  Nodo* HeapPrincipal;
  int opc;
    
    do{
        cout <<"Simulación de programa";
        cout<< "Elija una opcion:"
        cout<<"1.Insertar Incidentes";
        cout<<"2.Solucionar incidente";
        cout<<"3.Fusionar zonas";
        cout <<"4.Insertar zonas";
      
        cout<<"5.Salir";
        
        switch (opc){
          case 1:
            insertar(HeapPrincipal);
            break;
          case 2:
            remove(HeapPrincipal);
          break;
          case 3:
            cout <<"Zonas disponibles a mezclar:" <<endl;
            for (int i =0; i<zonas.size();i++){
              cout<< "Caso #"<<i<<endl;
              cout<<"Nombre del caso: "<<zonas[i]->caso<<endl;
              cout<<"Descripcion: "<< zonas[i]->descripcion<<endl;
            }
            cout<<"Escoja dos zonas a mezclar: ";
            int x, int y;
            cin >>x;
            cin>>y;
            merge(zonas[x], zonas[y]);
          break;
          case 4:
          InsertarZona

          
          default:
            break;
          
          
            
        }
}
