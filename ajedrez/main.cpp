#include <iostream>
#include <string>
using namespace std;
class Posicion{
public:
    int m_x;
    int m_y;
    Posicion(int x=0,int y=0)
    {
        m_x=x;
        m_y=y;
        cout<<"constructor posicion"<<endl;
    }


};

class Pieza{
public:
    Posicion posicion;
public:
    Pieza(Posicion pos){
        posicion.m_x=pos.m_x;
        posicion.m_y=pos.m_y;
    }
    virtual void avanzarPieza(){
        cout<<"avanzar pieza"<<endl;
        posicion.m_y++;
    }

};

class Peon:public Pieza{
public:
    Peon(Posicion pos):Pieza(pos){
    }
    void avanzarPieza(){
    cout<<"avanzar peon"<<endl;
    posicion.m_x++;
    posicion.m_y++;
    }
};
int main()
{
    Posicion pos(0,0);
    Pieza* p;
    Peon peon(pos);//se esta haciedno el polimorfismo
    p=&peon;
    p->avanzarPieza();


    return 0;
}
