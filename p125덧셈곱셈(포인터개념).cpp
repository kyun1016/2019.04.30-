//#include<stdio.h>
//
//int sum(int x1, int x2) {
//	return x1 + x2;
//}
//
//int mul(int x1, int x2) {
//	return x1 * x2;
//}
//
//void kuku(int(*calc)(int, int)) {
//	int i, j;
//	for (i = 1;i <= 9;i++) {
//		for (j = 1;j <= 9;j++)
//			printf("%3d", (*calc)(i, j));
//		putchar('\n');
//	}
//}
//
//int main(void) {
//	puts("덧셈표");
//	kuku(sum);
//	puts("\n곱셈표");
//	kuku(mul);
//
//	return 0;
//}


//#include<stdio.h>
//
//int sum(int x1, int x2) {
//	return x1 + x2;
//}
//
//int mul(int x1, int x2) {
//	return x1 * x2;
//}
//
//
////위와 동일하다.(함수를 매개변수로 선언하면 포인터를 생략해도 무방)
//void kuku(int calc(int, int)) {
//	int i, j;
//	for (i = 1;i <= 9;i++) {
//		for (j = 1;j <= 9;j++)
//			printf("%3d", calc(i, j));
//		putchar('\n');
//	}
//}
//
//int main(void) {
//	puts("덧셈표");
//	kuku(sum);
//	puts("\n곱셈표");
//	kuku(mul);
//
//	return 0;
//}