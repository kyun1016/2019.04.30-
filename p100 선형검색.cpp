//#include<stdio.h>
//#include<stdlib.h>
//
//int search(const int a[], int n, int key) {
//	int i = 0;
//	for(i=0;i<n;i++)
//		if (a[i] == key) 
//			return i;
//	return -1;
//}
//
//int main(void) {
//	int i, nx, ky, idx,retry;
//	int *x;
//	puts("선형 검색");
//	printf("요소 개수 : ");
//	scanf("%d", &nx);
//	x = (int *)calloc(nx, sizeof(int));
//	for (i = 0;i < nx;i++) {
//		printf("x[%d] : ", i); scanf("%d", &x[i]);
//	}
//	do {
//		printf("검색값 : ");scanf("%d", &ky);
//		idx = search(x, nx, ky);
//		if (idx == -1)
//			puts("검색에 실패했습니다.");
//		else
//			printf("%d는 x[%d]에 있습니다.", ky, idx);
//		printf("다시 할까요?(1 … 예/0 … 아니오) : "); scanf("%d", &retry);
//	} while (retry == 1);
//
//	free(x);
//	return 0;	
//}