//#include<stdio.h>
//#include "p144ť.h"
//
//int main() {
//	ArrayIntQueue q;
//	if (Initialize(&q, 64) == -1) {
//		puts("ť ������ �����Ͽ����ϴ�.");
//		return 1;
//	}
//
//	while (1) {
//		int menu, x;
//		printf("\n���� ������ �� : %d / %d\n", Size(&q), Capacity(&q));
//		printf("(1)��ť (2)��ť (0)���� : "); scanf("%d", &menu);
//
//		if (menu == 0) break;
//		switch (menu)
//		{
//		case 1:
//			printf("������ : "); scanf("%d", &x);
//			if (InQueue(&q, x) == -1)
//				puts("\a���� : ��ť�� �����Ͽ����ϴ�.");
//			break;
//
//		case 2:
//			if (DeQueue(&q, &x) == -1)
//				puts("\a���� : ��ť�� �����Ͽ����ϴ�.");
//			else
//				printf("��ť �����ʹ� %d�Դϴ�.\n", x);
//			break;
//		}
//	}
//	Terminate(&q);
//	return 0;
//
//}