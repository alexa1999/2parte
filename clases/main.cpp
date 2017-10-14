#include <iostream>
#include <string>
using namespace std;

class Posicion{
public:
    int x;
    int y;
    //se reconoce que es constructor cuando no devuelve nada y su nombre tiene el mismo nombre de la clase;
    //este sirve para inicializar la clase;
    //int obtenerPosx(){return x;}
    Posicion(){x=0;y=0;cout<<"constructor posicion"<<endl;}
};
class Dama{
private:
    string color;
    int comida;


    Posicion posicion;
public:
    Dama()
    {
        color ="rojo";
    }
    int getPosx(){
        return posicion.x;
    }
};
class Tablero{

    Dama piezas[8][8];

};
void imprimir(int *matriz,int x,int y)
{
    for(int i=0;i<x;i++)
        for(int j=0;j<y;j++)
            cout<<*((matriz+(i*y))+j)<<endl;
}
int main()
{
//    Posicion pos;//se llama al constructo de la clase posicion
//    cout<<pos.x;
    int x=2;
    int y=2;
    int matriz[x][y];
    matriz [0][0]=0;
    matriz[0][1]=1;
    matriz [1][0]=2;
    matriz[1][1]=3;
    imprimir((int*)matriz,x,y);
    Dama dama;
    cout<<dama.getPosx()<<endl;
}
