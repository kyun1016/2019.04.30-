//#include<stdio.h>
//#include<stdlib.h>
//
//int bin_search2(const int a[], int n, int key) {
//	int pl = 0;
//	int pr = n - 1;
//	do {
//		int pc = (pl + pr) / 2;
//		if (a[pc] == key) {
//			while (pc>pl&&a[pc-1] == key) {
//				pc--;
//			}
//			
//			return pc;
//		}
//			
//		else if (a[pc] < key)
//			pl = pc + 1;
//		else
//			pr = pc + 1;
//
//
//	} while (pl <= pr);
//
//	return -1;
//}
//
//int main() {
//	int * a;
//	int n,i,key,sol;
//	printf("�迭�� ���̴� : ");scanf("%d", &n);
//
//	a = (int *)calloc(n, sizeof(n));
//	for (i = 0;i < n;i++) {
//		printf("a[%d] : ", i);scanf("%d", &a[i]);
//	}
//	printf("ã�� �� : ");scanf("%d", &key);
//	sol = bin_search2(a, n, key);
//	printf("ã�� ���� %d�� �ֽ��ϴ�.\n", sol);
//	
//	return 0;
//}