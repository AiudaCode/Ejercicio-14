//Se importa paquete "JOptionPane" para dibujar un cuadro de dialogo en pantalla
//que muestre información o para llenar información.
import javax.swing.JOptionPane;

public class Main
{
    public static void main(String[] args)
    {
        //Se crea un objeto de la clase Calcular (Instanciaciación)
        Calcular obj = new Calcular();
        
        //Se crea la variable n de tipo entero y se pide que digite un numero mediante
        //el metodo showInputDialog
        int n = Integer.parseInt(JOptionPane.showInputDialog(null, "Digite numero"));

        //Se encapsula el numero que se digito
        obj.setNum(n);

        //Se muestra en pantalla el cuadrado del numero
        JOptionPane.showMessageDialog(null, "El cuadrado de " + obj.getNum() + " es: " + obj.cuadrado());

        //Se muestra en pantalla el cubo del numero
        JOptionPane.showMessageDialog(null, "El cubo de " + obj.getNum() + " es: " + obj.cubo());
    }
}
