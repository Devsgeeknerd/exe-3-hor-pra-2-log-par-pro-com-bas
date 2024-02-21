#include <stdio.h>

int main()
{
    // Declaração de variáveis para as áreas do terreno.
    float areaTotal, areaConstruida, areaNaoConstruida;

    // Declaração de variáveis para os preços por metro quadrado.
    float precoConstruido = 5.0;    // R$ por m² construído.
    float precoNaoConstruido = 3.8; // R$ por m² não construído.

    // Variável para armazenar o imposto total.
    float impostoTotal;

    // Solicita ao usuário as informações sobre o terreno.
    printf("Digite a area total do terreno em metros quadrados: ");
    scanf("%f", &areaTotal);

    printf("Digite a area construida do terreno em metros quadrados: ");
    scanf("%f", &areaConstruida);

    // Calcula a área não construída subtraindo a área construída da área total.
    areaNaoConstruida = areaTotal - areaConstruida;

    // Calcula o imposto total multiplicando a área construída pelo preço por m² construído
    // e a área não construída pelo preço por m² não construído, somando os resultados.
    impostoTotal = (areaConstruida * precoConstruido) + (areaNaoConstruida * precoNaoConstruido);

    // Exibe o resultado.
    printf("Imposto sobre o terreno: R$ %.2f\n", impostoTotal);

    return 0;
}
