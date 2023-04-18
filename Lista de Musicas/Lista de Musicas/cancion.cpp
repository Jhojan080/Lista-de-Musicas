#include <iostream>
#include "Artista.cpp"
using namespace std;
struct Tiempo
{
    int minutos;
    int segundos;
};
class Cancion
{
private:
    string titulo;
    Tiempo duracion;
    Artista artista;

public:
    Cancion()
    {
        titulo = "Cancion triste";
        duracion.minutos = 4;
        duracion.segundos = 25;
    }
    Cancion(string tit, int min, int seg)
    {
        titulo = tit;
        duracion.minutos = min;
        duracion.segundos = seg;
    }
    Cancion(string tit, Tiempo t)
    {
        titulo = tit;
        duracion = t;
    }
    Cancion(string tit, Tiempo t, Artista art)
    {
        titulo = tit;
        duracion = t;
        artista = art;
    }
    void verInfo()
    {
        cout << titulo << " " << duracion.minutos << " : " << duracion.segundos << endl;
    }

    string getTitulo()
    {
        return titulo;
    }
};