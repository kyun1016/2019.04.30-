//#include <time.h>
//#include <stdio.h>
//#include <stdlib.h>
//
////const int a[]�� const int* a�� ����.
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
//	printf("��� �� : %d\n", number);
//	height = (int *)calloc(number, sizeof(int));	//c++������ new�� ��������
//	for (i = 0; i < number;i++) {
//		height[i] = 100 + rand() % 90;
//		printf("height[%d] : %d\n", i,height[i]);
//	}
//	printf("�ִ��� %d�Դϴ�.\n", maxof(height, number));
//	printf("�ּڰ��� %d�Դϴ�.\n", minof(height, number));
//	printf("Ű�� �հ谪�� %d�Դϴ�.\n", sumof(height, number));
//	printf("Ű�� ��հ��� %.2f�Դϴ�.\n", aveof(height, number));
//	free(height);									//c++������ delete�� ����
//
//	return 0;
//}