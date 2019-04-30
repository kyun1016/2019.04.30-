////#include<iostream>
////#include<cstring>
////
////using namespace std;
////
////int A[100001];
////int arr[100001];
////int flag[100001];
////
////
////int Max(int a, int b) {
////	return a > b ? a : b;
////}
////
//////int calc(int N, int S, int x =0) {
//////	int& ret = cache[x];
//////	if (ret != -1)
//////		return ret;
//////	ret = 0;
//////	int count = 0, flag = 0, temp;
//////	memset(A, 0, sizeof(A));
//////	for (int i = x; i >= 0; i--) {
//////		A[arr[i]]++;
//////		if (A[arr[i]] <= S) {
//////			ret++;
//////		}
//////		else if (A[arr[i]] > S && flag == 0) {
//////			int j = x;
//////			flag++;
//////			while (A[arr[i]] > S) {
//////				A[arr[j]]--;
//////				count++;
//////			}
//////			temp = ret;
//////		}
//////		else if (A[arr[i]] > S && flag == 1) {
//////			temp = Max(ret, ret - count);
//////			count = 0;
//////			flag = 0;
//////		}
//////			
//////	}
//////	return ret;
//////}
////
////int pick(int N, int S, int x, int y) {
////	int count(0);
////	int sub(0);
////	memset(A, 0, sizeof(A));
////	memset(flag, 0, sizeof(flag));
////	for (int i = x; i <= y; i++) {
////		A[arr[i]]++;
////		count++;
////		if (A[arr[i]] > S && flag[arr[i]] == 0) {
////			sub += A[arr[i]];
////			flag[arr[i]]++;
////		}
////		else if (A[arr[i]] > S && flag[arr[i]]) {
////			sub++;
////		}
////			
////	}
////
////	return count - sub;
////}
////
////int main() {
////	int T, S, N;
////	int MAX = 0;
////	cin >> T;
////	for (int i = 1; i <= T; i++) {
////		cin >> N >> S;
////	
////		for (int j = 0; j < N; j++) {
////			cin >> arr[j];
////		}
////		MAX = 0;
////		for (int x = 0; x < N; x++) {
////			for (int y = x; y < N; y++) {
////				MAX = Max(MAX, pick(N, S, x, y));
////			}
////		}
////		cout << "Case #" << i << ": " << MAX << endl;
////	}
////}
//
//
//
//#include<iostream>
//#include<algorithm>
//#include<cstring>
//
//int cost[100000];
//int pickCount[100000];
//int cache;
//
//using namespace std;
//
//int pick(int start, int end, int maxPick) {
//	int ret = 0;
//	int temp;
//	int MAX = 0;
//
//	for (int j = 0; j < end; j++) {
//		memset(pickCount, 0, sizeof(pickCount));
//		ret = 0;
//		for (int i = j; i < end; i++) {
//			temp = cost[i];
//			pickCount[temp]++;
//			if (pickCount[temp] <= maxPick)
//				ret++;
//			else if (pickCount[temp] == maxPick + 1)
//				ret -= maxPick;
//			MAX = max(MAX, ret);
//		}
//	}
//
//	
//
//
//
//	return MAX;
//}
//
//int main() {
//	int T, S, N;
//	int MAX = 0;
//	cin >> T;
//	for (int i = 1; i <= T; i++) {
//		cin >> N >> S;
//
//		for (int j = 0; j < N; j++) {
//			cin >> cost[j];
//		}
//
//
//		cout << "Case #" << i << ": " << pick(0,N,S) << endl;
//	}
//}
//
//
