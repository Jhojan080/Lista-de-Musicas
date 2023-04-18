#include <iostream>
#include <vector>
#include "Cancion.cpp"
using namespace std;

class PlayList
{
private:
    string nombre;
    string descripcion;
    vector<Cancion> listaCanciones;
public:
    void agregarCancion(Cancion c)
    {

        listaCanciones.push_back(c);
    }
    void eliminarCancion(int nroCancion)
    {

    }
    void verLista()
    {

    }
    Cancion buscarCancion(string titulo)
    {

        Cancion c;
        return c;
    }
};