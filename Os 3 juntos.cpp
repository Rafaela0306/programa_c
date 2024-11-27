#include <stdio.h>

// Função para o Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Função para o Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move os elementos que são maiores que a chave para uma posição à frente
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Função para o Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        
        // Laço para encontrar o menor elemento na parte não ordenada
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Troca os elementos
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Função para imprimir o vetor
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Exemplo de vetor para o Bubble Sort
    int arr1[] = {7, 5, 10, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    // Exibindo o vetor antes da ordenação (Bubble Sort)
    printf("Bubble Sort:\n");
    printf("Array antes da ordenação:\n");
    printArray(arr1, n1);
    bubbleSort(arr1, n1);
    printf("Array depois da ordenação:\n");
    printArray(arr1, n1);
    printf("\n");

    // Exemplo de vetor para o Insertion Sort
    int arr2[] = {3, 0, 1, 8, 7, 2, 5, 4, 9, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Exibindo o vetor antes da ordenação (Insertion Sort)
    printf("Insertion Sort:\n");
    printf("Array antes da ordenacao:\n");
    printArray(arr2, n2);
    insertionSort(arr2, n2);
    printf("Array depois da ordenacao:\n");
    printArray(arr2, n2);
    printf("\n");

    // Exemplo de vetor para o Selection Sort
    int arr3[] = {7, 5, 1, 8, 3};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    // Exibindo o vetor antes da ordenação (Selection Sort)
    printf("Selection Sort:\n");
    printf("Array antes da ordenacao:\n");
    printArray(arr3, n3);
    selectionSort(arr3, n3);
    printf("Array depois da ordenacao:\n");
    printArray(arr3, n3);

    return 0;
}

