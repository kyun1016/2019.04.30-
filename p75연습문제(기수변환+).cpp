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
//	printf("10진수를 기수 변환합니다.\n");
//	do {
//		printf("변환하는 음이 아닌 정수 : ");scanf("%u", &input);
//			do {
//				printf("어떤 진수로 변환할까요?(2-36) : ");scanf("%d", &notation);
//			} while (notation < 2 || notation>36);
//			after_size = convert_notation(input, notation, after);
//			printf("%d진수로는 '", notation);
//			for (i = after_size - 1;i >= 0;i--)
//			printf("%c", after[i]);
//			printf("'입니다.\n");
//			printf("한 번 더 할까요?(1 --- 예/ 0 --- 아니오) : ");scanf("%d", &retry);
//		} while (retry == 1);
//
//
//
//
//
//
//}