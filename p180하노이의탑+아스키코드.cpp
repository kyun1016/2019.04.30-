//#include <cstdio>
//
//void move(int no, int x, int y, int &count) {
//	if (no > 1)
//		move(no - 1, x, 6 - x - y,count);
//	printf("%dȸ : ����[%d]��(��) %c ��տ��� %c ������� �ű�.\n", count++, no, x+96 ,y+96);
//	if (no > 1)
//		move(no - 1, 6 - x - y, y,count);
//}
//
//int main() {
//	int n, count = 1;
//	printf("�ϳ����� ž\n������ ���� : "); scanf("%d", &n);
//	move(n, 1, 3,count);
//
//	printf("�� %dȸ ������ ���������ϴ�.\n", --count);
//	return 0;
//}
