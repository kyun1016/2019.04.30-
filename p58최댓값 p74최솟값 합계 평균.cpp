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
//	printf("��� �� : "); scanf("%d", &number);
//	height = (int *)calloc(number, sizeof(int));	//c++�� calloc ��� new int
//	printf("%d ����� Ű�� �Է��ϼ���.\n", number);
//	for (i = 0; i < number;i++) {
//		printf("height[%d] : ", i);scanf("%d", &height[i]);
//	}
//	printf("�ִ��� %d�Դϴ�.\n", maxof(height, number));
//	printf("�ּڰ��� %d�Դϴ�.\n", minof(height, number));
//	free(height);
//
//	return 0;
//}