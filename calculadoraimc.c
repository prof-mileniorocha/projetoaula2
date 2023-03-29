#include <stdio.h>

int main() {
    
    float peso, altura;
    float resultado_imc;
    
    int finaliza_programa;
    
    printf("Orientações: O peso e a altura deve ser digitado com o . ao invés da vírgula, \n");
    printf("Por exemplo 1.8 (Quando a pessoa tem 1 metro e 80 centímetros) | 71.50 (Quando a pessoa pesa 71,5kg) \n");
    printf("------------------------------------------------------------------------------------------------------- \n");
    do {
    	printf("Digite seu peso: \n");
    scanf("%f", &peso);
    
    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    resultado_imc = peso / (altura * altura);
    
    printf("Seu IMC é de: %.2f \n", resultado_imc);

    printf("Digite 1 para continuar ou 2 para sair\n");
    scanf("%d", &finaliza_programa);
  
    } while (finaliza_programa==1);
    printf ("Programa finalizado! \n");
    printf ("Muito obrigado por utilizar o programa \n");
    
    return 0;
}
