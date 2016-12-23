public class Calcular
{
    //Se define el atributo privado num de tipo entero
    private int num;
    
    //Se definen los metodos publicos para calcular:
    //el cuadrado y el cubo.
    public int cuadrado()
    {
        return num * num;
    }
    public int cubo()
    {
        return num * num * num;
    }

    //Se definen los metodos Setters y Getters
    //(Encapsulamiento)del atributo "num"
    public void setNum(int val)
    {
        num = val;
    }
    public int getNum()
    {
        return num;
    }
}