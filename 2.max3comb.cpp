//#include <stdio.h>
//
//int max3(int a,int b, int c) {
//	int max = a;
//	max = b > max ? c > b ? c : b : c > max ? c : max;
//	
//	return max;
//}
//
//int main(void) {
//	printf("max3(%d,%d,%d) = %d\n", 3, 2, 1, max3(3, 2, 1));
//	printf("max3(%d,%d,%d) = %d\n", 3, 2, 2, max3(3, 2, 2));
//	printf("max3(%d,%d,%d) = %d\n", 3, 1, 2, max3(1, 5, 2));
//}