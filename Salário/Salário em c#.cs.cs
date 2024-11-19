using System;

public class Desafios
{
    public static void Main(string[] args)
    {
        float valorSalario = float.Parse(Console.ReadLine());
        float valorBeneficios = float.Parse(Console.ReadLine());


        float valorImposto = 0;


        if (valorSalario > 0 && valorSalario <= 1100.00f)
        {
            valorImposto = 0.05f * valorSalario;
        }
        else if (valorSalario > 1100.00f && valorSalario <= 2500.00f)
        {
            valorImposto = 0.10f * valorSalario;
        }
        else if (valorSalario > 2500.00f)
        {
            valorImposto = 0.15f * valorSalario;
        }


        float saida = valorSalario - valorImposto - valorBeneficios;


        Console.WriteLine($"R$ {saida:F2}");
    }
}
