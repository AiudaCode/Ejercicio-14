#ifndef CALCULAR_H
#define CALCULAR_H


class Calcular
{
    public:
        Calcular();//Metodo constructor
        virtual ~Calcular();//Metodo destructor

        //Se definen los metodos publicos:
        int cuadrado(); //cuadrado de tipo entero
        int cubo(); //cubo de tipo entero

        //Se definen los metodos Setters y Getters
        //(Encapsulamiento)del atributo "num"
        void setNum(int val);
        int getNum();
    protected:

    private:
        //Se define el atributo privado num de tipo
        //entero
        int num;
};

#endif // CALCULAR_H
