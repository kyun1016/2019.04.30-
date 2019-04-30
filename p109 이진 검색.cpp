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
//	} while (pl <= pr);		//�����Ͱ� ���������� �˻��� ���� �ʾҴ�. �� �˻� ����!
//	return -1;
//}
//
//int main() {
//	int i, nx, ky, idx, retry;
//	int *x;
//	puts( "���� �˻�" );
//	printf("��� ���� : "); scanf("%d", &nx);
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
//		printf("�˻��� : "); scanf("%d", &ky);
//		idx = bin_search(x, nx, ky);
//		if (idx == -1)
//			printf("�˻��� �����Ͽ����ϴ�.\n");
//		else
//			printf("%d�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);
//		printf("�ٽ� �ұ��?(1 �� ��/0 �� �ƴϿ�) : "); scanf("%d", &retry);
//	} while (retry == 1);
//	free(x);
//	return 0;
//}