//#include<iostream>
//#include<algorithm>
//#include<string>
//
//using namespace std;
//
//int square[250][250];
//int sum_cost[250][250];
//
//int Max;
//int temp_max;
//
//void calc_max(int x, int y, int R, int C) {
//	
//	for (int i = 0; i < 250; i++) {
//		for (int j = 0; j < 250; j++) {
//			square[i][j] = min((abs(x - i) + abs(y - j)), sum_cost[i][j]);
//		}
//	}
//	for (int x1 = 0; x1 < R; x1++) {
//		for (int y1 = 0; y1 < C; y1++) {
//			temp_max = max(temp_max, square[x1][y1]);
//		}
//	}
//}
//
//void calc_distant(int x, int y) {
//	for (int i = 0; i < 250; i++) {
//		for (int j = 0; j < 250; j++) {
//			sum_cost[i][j] = min((abs(x - i) + abs(y - j)), sum_cost[i][j]);
//		}
//	}
//}
//
//int main() {
//	int T, R, C;
//	string temp;
//
//	cin >> T;
//	
//	for (int i = 0; i < T; i++) {
//		cin >> R >> C;
//		Max = 999;
//		temp_max = 0;
//		for (int x = 0; x < R; ++x) {
//			for (int y = 0; y < C; y++) {
//				sum_cost[x][y] = 999;
//			}
//		}
//		for (int x = 0; x < R; ++x) {
//			cin >> temp;
//			for (int y = 0; y < C; y++) {
//				if (temp[y] == '1') {
//					calc_distant(x, y);
//				}
//			}
//		}
//		for (int x = 0; x < R; ++x) {
//			for (int y = 0; y < C; y++) {
//				temp_max = 0;
//				calc_max(x, y, R, C);
//				Max = min(temp_max, Max);
//			}
//		}
//
//
//
//		cout << "Case #" << i + 1 << ": " << Max << endl;
//	}
//
//}