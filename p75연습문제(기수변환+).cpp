//#include <stdio.h>
//
//int convert_notation(unsigned before, int notation, char after[]) {
//	char seed[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	int digits = 0;
//	if (before == 0) {
//		after[digits++] = seed[0];
//		printf("%d|\t%d ... %d\n", notation, before, after[0]);
//		printf(" +--------\n");
//	}
//	else
//		while (before) {
//			after[digits++] = seed[before%notation];
//			printf("%d|\t%d ... %d\n", notation, before, before%notation);
//			before /= notation;
//			printf(" +--------\n");
//		}
//	printf("\t 0\n");
//	return digits;
//}
//
//
//
//
//
//
//
//int main() {
//	int input,after_size,retry,i;
//	unsigned notation;
//	char after[512];
//	printf("10������ ��� ��ȯ�մϴ�.\n");
//	do {
//		printf("��ȯ�ϴ� ���� �ƴ� ���� : ");scanf("%u", &input);
//			do {
//				printf("� ������ ��ȯ�ұ��?(2-36) : ");scanf("%d", &notation);
//			} while (notation < 2 || notation>36);
//			after_size = convert_notation(input, notation, after);
//			printf("%d�����δ� '", notation);
//			for (i = after_size - 1;i >= 0;i--)
//			printf("%c", after[i]);
//			printf("'�Դϴ�.\n");
//			printf("�� �� �� �ұ��?(1 --- ��/ 0 --- �ƴϿ�) : ");scanf("%d", &retry);
//		} while (retry == 1);
//
//
//
//
//
//
//}