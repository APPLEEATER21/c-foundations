#include <stdio.h>

int getLargest(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Input %d elements in the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The largest element in the array is: %d\n", getLargest(arr, size));
    return 0;
}2
