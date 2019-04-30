//#include <cstdio>
//
//void move(int no, int x, int y, int &count) {
//	if (no > 1)
//		move(no - 1, x, 6 - x - y,count);
//	printf("%d회 : 원반[%d]를(을) %c 기둥에서 %c 기둥으로 옮김.\n", count++, no, x+96 ,y+96);
//	if (no > 1)
//		move(no - 1, 6 - x - y, y,count);
//}
//
//int main() {
//	int n, count = 1;
//	printf("하노이의 탑\n원반의 개수 : "); scanf("%d", &n);
//	move(n, 1, 3,count);
//
//	printf("총 %d회 원판을 움직였습니다.\n", --count);
//	return 0;
//}
