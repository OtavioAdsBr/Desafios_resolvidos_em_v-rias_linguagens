fun calcularSalario() {
    // Leitura de dados
    println("Digite o valor do salário: ")
    val valorSalario = readLine()!!.toFloat()
    println("Digite o valor dos benefícios: ")
    val valorBeneficios = readLine()!!.toFloat()

    // Inicialização do valor do imposto
    var valorImposto = 0f

    // Lógica de imposto
    if (valorSalario > 0 && valorSalario <= 1100.00) {
        valorImposto = 0.05f * valorSalario
    } else if (valorSalario > 1100.00 && valorSalario <= 2500.00) {
        valorImposto = 0.10f * valorSalario
    } else if (valorSalario > 2500.00) {
        valorImposto = 0.15f * valorSalario
    }

    // Cálculo da saída
    val saida = valorSalario - valorImposto - valorBeneficios

    // Exibe o resultado formatado
    println("R$ %.2f".format(saida))
}

fun main() {
    // Chama a função para execução
    calcularSalario()

    // Mensagem opcional de fim de execução
    println("Fim do programa.")
}
