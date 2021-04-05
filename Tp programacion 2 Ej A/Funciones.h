#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
enum Color
{
    cNEGRO=0,
    cAZUL=1,
    cVERDE=2,
    cCIAN=3,
    cROJO=4,
    cMAGENTA=5,
    cMARRON=6,
    cGRIS_CLARO=7,
    cGRIS=8,
    cAZUL_CLARO=9,
    cVERDE_CLARO=10,
    cCIAN_CLARO=11,
    cROJO_CLARO=12,
    cMAGENTA_CLARO=13,
    cAMARILLO=14,
    cBLANCO=15
};
/// Se definen una serie de constantes que asumen el valor que se le asignó.
/// Es más fácil usar cBLANCO para setear el color a blanco, que acordarse el número 15

void ocultarCursor()
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

void mostrarCursor()
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 10;
    info.bVisible = TRUE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

void gotoxy(short x, short y)  ///UBICA EL CURSOR EN LA POSICIÓN x,y DE LA PANTALLA
{
    COORD a;
    a.X = x;
    a.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
///ASIGNA COLORES AL TEXTO Y AL FONDO DEL TEXTO
void textcolor(int colorTexto=15, int colorFondo=0)
{
    int color = colorTexto + colorFondo * 16;
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE), color);
}

void delay(int secs)
{
    for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}

///**FIN FUNCIONES

///CLASE PUNTO
class Punto
{
private:
    int x;
    int y;
    int color;
public:
    Punto(int a=0, int b=0, int nuevoColor=cNEGRO)
    {
        x=a;
        y=b;
        color=nuevoColor;
    }
    void Mostrar()
    {
        textcolor(color, 15);
        gotoxy(x,y);
        cout<<".";
    }
    void MostrarValores();
    void Ocultar()
    {
        gotoxy(x,y);
        cout<<" ";
    }
    void setX(int valor)
    {
        if(valor>=0 && valor<=75)  x=valor;
    }
    void setY(int valor)
    {
        if(valor>=0)  y=valor;
    }

    void setColor(int nuevo)
    {
        if(nuevo>0 && nuevo<=15)
            color=nuevo;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    int getColor()
    {
        return color;
    }
    ~Punto() ///DESTRUCTOR: se ejecuta cuando el objeto cae fuera de su alcance.
    {
        textcolor(0,15);

    }
};

void Punto::MostrarValores()
{
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<color<<endl;

}

void punto1()
{
    int ejex,ejey;
    cout<< "Ingrese la posicion en la que desea ubicar el punto en el eje x: "<<endl;
    cin>>ejex;
    cout<< "Ingrese la posicion en la que desea ubicar el punto en el eje y: "<<endl;
    cin>>ejey;
    Punto obj(cAZUL);
    obj.setX(ejex);
    obj.setY(ejey);
    system ("cls");
    obj.Mostrar();

}

void punto2()
{
    int ejey;
    cout << "Ingrese de donde quiere que comienze la linea horizontal: "<<endl;
    cin >>ejey;
    system ("cls");
    Punto obj[50]= {(cAZUL)};
    int cont=0;
    for (int i=0; i<50; i++)
    {
        obj[i].setX(cont);
        obj[i].setY(ejey);
        obj[i].Mostrar();
        cont++;
    }

}

void punto3()
{
    int ejex;
    cout << "Ingrese de donde quiere que comienze la linea vertical: "<<endl;
    cin >>ejex;
    system ("cls");
    Punto obj[50]= {(cAZUL)};
    int cont=0;
    for (int i=0; i<50; i++)
    {
        obj[i].setY(cont);
        obj[i].setX(ejex);
        obj[i].Mostrar();
        cont++;
    }
}

void punto4()
{
    int ejey;
    cout << "Ingrese de donde quiere que comienze la linea horizontal: "<<endl;
    cin >>ejey;
    system ("cls");
    Punto obj[50]= {(cAZUL)};
    int cont=0;
    for (int i=0; i<50; i++)
    {
        obj[i].setX(cont);
        obj[i].setY(ejey);
        obj[i].setColor(1);
        obj[i].Mostrar();
        cont++;
        obj[i].setX(cont);
        obj[i].setY(ejey);
        obj[i].setColor(4);
        obj[i].Mostrar();
        cont++;
    }
}

void punto5()
{
    int ejex;
    cout << "Ingrese de donde quiere que comienze la linea vertical: "<<endl;
    cin >>ejex;
    system ("cls");
    Punto obj[50]= {(cAZUL)};
    int cont=0;
    for (int i=0; i<50; i++)
    {
        obj[i].setX(ejex);
        obj[i].setY(cont);
        obj[i].setColor(1);
        obj[i].Mostrar();
        cont++;
        obj[i].setX(ejex);
        obj[i].setY(cont);
        obj[i].setColor(4);
        obj[i].Mostrar();
        cont++;
    }
}

void punto6()
{
    system ("cls");
    Punto obj[25];
    Punto obj2[25];
    int cont=0,cont2=50;
    for (int i=0; i<25; i++)
    {
        obj[i].setColor(cAZUL);
        obj[i].setX(cont);
        obj[i].setY(0);
        obj[i].Mostrar();
        cont++;
    }
    for (int f=25; f>=0; f--)
    {
        obj2[f].setColor(cROJO);
        obj2[f].setX(cont2);
        obj2[f].setY(0);
        obj2[f].Mostrar();
        cont2--;
    }
}

void punto7()
{
    int ejey;
    cout<< "Ingrese el valor de y que quiere que se muestren las lineas de inicio: "<<endl;
    cin>>ejey;
    system ("cls");
    Punto obj[25];
    Punto obj2[25];
    int cont=0,cont2=50;
    for (int i=0; i<25; i++)
    {
        obj[i].setColor(cAZUL);
        obj[i].setX(cont);
        obj[i].setY(ejey);
        obj[i].Mostrar();
        cont++;
        if (i==24)
        {
            for(int z=ejey; z>=0; z--)
            {
                obj[i].setX(cont-1);
                obj[i].setY(z);
                obj[i].Mostrar();
            }
        }
    }
    for (int f=25; f>=0; f--)
    {
        obj2[f].setColor(cROJO);
        obj2[f].setX(cont2);
        obj2[f].setY(ejey);
        obj2[f].Mostrar();
        cont2--;
        if (f==1)
        {
            for(int q=ejey; q>=0; q--)
            {
                obj2[f].setX(cont2);
                obj2[f].setY(q);
                obj2[f].Mostrar();
            }
        }
    }
}

void punto8()
{
    int ejex,ejey;
    cout<< "Ingrese la posicion en la que desea ubicar el punto en el eje x: "<<endl;
    cin>>ejex;
    cout<< "Ingrese la posicion en la que desea ubicar el punto en el eje y: "<<endl;
    cin>>ejey;
    Punto obj(cAZUL);
    obj.setX(ejex);
    obj.setY(ejey);
    system ("cls");
    for(int i=0; i<10; i++)
    {
        obj.Mostrar();
        delay(1);
        obj.Ocultar();
        delay(1);
    }
}

void punto9()
{
    int ladomay,ladomen;
    Punto *vecmen=NULL,*vecmay=NULL;
    cout<< "Ingrese el lado menor del rectangulo: "<<endl;
    cin>>ladomen;
    cout<< "Ingrese el lado mayor del rectangulo: "<<endl;
    cin>>ladomay;
    vecmen=new Punto [ladomen];
    vecmay=new Punto [ladomay];
    if(vecmen==NULL || vecmay==NULL)
    {
        cout <<"No hay memoria "<<endl;
    }
    else
    {
        system ("cls");
        int conty1=0,conty2=1,posyini=0,contx1=1,contx2=0;
        for (int i=0; i<ladomen; i++)
        {
            vecmen[i].setColor(cAZUL);
            vecmen[i].setY(conty1);
            vecmen[i].setX(0);
            vecmen[i].Mostrar();
            conty1++;
            posyini=conty1;
            vecmen[i].setY(conty2);
            vecmen[i].setX(ladomay);
            vecmen[i].Mostrar();
            conty2++;
        }
        for (int z=0; z<ladomay; z++)
        {
            vecmay[z].setColor(cROJO);
            vecmay[z].setY(0);
            vecmay[z].setX(contx1);
            vecmay[z].Mostrar();
            contx1++;
            vecmay[z].setY(posyini);
            vecmay[z].setX(contx2);
            vecmay[z].Mostrar();
            contx2++;
        }
    }
}

void punto10()
{

}
#endif // FUNCIONES_H_INCLUDED
