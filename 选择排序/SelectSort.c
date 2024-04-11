#include<stdio.h>
void swap(int* arr1, int* arr2) {
	int tmp = *arr1;
	*arr1 = *arr2;
	*arr2 = tmp;
}
void SelectSort(int* arr, int n) {
	int begin = 0, end = n - 1;
	while (begin < end) {
		int min = begin;
		int max = begin;
		for (int i = begin+1; i <= end; i++) {
			if (arr[i] < arr[min]) {
				min = i;
			}
			if (arr[i] > arr[max]) {
				max = i;
			}
		}
		swap(&arr[begin], &arr[min]);
		if (max == begin) {
			max = min;
		}
		swap(&arr[end], &arr[max]);
		begin++;
		end--;
	}
}
int main() {
	int arr[] = { 999,156,231,561,94,95,23,654,98,15 };
	SelectSort(&arr, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
}