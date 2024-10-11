#include <stdio.h>

int main()
{
    int numero;
    
    printf("Digite um numero inteiro positivo:");
    scanf("%d", &numero);
    
    if (numero <= 0) {
        printf("Insira um numero positivo");
        return 1;
    }

printf("Numeros pares entre 1 e %d:\n", numero);
for (int i = 1; i <= numero; i++) {
    if (i % 2 == 0) {
        printf("%d ", i);
    }
}

printf("\n");

    return 0;
}
