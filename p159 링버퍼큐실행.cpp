//#include<stdio.h>
//#include "p159 ������ť.h"
//
//int main() {
//	IntQueue q;
//	if (Initialize(&q, 64) == -1) {
//		puts("ť ������ �����Ͽ����ϴ�.");
//		return 1;
//	}
//
//	while (1) {
//		int menu, x;
//		printf("\n���� ������ �� : %d / %d\n", Size(&q), Capacity(&q));
//		printf("(1)��ť (2)��ť (3)��ũ (4) ��� (0)���� : "); scanf("%d", &menu);
//
//		if (menu == 0) break;
//		switch (menu)
//		{
//		case 1:
//			printf("������ : "); scanf("%d", &x);
//			if (Enque(&q, x) == -1)
//				puts("\a���� : ��ť�� �����Ͽ����ϴ�.");
//			break;
//
//		case 2:
//			if (Deque(&q, &x) == -1)
//				puts("\a���� : ��ť�� �����Ͽ����ϴ�.");
//			else
//				printf("��ť �����ʹ� %d�Դϴ�.\n", x);
//			break;
//		case 3:
//			if (Peek(&q, &x) == -1)
//				puts("\a���� : ��ũ�� �����Ͽ����ϴ�.");
//			else
//				printf("��ũ �����ʹ� %d�Դϴ�.\n", x);
//			break;
//		case 4:
//			Print(&q);
//			break;
//		}
//	}
//	Terminate(&q);
//	return 0;
//
//}