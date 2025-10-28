#include <iostream>
#include <vector>
#include "LeftisHeap.h"
using namespace std;

int main() {
  int opc;
    
    do{
        cout<<"Simulación de programa"<<endl;
        cout<<"1.Insertar Incidentes"<<endl;
        cout<<"2.Solucionar incidente"<<endl;
        cout<<"3.Fusionar zonas"<<endl;
        cout<<"4.Insertar zonas"<<endl;
        cout<<"5.Salir"<<endl;
        cout<<"Elija una opcion: ";
        cin >> opc;
        
        switch (opc){
          case 1:{
              if(zonas.empty()){
                  cout<<"Todavía no hay zonas registradas."<<endl;
                  break;
              }
              mostrarZonas();
            int a;
            cout << "Escoja a qué zona desea insertar: ";
            cin>>a;
            zonas[a] = insertar(zonas[a]);
            break;
              
          }
            
          case 2: {
              
              if (zonas.empty()) {
                cout << "No existen zonas registradas actualmente." << endl;
                break;
                }
              
              mostrarZonas();
              cout<<"Escoja una zona:";
              int i;
              cin>>i;
            zonas[i] = atenderIncidente(zonas[i]);
            break;
              
          }
            
          case 3:{
            if (zonas.size() < 2) {
                    cout << "Se necesitan al menos dos zonas para fusionar." << endl;
                    break;
                }
            cout <<"Zonas disponibles a mezclar:" <<endl;
            mostrarZonas();
            cout<<"Escoja dos zonas a mezclar: "<<endl;
            int x, y;
            cout<<"Zona 1:";cin >>x;
            cout<<"Zona 2:";cin>>y;
            fusionarDosZonas(x, y);
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
        cout<<endl;
    }while(opc!=5);
    return 0;
}
