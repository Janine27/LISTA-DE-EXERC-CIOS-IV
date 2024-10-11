#include <stdio.h>

void insertionSort(float precos[], int n) {
    for (int i = 1; i < n; i++) {
        float chave = precos[i];
        int j = i - 1;
        
        while (j >= 0 && precos[j] > chave) {
            precos[j + 1] = precos[j];
            j--;
        }
        
        precos[j + 1] = chave;
    }
}



int main()
{
    int n;
    
    printf("Digite a quantidade de produtos: ");
    scanf("%d", &n);
    
    float precos[n];
    
    printf("Digite os preços dos produtos:\n");
    for (int i = 0; i < n; i++) {
        printf("Preços dos produtos %d: ", i + 1);
        scanf("%f", &precos[i]);
        
    }
    
    insertionSort(precos, n);
    
    printf("\nPreços ordenados:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", precos[i]);
    }
    printf("\n");
    
    

    return 0;
}
