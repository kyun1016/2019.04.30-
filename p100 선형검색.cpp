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
//	puts("���� �˻�");
//	printf("��� ���� : ");
//	scanf("%d", &nx);
//	x = (int *)calloc(nx, sizeof(int));
//	for (i = 0;i < nx;i++) {
//		printf("x[%d] : ", i); scanf("%d", &x[i]);
//	}
//	do {
//		printf("�˻��� : ");scanf("%d", &ky);
//		idx = search(x, nx, ky);
//		if (idx == -1)
//			puts("�˻��� �����߽��ϴ�.");
//		else
//			printf("%d�� x[%d]�� �ֽ��ϴ�.", ky, idx);
//		printf("�ٽ� �ұ��?(1 �� ��/0 �� �ƴϿ�) : "); scanf("%d", &retry);
//	} while (retry == 1);
//
//	free(x);
//	return 0;	
//}