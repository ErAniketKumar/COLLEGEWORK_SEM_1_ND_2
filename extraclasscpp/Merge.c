#include <stdio.h>

void merge(int *a, int s, int m, int e) {
    int sLeft = m - s + 1, sRight = e - m;
    int leftArray[sLeft], rightArray[sRight];
    for (int i = 0; i < sLeft; i++) {
        leftArray[i] = a[s + i];
    }
    for (int i = 0; i < sRight; i++) {
        rightArray[i] = a[m + 1 + i];
    }
    int i, j, k;
    for (int i = 0, j = 0, k = s; k <= e; k++) {
        if (i < sLeft && j >= sRight || leftArray[i] <= rightArray[j]) {
            a[k] = leftArray[i++];
        } else {
            a[k] = rightArray[j++];
        }
    }
}

void mergeSort(int *a, int s, int e) {
    if (s < e) {
        int m = (s + e - 1) / 2;
        mergeSort(a, s, m);
        mergeSort(a, m + 1, e);
        merge(a, s, m, e);
    }
}

int main() {
    int a[] = {1, 2, 4, 5, 7, 0, 9};
    mergeSort(a, 0, 6);
    for (int i = 0; i < 7; i++)
        printf("%d ", a[i]);
}