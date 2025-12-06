#include <stdio.h>
#include <stdlib.h>

void quick(int a[], int low, int high) {
    if (low < high) {
        int pivot = a[high], i = low - 1, j, temp;
        for (j = low; j < high; j++)
            if (a[j] < pivot) {
                temp = a[++i]; a[i] = a[j]; a[j] = temp;
            }
        temp = a[i+1]; a[i+1] = a[high]; a[high] = temp;
        int pi = i + 1;

        quick(a, low, pi - 1);
        quick(a, pi + 1, high);
    }
}

int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    quick(a, 0, n - 1);

    printf("Sorted: ");
    for(i = 0; i < n; i++) printf("%d ", a[i]);
    
    free(a);
}

