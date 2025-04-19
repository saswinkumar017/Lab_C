#include <stdio.h>

// Function prototype
void quicksort(int [], int, int);

int main() {
    int list[50];
    int size, i;

    // Input: number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    // Input: elements to sort
    printf("Enter the elements to be sorted:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &list[i]);
    }

    // Call Quick Sort
    quicksort(list, 0, size - 1);

    // Output: sorted list
    printf("After applying quick sort:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    return 0;
}

// Quick Sort function
void quicksort(int list[], int low, int high) {
    int pivot, i, j, temp;

    if (low < high) {
        pivot = low;  // Choose the first element as pivot
        i = low;
        j = high;

        while (i < j) {
            // Move i to the right as long as elements are <= pivot
            while (i <= high && list[i] <= list[pivot])
                i++;

            // Move j to the left as long as elements are > pivot
            while (j >= low && list[j] > list[pivot])
                j--;

            // Swap if needed
            if (i < j) {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }

        // Swap pivot with element at j
        temp = list[pivot];
        list[pivot] = list[j];
        list[j] = temp;

        // Recursive calls for sub-arrays
        quicksort(list, low, j - 1);
        quicksort(list, j + 1, high);
    }
}
