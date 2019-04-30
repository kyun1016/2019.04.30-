//#include <iostream>
//#include <string>
//#include <cstring>		//memset
//
//using namespace std;
//
//int arr[26];
//
//int is_palindrome(string find) {
//	int size = find.size();
//	memset(arr, 0, sizeof(arr));
//	for (int i = 0; i < size; i++) {
//		arr[find[i] - 'A']++;
//	}
//	if (size % 2) {
//		int flag = 0;
//		for (int i = 0; i < 26; i++) {
//			if (arr[i] % 2) {
//				flag++;
//			}
//		}
//		if (flag > 1)
//			return 0;
//	}
//	else {
//		int flag = 0;
//		for (int i = 0; i < 26; i++) {
//			if (arr[i] % 2) {
//				flag++;
//			}
//		}
//		if (flag > 0)
//			return 0;
//	}
//	return 1;
//}
//
//
//int main() {
//	int T, N, Q, a, b, ret;
//	string origin ,find_this;
//	cin >> T;
//	for (int i = 1; i <= T; i++) {
//		cin >> N >> Q >> origin;
//		ret = 0;
//		for (int i = 0; i < Q; i++) {
//			cin >> a >> b;
//			find_this = origin.substr(a - 1, b - a +1);
//			ret += is_palindrome(find_this);
//		}
//		
//		cout << "Case #" << i << ": " << ret << endl;
//	}
//}