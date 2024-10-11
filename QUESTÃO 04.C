#include <stdio.h>

void selectionSort(float notas[], int n) {
    
    for (int i = 0; i < n - 1; i++) {
        int indiceMaior = i;
        
        for (int j = i + 1; j < n; j++) {
            if (notas[j] > notas[indiceMaior]) {
                indiceMaior = j;
            }
        }
        
        if (indiceMaior != i) {
            float temp = notas[i];
            notas[i] = notas[indiceMaior];
            notas[indiceMaior] = temp;
        }
    }
}

int main()
{
    int n;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);
    
    float notas[n];
    printf("Digite as notas dos alunos:\n" );
    for (int i = 0; i < n; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    
    selectionSort(notas, n);
    
    printf("\nNotas em ordem decrescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", notas[i]);
    }
    printf("\n");
    


    return 0;
}
