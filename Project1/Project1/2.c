#define _CRT_SECURE_NO_WARNINGS 0
#include<stdlib.h>
#include <stdio.h>
#include<Windows.h>
int main() {
    int* a = NULL;
    int *arr[50] = { 0 };
    while (1) {
        for (int i = 0; i < 50; i++) {
            a = (int*)malloc(10000000000);
            arr[i] = a;
            if (a == NULL) {
                perror("malloc");
                for (int j = 0; j < i; j++) {
                    if(arr[j]!=NULL){
                        free(arr[j]);
                        arr[j] = NULL;
                    }
                    else {
                        continue;
                    }
                }
            }
            printf("%d ", i);
            
        }
    }
}