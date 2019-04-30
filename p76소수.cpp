//
////1Â÷ ±¸Çö
////#include <stdio.h>
////
////int main() {
////	int i, n;
////	int prime[500];
////	unsigned long counter = 0;
////	for (n = 2;n <= 1000;n++) {
////		for (i = 2; i < n; i++) {
////			counter++;
////			if (n%i == 0)
////				break;
////		}
////		if (n == i)
////			printf("%d\n", n);
////	}
////	printf("³ª´°¼ÀÀ» ½ÇÇàÇÑ È½¼ö : %lu\n", counter);
////
////	return 0;
////}
//



	//2Â÷ p.80±îÁö Ç®¾ú´Ù.
//
//#include <stdio.h>
//
//int main() {
//	int i, n;
//	int prime[500];
//	int ptr = 0;
//	unsigned long counter = 0;
//	prime[ptr++] = 2;
//	for (n = 3;n <= 1000;n += 2) {
//		for (i = 1; i <ptr; i++) {
//			counter++;
//			if (n%prime[i] == 0)
//				break;
//		}
//		if (ptr == i) {
//			prime[ptr++] = n;
//			printf("%d\n", n);
//		}
//			
//	}
//	printf("³ª´°¼ÀÀ» ½ÇÇàÇÑ È½¼ö : %lu\n", counter);
//
//	return 0;
//}



//ver.3

//#include <stdio.h>
//
//int main() {
//	int i, n;
//	int prime[5000];
//	int ptr = 0;
//	unsigned long counter = 0;
//	prime[ptr++] = 2;
//	prime[ptr++] = 3;
//	for (n = 5;n <= 10000;n += 2) {
//		int flag = 0;
//		for (i = 1; counter++, prime[i]*prime[i] <= n; i++) {
//			counter++;
//			if (n%prime[i] == 0) {
//				flag = 1;
//				break;
//			}
//		}
//		if (!flag) {
//			prime[ptr++] = n;
//		}
//			
//	}
//	printf("³ª´°¼ÀÀ» ½ÇÇàÇÑ È½¼ö : %lu\n", counter);
//	counter = 0;
//	for (i = 0; i < ptr;i++){
//		counter++;
//	}
//	printf("%d\n", counter);
//
//
//	return 0;
//}

//ver 4

//#include <iostream>
//
//bool eratosthenes_sieve[300002];
//
//void count_prime(const int begin) {
//	const int end(begin * 2);
//	int i, j, count(0);
//
//	//¹è¿­ ÃÊ±âÈ­
//	for (i = 2; i <= end;i++) {
//		count++;
//		eratosthenes_sieve[i] = true;
//	}
//
//	//¼Ò¼ö Å½»ö
//	for (i = 2;count++,i <= end;i++) {
//		if (i*i > end)
//			break;
//		if (eratosthenes_sieve[i]) {
//			for (j = i * i;j <= end;j += i)
//				eratosthenes_sieve[j] = false;
//		}
//
//	}
//	std::cout << count << "\n";
//}
//
//int main() {
//	int n;
//	while (1) {
//		std::cin >> n;
//		if (n == 0) break;
//		count_prime(n);
//	}
//
//
//
//	return 0;
//}
