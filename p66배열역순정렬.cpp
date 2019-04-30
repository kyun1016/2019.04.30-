//c������ ����
//
//#include <stdio.h>
//#include <stdlib.h>
//
//#define swap(type,x,y) do{ type t = x; x=y; y=t;} while(0)
//
//void ary_reverse(int a[], int n) {
//	int i;
//	for (i = 0;i < n / 2;i++) swap(int, a[i], a[n - i - 1]);
//}
//
//int main() {
//	int i;
//	int *x;
//	int nx;
//
//	printf("��� ���� : ");scanf("%d", &nx);
//	x = (int*)calloc(nx, sizeof(int));
//	printf("%d���� ������ �Է��ϼ���.\n", nx);
//	for (i = 0;i < nx;i++) {
//		printf("x[%d] : ", i); scanf("%d", &x[i]);
//	}
//	ary_reverse(x, nx);
//	printf("�迭�� ��Ҹ� �������� �����߽��ϴ�.\n");
//	for (i = 0;i < nx;i++) {
//		printf("x[%d] = %d\n", i, x[i]);
//	}
//	free(x);
//
//	return 0;
//}



//c++ ������ ����
#include <iostream>
#include <algorithm>

//�˰��� �ȿ� �̷��� ������ ���ִ�.
//
//template <class T> void swap(T& a, T& b)
//{
//	T c(std::move(a)); a = std::move(b); b = std::move(c);
//}
//template <class T, size_t N> void swap(T(&a)[N], T(&b)[N])
//{
//	for (size_t i = 0; i<N; ++i) swap(a[i], b[i]);
//}

//void ary_reverse(int a[], int n) {
//	int i;
//	for (i = 0;i < n / 2;i++) std::swap(a[i], a[n - i - 1]);
//}
//
//int main() {
//	int i;
//	int* x = new int;
//	int nx;
//
//	printf("��� ���� : ");scanf("%d", &nx);
//	x = (int*)calloc(nx, sizeof(int));
//	printf("%d���� ������ �Է��ϼ���.\n", nx);
//	for (i = 0;i < nx;i++) {
//		printf("x[%d] : ", i); scanf("%d", &x[i]);
//	}
//	ary_reverse(x, nx);
//	printf("�迭�� ��Ҹ� �������� �����߽��ϴ�.\n");
//	for (i = 0;i < nx;i++) {
//		printf("x[%d] = %d\n", i, x[i]);
//	}
//	delete x;
//
//	return 0;
//}