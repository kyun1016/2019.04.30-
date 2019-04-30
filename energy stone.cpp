//#include<iostream>
//
//using namespace std;
//
//int S[103], E[103], L[103];
//
//int Max(int a, int b) {
//	return a > b ? a : b;
//}
//
//int calc(int N, int x) {
//	int ret = E[x];
//	
//	for (int i = 1; i <= N; i++) {
//		if (i != x) 
//			if (E[i] > L[i] * S[i])
//				ret += E[i] - (L[i] * S[i]);
//	}
//	return ret;
//}
//
//int main() {
//	int T, N, MAX;
//	
//	cin >> T;
//	for (int i = 1; i <= T; i++) {
//		cin >> N;
//		for (int j = 1; j <= N; j++)
//			cin >> S[j] >> E[j] >> L[j];
//		
//
//		MAX = 0;
//		for (int x = 1; x <= N; x++) {			
//				MAX = Max(calc(N, x), MAX);
//		}
//		cout << "Case #" << i << ": " << MAX << endl;
//	}
//}