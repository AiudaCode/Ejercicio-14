#include <iostream>

//Se incluye a la clase Calcular para despues
//llamar a sus metodos
#include <Calcular.h>

using namespace std;

int main()
{
    //Se crea un objeto de la clase Calcular (Instanciaciación)
    Calcular* obj = new Calcular();

    //Se define una variable llamada "n" de tipo entero
    int n;

    //Se imprime en pantalla que se digite el numero
    cout << "Digite numero" << endl;

    //Se guarda el numero en la variable "n"
    cin >> n;

    //Se encapsula el numero que se digito
    obj->setNum(n);

    //Se muestra en pantalla el cuadrado del numero
    cout << "El cuadrado de " << obj->getNum() << " es: " << obj->cuadrado() << endl;

    //Se muestra en pantalla el cubo del numero
    cout << "El cubo de " << obj->getNum() << " es: " << obj->cubo() << endl;
    return 0;
}
