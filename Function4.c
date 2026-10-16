#include <stdio.h>

void readArray(int arr[], int size) {
    printf("Input %d elements in the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int size) {
    printf("The elements of the array are: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &size);
    int arr[size];

    readArray(arr, size);
    displayArray(arr, size);
    return 0;
}
