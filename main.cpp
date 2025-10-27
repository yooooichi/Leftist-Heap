#include <iostream>
#include <variablesLeftistHeap.h>
using namespace std;

int main() {
  Nodo* HeapPrincipal;
  int opc;
    
    do{
        cout <<"Simulación de programa"<<endl;
        cout<<"1.Insertar Incidentes"<<endl;
        cout<<"2.Solucionar incidente"<<endl;
        cout<<"3.Fusionar zonas"<<endl;
        cout <<"4.Insertar zonas"<<endl;
        cout<<"5.Salir"<<endl;
        cout<< "Elija una opcion:";
        cin >> opc;
        
        switch (opc){
          case 1:{
              mostrarZonas();
              cout<<" Escoja a que zona desea insertar:"<<endl<<endl;
            
            int a;
            cin>>a;
            insertar(zonas[a]);
            break;
              
          }
            
          
          case 2: {
              //remove(HeapPrincipal);
            break;
              
          }
            
          
          case 3:{
              cout <<"Zonas disponibles a mezclar:" <<endl;
            mostrarZonas();
            cout<<"Escoja dos zonas a mezclar: ";
            int x, y;
            cin >>x;
            cin>>y;
            fusionarDosZonas(zonas[x], zonas[y]);
            break;
              
          }
            
          
          case 4:{
              InsertarZona();
            break;
          }
            
          
          case 5:{
              cout<<"Saliendo del programa...";
            break;
          }
            
          
          default:
            cout<<"Ingrese una opcion valida";
            break;
          
          
            
        }
    }while(opc!=5);
    return 0;
}
