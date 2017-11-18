#include <iostream>

using namespace std;

class Urbanizacion
{
    public:
    string  nombre;
    string getNombre(){
        return nombre;
    }

};
class Calle
{
public:
    string nombre;
    string tipo;
    string getNombre(){
        return nombre;
    }
};
template<typename T>
class Lote{
public:
    string nro;
    T lugar;

    string getDireccion(){
        return "";
    }



};
template <>
class Lote<Calle>{
    public:
    string nro;
    Calle lugar;
    string getDireccion(){
        return lugar.tipo +" "+lugar.nombre+" "+nro;
    }

};
template <>//estamos especializando la clase general,y vamos a usar el atributo t
class Lote<Urbanizacion>{
    public:
    string nro;
    Urbanizacion lugar;
    string getDireccion(){
        return "Urb. "+lugar.nombre+" "+nro;
    }

};
int main()
{
    Calle c;
    c.tipo="Av";
    c.nombre="Salaverry";
    Lote<Calle>l;
    l.lugar=c;
    l.nro="300";
    cout<<l.getDireccion();
    Urbanizacion u;
    u.nombre="Las Flores";
    Lote<Urbanizacion>l2;
    l2.lugar=u;
    l2.nro="AS";
    cout<<l2.getDireccion()<<endl;
}
