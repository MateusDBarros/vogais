#include <stdio.h>
#include <string.h>

int vogais(char *string);
int main(void)
{
    char frase1[] = "boa noite";
    char frase2[] = "hello, world!";
    char frase3[] = "paralelepipedo";

    int totalVogais1 = vogais(frase1); //Passa o resultado da função pra outra variavel
    int totalVogais2 = vogais(frase2);
    int totalVogais3 = vogais(frase3);

    printf("A palavra '%s', tem %d vogais.\n", frase1, totalVogais1);
    printf("\n");
    printf("A palavra '%s', tem %d vogais.\n", frase2, totalVogais2);
    printf("\n");
    printf("A palavra '%s', tem %d vogais.\n", frase3, totalVogais3);
    printf("\n");
}

int vogais(char *string)
{
    int size = strlen(string);//Pega o tamanho da palavra
    int count = 0;//Cria uma variavel dentro da função para contar a quantidade de vogais

    for (int i = 0; i < size; i++) //loop para checar cada letra
    {
        //Switch para verificar se a letra é ou não uma vogal
        switch (string[i])
        {
        case 'a':
            count++;
            break;
        
        case 'e':
            count++;
            break;
        
        case 'i':
            count++;
            break;
        
        case 'o':
            count++;
            break;
        
        case 'u':
            count++;
            break;
        
        default:
            break;
        }
    }
    return count; // Retorna a quantidade de vogais
}