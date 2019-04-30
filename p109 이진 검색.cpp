//#include <stdio.h>
//#include <stdlib.h>
//#include <algorithm>
//
//int bin_search(const int *a, int n, int key) {
//	int pl=0;
//	int pr = n - 1;
//	int pc;
//	do {
//		pc = (pl + pr) / 2;
//		if (a[pc] == key)
//			return pc;
//		else if (a[pc] < key)
//			pl = pc + 1;
//		else
//			pr = pc - 1;
//	} while (pl <= pr);		//포인터가 만날때까지 검색이 되질 않았다. 즉 검색 실패!
//	return -1;
//}
//
//int main() {
//	int i, nx, ky, idx, retry;
//	int *x;
//	puts( "이진 검색" );
//	printf("요소 개수 : "); scanf("%d", &nx);
//	x = (int *)calloc(nx, sizeof(int));
//	for (i = 0;i < nx;i++) {
//		printf("x[%d] : ", i); scanf("%d", &x[i]);
//	}
//	std::sort(x, x + nx);
//	for (i = 0;i < nx;i++) {
//		printf("x[%d] : %d\n", i,x[i]);
//	}
//
//	do {
//		printf("검색값 : "); scanf("%d", &ky);
//		idx = bin_search(x, nx, ky);
//		if (idx == -1)
//			printf("검색에 실패하였습니다.\n");
//		else
//			printf("%d는 x[%d]에 있습니다.\n", ky, idx);
//		printf("다시 할까요?(1 … 예/0 … 아니오) : "); scanf("%d", &retry);
//	} while (retry == 1);
//	free(x);
//	return 0;
//}