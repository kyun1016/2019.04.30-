//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int i;
//	int* a;
//	int na;
//	printf("��� ���� : "); scanf("%d", &na);
//	a = (int *) calloc(na, sizeof(int));
//	
//	if (a == NULL) {
//		puts("�޸� �Ҵ翡 �����߽��ϴ�.");
//	}
//	else {
//		printf("%d���� ������ �Է��ϼ���.\n", na);
//		for (i = 0;i < na;i++) {
//			printf("a[%d] : ",i); scanf("%d", &a[i]);
//		}
//		printf("�� ��ڰ��� �Ʒ��� �����ϴ�.\n");
//		for (i = 0;i < na;i++) {
//			printf("a[%d] = %d\n", i,a[i]);
//		}
//		free(a);
//	}
//	printf("%d", a[0]);
//	
//	//c++�� �����Ҵ�
//	int* y = new int[na];
//	
//	if (y == NULL) {
//		puts("�޸� �Ҵ翡 �����߽��ϴ�.");
//	}
//	else {
//		printf("%d���� ������ �Է��ϼ���.\n", na);
//		for (i = 0;i < na;i++) {
//			printf("y[%d] : ", i); scanf("%d", &y[i]);
//		}
//		printf("�� ��ڰ��� �Ʒ��� �����ϴ�.\n");
//		for (i = 0;i < na;i++) {
//			printf("y[%d] = %d\n", i, y[i]);
//		}
//		delete[] y;
//	}
//	printf("%d", y[0]);
//
//	return 0;
//}
