//#include<iostream>
//#include<algorithm>
//
//#include<time.h>
//#include <stdlib.h>
//#include <stdio.h>
//
//void ary_copy(int *a, const int *b, const int n) {
//	for (int i = 0;i < n;i++) {
//		*a = *b;
//		++a; ++b;
//	}
//}
//
//void ary_rcopy(int *a, const int *b, const int n) {
//	b += n;
//	for (int i = 0;i < n;i++) {
//		--b;
//		*a = *b;
//		++a;
//	}
//}
//
//void shuffle(int *a, int n) {
//	srand(time(NULL));
//	int temp;
//	int rn;
//	for (int i = 0;i < n;i++) {
//		rn = rand() % (n - i) + i;
//		temp = a[i];
//		a[i] = a[rn];
//		a[rn] = temp;
//	}
//}
//
//
//int main() {
//	int *a, *b, i, n;
//	a = (int *)calloc(1, sizeof(int));
//	b = (int *)calloc(1, sizeof(int));
//
//	printf("배열의 길이는 : ");scanf("%d", &n);
//	for (i = 0;i < n;i++) {
//		printf("b[%d]는 : ", i);scanf("%d", &b[i]);
//	}
//
//	ary_copy(a, b, n);
//
//	for (i = 0;i < n;i++) {
//		printf("a[%d]는 : %d\n", i, a[i]);
//	}
//	for (i = 0;i < n;i++) {
//		printf("b[%d]는 : %d\n", i, b[i]);
//	}
//	ary_rcopy(a, b, n);
//
//	for (i = 0;i < n;i++) {
//		printf("a[%d]는 : %d\n", i, a[i]);
//	}
//	for (i = 0;i < n;i++) {
//		printf("b[%d]는 : %d\n", i, b[i]);
//	}
//
//	shuffle(a, n);
//
//	for (i = 0;i < n;i++) {
//		printf("a[%d]는 : %d\n", i, a[i]);
//	}
//	for (i = 0;i < n;i++) {
//		printf("b[%d]는 : %d\n", i, b[i]);
//	}
//
//	free(a);
//	free(b);
//
//	return 0;
//}
//
//
//
//
////C++ style
//
////int main() {
////	int i, n;
////	std::cout << "배열의 길이는 : ";
////	std::cin >> n;
////	int *a = new int[n];
////	int *b = new int[n];
////
////	for (i = 0;i < n;i++) {
////		std::cout << "b[" << i << "]를 입력해주세요 : ";
////		std::cin >> b[i];
////	}
////	std::copy(b, b + n, a);
////	for (i = 0;i < n;i++) {
////		std::cout << a[i] << std::endl;
////	}
////
////}