#include <stdio.h>
#include <locale.h>
int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    float idade;
    
    printf("Digite sua idade: \n");
    
    scanf("%f", &idade);
    
    if (idade>=18)
    
    {
    
    printf("Voc� j� pode tirar sua carteira de habilita��o voc� � maior de 18 anos");
    
    }
    
    return 0;
    
}