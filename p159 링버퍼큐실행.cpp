//#include<stdio.h>
//#include "p159 링버퍼큐.h"
//
//int main() {
//	IntQueue q;
//	if (Initialize(&q, 64) == -1) {
//		puts("큐 형성에 실패하였습니다.");
//		return 1;
//	}
//
//	while (1) {
//		int menu, x;
//		printf("\n현재 데이터 수 : %d / %d\n", Size(&q), Capacity(&q));
//		printf("(1)인큐 (2)디큐 (3)피크 (4) 출력 (0)종료 : "); scanf("%d", &menu);
//
//		if (menu == 0) break;
//		switch (menu)
//		{
//		case 1:
//			printf("데이터 : "); scanf("%d", &x);
//			if (Enque(&q, x) == -1)
//				puts("\a오류 : 인큐에 실패하였습니다.");
//			break;
//
//		case 2:
//			if (Deque(&q, &x) == -1)
//				puts("\a오류 : 디큐에 실패하였습니다.");
//			else
//				printf("디큐 데이터는 %d입니다.\n", x);
//			break;
//		case 3:
//			if (Peek(&q, &x) == -1)
//				puts("\a오류 : 피크에 실패하였습니다.");
//			else
//				printf("피크 데이터는 %d입니다.\n", x);
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