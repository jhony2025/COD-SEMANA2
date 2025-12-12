using System;

// ===================================================================
// CLASE 1: CÍRCULO
// ===================================================================
public class Circulo
{
    private double radio;

    // Constructor:
    // Recibe un valor de tipo double y lo asigna al atributo radio.
    public Circulo(double radio)
    {
        this.radio = radio;
    }

    // Propiedad Radio:
    // Permite acceder y modificar el valor del radio de forma controlada.
    public double Radio
    {
        get { return radio; }
        set { radio = value; }
    }

    // CalcularArea es una función que devuelve un double.
    // Se utiliza para calcular el área del círculo aplicando la fórmula:
    // área = PI * radio^2
    public double CalcularArea()
    {
        return Math.PI * radio * radio;
    }

    // CalcularPerimetro devuelve un double.
    // Calcula la circunferencia del círculo usando:
    // perímetro = 2 * PI * radio
    public double CalcularPerimetro()
    {
        return 2 * Math.PI * radio;
    }
}


// ===================================================================
// CLASE 2: RECTÁNGULO
// ===================================================================
public class Rectangulo
{
    private double largo;
    private double ancho;

    // Constructor:
    // Recibe dos valores double y los asigna a los atributos internos.
    public Rectangulo(double largo, double ancho)
    {
        this.largo = largo;
        this.ancho = ancho;
    }

    // Propiedad Largo:
    // Acceso controlado al atributo largo.
    public double Largo
    {
        get { return largo; }
        set { largo = value; }
    }

    // Propiedad Ancho:
    // Acceso controlado al atributo ancho.
    public double Ancho
    {
        get { return ancho; }
        set { ancho = value; }
    }

    // CalcularArea devuelve un double.
    // Usa la fórmula área = largo * ancho.
    public double CalcularArea()
    {
        return largo * ancho;
    }

    // CalcularPerimetro devuelve un double.
    // Aplica la fórmula: perímetro = 2 * (largo + ancho)
    public double CalcularPerimetro()
    {
        return 2 * (largo + ancho);
    }
}


// ===================================================================
// PROGRAMA PRINCIPAL
// ===================================================================
class Program
{
    static void Main(string[] args)
    {
        // Crear un círculo de radio 5
        Circulo c = new Circulo(5);
        Console.WriteLine("=== CÍRCULO ===");
        Console.WriteLine("Radio: " + c.Radio);
        Console.WriteLine("Área: " + c.CalcularArea());
        Console.WriteLine("Perímetro: " + c.CalcularPerimetro());

        // Crear un rectángulo de 10 x 6
        Rectangulo r = new Rectangulo(10, 6);
        Console.WriteLine("\n=== RECTÁNGULO ===");
        Console.WriteLine("Largo: " + r.Largo);
        Console.WriteLine("Ancho: " + r.Ancho);
        Console.WriteLine("Área: " + r.CalcularArea());
        Console.WriteLine("Perímetro: " + r.CalcularPerimetro());

        Console.ReadLine();
    }
}
