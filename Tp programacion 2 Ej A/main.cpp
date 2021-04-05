# include<iostream>
# include<cstdlib>
# include<cstdio>
# include<cstring>
#include <windows.h>
#include <ctime>


using namespace std;
#include "Funciones.h"

int main()
{
    int opc;
    while(true)
    {
        system("cls");
        cout<<"-----------------------------------------------------------------------------------"<<endl;
        cout<<"--------------------------------------MENU-----------------------------------------"<<endl;
        cout<<"------------------1. DIBUJAR UN PUNTO MEDIANTE COORDENADAS PEDIDAS-----------------"<<endl;
        cout<<"--------------------------2. DIBUJAR UNA LINEA HORIZONTAL--------------------------"<<endl;
        cout<<"----------------------3. DIBUJAR UNA LINEA DE PUNTOS VERTICAL----------------------"<<endl;
        cout<<"----------4. DIBUJAR UNA LINEA DE PUNTOS HORIZONTAL QUE ALTERNE 2 COLORES----------"<<endl;
        cout<<"------------5. DIBUJAR UNA LINEA DE PUNTOS VERTICAL QUE ALTERNE 2 COLORES----------"<<endl;
        cout<<"----------6. DIBUJAR DOS LINEAS HORIZONTALES QUE SE ENCUENTREN EN EL MEDIO---------"<<endl;
        cout<<"-7.DIBUJAR DOS LINEAS HORIZONTALES QUE SE ENCUENTREN EN EL MEDIO Y SUBEN HASTA Y=0-"<<endl;
        cout<<"------------------------8.PUNTO QUE PARAPADEA EN LA PANTALLA-----------------------"<<endl;
        cout<<"--------------------9.DIBUJAR UN RECTANGULO A PARTIR DE DOS DATOS------------------"<<endl;
        cout<<"------------------------------0. FIN DEL PROGRAMA----------------------------------"<<endl;
        cout<<"-----------------------------------------------------------------------------------"<<endl;
        cout<<"OPCION: ";
        cin>>opc;
        system("cls");
        ocultarCursor();
        switch(opc)
        {
        case 1:
            punto1();
            break;
        case 2:
            punto2();
            break;
        case 3:
            punto3();
            break;
        case 4:
            punto4();
            break;
        case 5:
            punto5();
            break;
        case 6:
            punto6();
            break;
        case 7:
            punto7();
            break;
        case 8:
            punto8();
            break;
        case 9:
            punto9();
            break;
        case 10:
            punto10();
            break;
        case 0:
            return 0;

        }
        system("pause>null");
        mostrarCursor();

    }
    return 0;
}

/*void aleatorio(Punto *vec, int tam){
    srand(time(NULL));
    for(int i=0;i<tam;i++){
       vec[i].setX(rand()%50);
       vec[i].setY(rand()%15);
      }
}*/

