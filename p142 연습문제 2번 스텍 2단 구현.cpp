//#include<stdio.h>
//#include "p142head.h"
//
//int main() {
//	IntStack s;
//	if (Initialize(&s, 64) == -1) {
//		puts("���� ������ �����Ͽ����ϴ�.");
//		return 1;
//	}
//	
//
//	while (1) {
//		int menu, x,i;
//		printf("\n���� ������ �� : %d / %d\n", SizeAll(&s), Capacity(&s));
//		printf("(1)Ǫ�� (2)�� (3)��ũ (4)��� (0)���� : "); scanf("%d", &menu);
//		if (menu == 0) break;
//
//		
//
//
//		switch (menu) {
//		case 1:
//			printf("������ �������ּ���.\n(1)����A (2)����B : ");scanf("%d", &i);
//			printf("������ : ");scanf("%d", &x);
//			if (Push(&s, x,i) == -1)
//				puts("\a���� : Ǫ�ÿ� �����Ͽ����ϴ�.");
//			break;
//
//		case 2:
//			printf("������ �������ּ���.\n(1)����A (2)����B : ");scanf("%d", &i);
//			if (Pop(&s, &x,i) == -1)
//				puts("\a���� : �˿� �����Ͽ����ϴ�.");
//			else
//				printf("�� �����ʹ� %d�Դϴ�.\n", x);
//			break;
//
//		case 3:
//			printf("����� ������ �������ּ���.\n(1)����A (2)����B : ");scanf("%d", &i);
//			if (Peek(&s, &x,i) == -1)
//				puts("\a���� : ��ũ�� �����Ͽ����ϴ�.");
//			else
//				printf("��ũ �����ʹ� %d�Դϴ�.\n", x);
//			break;
//
//		case 4:
//			Print(&s);
//			break;
//		}
//	}
//	Terminate(&s);
//	return 0;
//}