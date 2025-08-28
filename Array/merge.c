#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter sorted elements for arr1: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter sorted elements for arr2: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int mer[n1 + n2];
    int i = 0, j = 0, k = 0;

   
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            mer[k++] = arr1[i++];
        } else {
            mer[k++] = arr2[j++];
        }
    }

    while (i < n1) {
        mer[k++] = arr1[i++];
    }
    while (j < n2) {
        mer[k++] = arr2[j++];
    }

    printf("Merged sorted array :\n");
    for (int l = 0; l < n1 + n2; l++) {
        printf("%d ", mer[l]);
    }
    printf("\n");

    return 0;
}