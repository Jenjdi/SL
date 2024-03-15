#define _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>
//
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        float arr[2000];
//        int count = 0;
//        float sum = 0;
//        float temp = n;
//        for (int i = 0; i < n; i++) {
//            scanf("%f", &arr[i]);
//        }
//
//        for (int i = 0; i < n; i++) {
//            if (arr[i] < 0) {
//                count++;
//            }
//            if (arr[i] == 0) {
//                temp--;
//            }
//            sum += arr[i];
//        }
//
//        float ave = sum / temp;
//
//        if (count == n || sum == 0) {
//            ave = 0;
//        }
//        printf("%d %.1f", count, ave);
//
//    }
//    return 0;
//}
//int* cmp(const void* num1, const void* num2) {
//	return *(int*)num1 - *(int*)num2;
//}
//int* qsort1(void* base, size_t num, size_t size,int *cmp(const void* num1, const void* num2)) {
//	
//	for (int i = 0; i < num; i++) {
//		
//	}
//}
//int main() {
//
//}