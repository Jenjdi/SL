#include<stdio.h>
void Swap(int* arr1, int* arr2) {
	int temp = *arr1;
	*arr1 = *arr2;
	*arr2 = temp;
}
void QuickSort(int* arr, int begin, int end) {
	if (begin >= end) {
		return;
	}
	int left = begin;
	int right = end;
	int key = begin;
	while (left < right) {
		while (left<right && arr[right]>=arr[key]) {
			right--;
		}
		while(left<right && arr[left]<=arr[key]) {
			left++;
		}
		Swap(&arr[left], &arr[right]);
	}
	Swap(&arr[left], &arr[key]);
	key = left;
	QuickSort(arr, begin, key - 1);
	QuickSort(arr, key + 1, end);
}
int Sort2(int* arr, int begin, int end) {
	int hole = begin;
	int key = arr[begin];
	while (begin < end) {
		
		while (begin < end&&arr[end] > key) {
			
			end--;
		}
		arr[hole] = arr[end];
		hole = end;
		while (begin<end && arr[begin]<key) {
			
			begin++;
		}
		arr[hole] = arr[begin];
		hole = begin;
	}
	arr[hole] = key;
	return hole;
}
void Qsort(int* arr, int begin, int end) {
	if (begin >= end) {
		return;
	}
	int key = Sort3(arr, begin, end);
	Qsort(arr, begin, key - 1);
	Qsort(arr, key + 1, end);
}
int Sort3(int* arr, int begin, int end) {
	int prev=begin;
	int key = begin;
	int cur = prev + 1;
	while (cur < end) {
		if (arr[cur] < arr[key]) {
			prev++;
			Swap(&arr[prev], &arr[cur]);
			cur++;
		}
		else {
			cur++;
		}

	}
	Swap(&arr[prev], &arr[key]);
	key = prev;
	return prev;
}
void print(int* arr,int n) {
	for (int i = 0; i < n; i++) {
		print("%d", arr[i]);
	}
	return;
}
int main() {
	int arr[] = { 121,64,5,654,845,45,65,45,213 };
	Qsort(&arr, 0, 9);
	for (int i = 0; i < 9; i++) {
		printf("%d ", arr[i]);
	}
}