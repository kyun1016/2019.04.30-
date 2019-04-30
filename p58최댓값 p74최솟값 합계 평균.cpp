//#include <stdio.h>
//#include <stdlib.h>
//
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
//
//int main() {
//	int i;
//	int *height;
//	int number;
//	printf("사람 수 : "); scanf("%d", &number);
//	height = (int *)calloc(number, sizeof(int));	//c++은 calloc 대신 new int
//	printf("%d 사람의 키를 입력하세요.\n", number);
//	for (i = 0; i < number;i++) {
//		printf("height[%d] : ", i);scanf("%d", &height[i]);
//	}
//	printf("최댓값은 %d입니다.\n", maxof(height, number));
//	printf("최솟값은 %d입니다.\n", minof(height, number));
//	free(height);
//
//	return 0;
//}