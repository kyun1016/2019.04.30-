//10분 소요

#include <stdio.h>
#include <stdlib.h>

//int int_cmp(const int *a, const int *b) {
//	if (*a < *b)
//		return -1;
//	else if (*a > *b)
//		return 1;
//	else
//		return 0;
//
//	//위는 *a<*b? -1: *a>*b? 1: 0;로 축약시킬 수 있다.
//}
//
//int main() {
//	int i, nx, ky;
//	int *x;
//	int *p;
//	puts("bsearch 함수를 사용하여 검색");
//	printf("요소 개수 : ");scanf("%d", &nx);
//	x = (int *)calloc(nx, sizeof(int));
//
//	printf("오름차순으로 입력하세요.\n");
//	printf("x[0] : ");scanf("%d", &x[0]);
//	for (i = 1;i < nx;i++) {
//		do {
//			printf("x[%d] : ", i);scanf("%d", &x[i]);
//		} while (x[i - 1] > x[i]);
//	}
//	printf("검색값 : ");scanf("%d", &ky);
//	p = (int *)bsearch(&ky, x, nx, sizeof(int), (int(*)(const void*, const void *)) int_cmp);
//	if (p == NULL)
//		puts("검색에 실패했습니다.");
//	else
//		printf("%d는 x[%d]에 있습니다.\n", ky, (int)(p - x));
//	free(x);
//	
//	return 0;
//}