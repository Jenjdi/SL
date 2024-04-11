#include<stdio.h>
#include<stdlib.h>
void InsertSort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int end = i;
        int tmp = arr[end + 1];
        while (end >= 0) {
            if (tmp < arr[end]) {
                arr[end + 1] = arr[end];
                end--;
            }
            else {
                break;
            }
            arr[end] = tmp;
        }
    }
}
void ShellSort(int* arr, int n) {
    int gap = n;
    while (gap > 1) {
        gap = gap / 3 + 1;

        for (int i = 0; i < n - gap; i++) {
            int end = i;
            int tmp = arr[end + gap];
            while (end >= 0) {
                if (tmp < arr[end]) {
                    arr[end + gap] = arr[end];
                    end = end - gap;
                }
                else {
                    break;
                }
            }
            arr[end + gap] = tmp;
        }
    }
}
int main()
{
    int arr[] = { 56,4,54,5456,589,696,95,451 };
    InsertSort(&arr, 8);
    for (int i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }
}