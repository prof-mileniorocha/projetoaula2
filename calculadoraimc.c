#include <stdio.h>

int main() {
    
    float peso, altura;
    float resultado_imc;
    char nome[50];
    
    printf("Digite seu nome: \n");
    scanf("%s", nome);
    
    printf("Orientações: O peso e a altura deve ser digitado com o . ao inves da vígula, por exemplo 1.8 (Quando a pessoa tem 1 metro e 80 centímetos) | 71.50 (Quando a pessoa pesa 71,5kg) \n");    
    printf("%s digite seu peso: \n", nome);
    scanf("%f", &peso);
    
    printf("%s digite sua altura: \n", nome);
    scanf("%f", &altura);

    resultado_imc = peso / (altura * altura);
    
    printf("Resultado IMC: %.2f \n", resultado_imc);
    printf("%s ", nome);
    if(resultado_imc < 18.5){
        printf("você está abaixo do peso normal! \n");
    } else if(resultado_imc >= 18.5 && resultado_imc <= 24.9){
        printf("Você está no peso normal! \n");
    } else if(resultado_imc >= 25 && resultado_imc <= 29.9){
        printf("Vocês está levemente acima do peso! \n");
    } else if(resultado_imc >= 30 && resultado_imc <= 34.9){
        printf("Vocês está com obesidade grau I! \n");
    } else if(resultado_imc >= 35 && resultado_imc <= 39.9){
        printf("Vocês está com obesidade grau II! \n");
    } else {
        printf("Você está com obesidade grau III (CUIDADO)! \n");
    }

    return 0;
}
