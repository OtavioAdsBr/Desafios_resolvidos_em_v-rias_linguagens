function calcularSalario() {
    const valorSalario = parseFloat(prompt("Digite o valor do salário:"));
    const valorBeneficios = parseFloat(prompt("Digite o valor dos benefícios:"));

    let valorImposto = 0;

    if (valorSalario > 0 && valorSalario <= 1100.00) {
        valorImposto = 0.05 * valorSalario;
    } else if (valorSalario > 1100.00 && valorSalario <= 2500.00) {
        valorImposto = 0.10 * valorSalario;
    } else if (valorSalario > 2500.00) {
        valorImposto = 0.15 * valorSalario;
    }

    const saida = valorSalario - valorImposto - valorBeneficios;

    alert(`R$ ${saida.toFixed(2)}`);
}

calcularSalario();
