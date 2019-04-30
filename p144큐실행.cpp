//#include<stdio.h>
//#include "p144큐.h"
//
//int main() {
//	ArrayIntQueue q;
//	if (Initialize(&q, 64) == -1) {
//		puts("큐 형성에 실패하였습니다.");
//		return 1;
//	}
//
//	while (1) {
//		int menu, x;
//		printf("\n현재 데이터 수 : %d / %d\n", Size(&q), Capacity(&q));
//		printf("(1)인큐 (2)디큐 (0)종료 : "); scanf("%d", &menu);
//
//		if (menu == 0) break;
//		switch (menu)
//		{
//		case 1:
//			printf("데이터 : "); scanf("%d", &x);
//			if (InQueue(&q, x) == -1)
//				puts("\a오류 : 인큐에 실패하였습니다.");
//			break;
//
//		case 2:
//			if (DeQueue(&q, &x) == -1)
//				puts("\a오류 : 디큐에 실패하였습니다.");
//			else
//				printf("디큐 데이터는 %d입니다.\n", x);
//			break;
//		}
//	}
//	Terminate(&q);
//	return 0;
//
//}