//
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
//
//	free(a);
//	free(b);
//
//	return 0;
//}