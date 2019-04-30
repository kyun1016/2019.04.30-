//#include <iostream>
//
//int Max(int a, int b) {
//	return a > b ? a : b;
//}
//
//int main() {
//
//	int T, i, count = 0, MAX(0);
//	std::cin >> T;
//	/*for (int k = 2; k < T; k++) {*/
//		count = 0;
//		//절반을 뚝 짤라서 반이 있으면 나머지 반도 있는것
//		for (i = 1; i*i < T; i++) {
//			if (T%i == 0)
//				count += 2;
//
//			//정 중앙은 1개 추가.
//			if (i*i == T)
//				count++;
//		}
//		MAX = Max(MAX, count);
//		/*std::cout << k << "의  개수 : " << count << std::endl;*/
//	/*}*/
//	std::cout << "가장 많은 약수의 개수 : " << MAX << std::endl;
//	return 0;
//}