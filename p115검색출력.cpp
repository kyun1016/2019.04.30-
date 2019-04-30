////23분 소요
//
//
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int bin_search(const int a[], int n, int key) {
//	int pl = 0;
//	int pr = n - 1;
//	int i = 0;
//	do {
//		printf("\n  | ");
//		for (i = 0;i < pl;i++) {
//			printf("  ");
//		}
//		printf("<-");
//		
//		int pc = (pl + pr) / 2;
//		for (i = pl;i < pc;i++) {
//			printf("  ");
//		}
//		printf("+");
//		for (i = pc;i < pr;i++) {
//			printf("  ");
//		}
//		printf("->\n %d|  ", pc);
//		for (i = 0;i < n;i++) {
//			printf("%d  ", a[i]);
//		}
//		printf("\n  |");
//
//		if (a[pc] == key)
//			return pc;
//		else if (a[pc] < key)
//			pl = pc + 1;
//		else
//			pr = pc - 1;
//	} while (pl <= pr);
//	
//	return -1;
//}
//
//
//
//int main() {
//	int * a;
//	int n,i,key;
//	printf("배열의 길이 : "); scanf("%d", &n);
//	a = (int *)calloc(n, sizeof(int));
//	for (i = 0;i < n;i++) {
//		printf("a[%d] : ", i);scanf("%d", &a[i]);
//	}
//	printf("찾을 숫자는?");scanf("%d", &key);
//	printf("  |  ");
//	for (i = 0;i < n;i++) {
//		printf("%d  ", i);
//	}
//	printf("\n--+---------------------");
//	i = bin_search(a, n, key);
//
//	printf("%d는 x[%d]에 있습니다.\n", key, i);
//	free(a);
//
//	return 0;
//}