//#include<stdio.h>
//#include "p142head.h"
//
//int main() {
//	IntStack s;
//	if (Initialize(&s, 64) == -1) {
//		puts("스택 생성에 실패하였습니다.");
//		return 1;
//	}
//	
//
//	while (1) {
//		int menu, x,i;
//		printf("\n현재 데이터 수 : %d / %d\n", SizeAll(&s), Capacity(&s));
//		printf("(1)푸시 (2)팝 (3)피크 (4)출력 (0)종료 : "); scanf("%d", &menu);
//		if (menu == 0) break;
//
//		
//
//
//		switch (menu) {
//		case 1:
//			printf("스택을 선택해주세요.\n(1)스택A (2)스택B : ");scanf("%d", &i);
//			printf("데이터 : ");scanf("%d", &x);
//			if (Push(&s, x,i) == -1)
//				puts("\a오류 : 푸시에 실패하였습니다.");
//			break;
//
//		case 2:
//			printf("스택을 선택해주세요.\n(1)스택A (2)스택B : ");scanf("%d", &i);
//			if (Pop(&s, &x,i) == -1)
//				puts("\a오류 : 팝에 실패하였습니다.");
//			else
//				printf("팝 데이터는 %d입니다.\n", x);
//			break;
//
//		case 3:
//			printf("출력할 스택을 선택해주세요.\n(1)스택A (2)스택B : ");scanf("%d", &i);
//			if (Peek(&s, &x,i) == -1)
//				puts("\a오류 : 피크에 실패하였습니다.");
//			else
//				printf("피크 데이터는 %d입니다.\n", x);
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