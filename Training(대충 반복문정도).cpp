//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//int skill[100001];
//
//long long calc(int N, int P) {
//	long long count(0);
//	int standard(skill[P - 1]);
//	for (int j = 0; j < P; j++) {
//		count += standard - skill[j];
//	}
//	long long min = count;
//	for (int i = 0; i + P < N; i++) {
//		int temp = skill[P + i] - skill[P - 1 + i];
//		count -= (skill[P -1 + i] - skill[i]);
//		count += temp * (P - 1);
//		min = std::min(min, count);
//	}
//	return min;
//}
//
//int main() {
//	int T, N, P;
//	
//
//	cin >> T;
//	for (int i = 0; i < T; i++) {
//		cin >> N >> P;
//		for (int k = 0; k < N; ++k) {
//			cin >> skill[k];
//		}
//		sort(skill, skill + N);
//		cout << "Case #"<< i+1 <<": " << calc(N, P) << endl;
//	}
//
//}