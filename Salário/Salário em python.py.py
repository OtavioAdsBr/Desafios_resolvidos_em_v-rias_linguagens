def calcular_salario():

    valor_salario = float(input("Digite o valor do salário: "))
    valor_beneficios = float(input("Digite o valor dos benefícios: "))


    valor_imposto = 0


    if valor_salario > 0 and valor_salario <= 1100.00:
        valor_imposto = 0.05 * valor_salario
    elif valor_salario > 1100.00 and valor_salario <= 2500.00:
        valor_imposto = 0.10 * valor_salario
    elif valor_salario > 2500.00:
        valor_imposto = 0.15 * valor_salario


    saida = valor_salario - valor_imposto - valor_beneficios


    print(f"R$ {saida:.2f}")

calcular_salario()
