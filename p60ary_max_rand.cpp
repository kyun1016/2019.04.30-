//#include <time.h>
//#include <stdio.h>
//#include <stdlib.h>
//
////const int a[]는 const int* a와 같다.
//int maxof(const int a[], int n) {
//	int i;
//	int max = a[0];
//	for (i = 1;i < n;i++) if (a[i] > max) max = a[i];
//	return max;
//}
//
//int minof(const int* a, int n) {
//	int i;
//	int min = a[0];
//	for (i = 1;i < n;i++) if (a[i] < min) min = a[i];
//	return min;
//}
//
//int sumof(const int a[], int n) {
//	int i;
//	int sum = a[0];
//	for (i = 1;i < n;i++) sum += a[i];
//	return sum;
//
//}
//
//double aveof(const int *a, int n) {
//	double b = sumof(a, n);
//	return b / n;
//}
//
//*
//int main() {
//	srand(time(NULL));
//	int i;
//	int *height;
//	int number;
//	number = 5 + rand() % 15;
//	printf("사람 수 : %d\n", number);
//	height = (int *)calloc(number, sizeof(int));	//c++에서는 new로 동적생성
//	for (i = 0; i < number;i++) {
//		height[i] = 100 + rand() % 90;
//		printf("height[%d] : %d\n", i,height[i]);
//	}
//	printf("최댓값은 %d입니다.\n", maxof(height, number));
//	printf("최솟값은 %d입니다.\n", minof(height, number));
//	printf("키의 합계값은 %d입니다.\n", sumof(height, number));
//	printf("키의 평균값은 %.2f입니다.\n", aveof(height, number));
//	free(height);									//c++에서는 delete로 해제
//
//	return 0;
//}