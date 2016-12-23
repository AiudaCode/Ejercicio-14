#include "Calcular.h"

Calcular::Calcular()
{
    //a la variable num se le asigna 0
    //en el constructor de la clase.
    num = 0;
}

Calcular::~Calcular()
{
    //dtor
}

//implementacion del metodo cuadrado()
int Calcular::cuadrado()
{
    //se retorna la variable num multiplicada
    //dos veces
    return num * num;
}

//implementacion del metodo cubo()
int Calcular::cubo()
{
    //se retorna la variable num multiplicada
    //tres veces
    return num * num * num;
}

//implementacion del metodo modificador del
//atributo "num"
void Calcular::setNum(int val)
{
    //a "num" se le asigna "val"
    num = val;
}

//implementacion del metodo selector del
//atributo "num"
int Calcular::getNum()
{
    //se retorna "num"
    return num;
}
