//////https://code.google.com/codejam/contest/9234486/dashboard(�ڵ� ��ó)
//
//
//
//#include<iostream>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//string Min(string a, string b) {
//	if (a.size() < b.size())
//		return a;
//	else if (b.size() < a.size())
//		return b;
//	else
//		for (int i = 0; i < a.size(); i++) {
//			if (a[i] != b[i])
//				return a[i] < b[i] ? a : b;
//		}
//	return a;
//}
//
//
//
//string string_add(const string num1, const string num2) {
//    long long sum = 0;
//    //num�� copy�� �����Ͽ���.
//    string copy1(num1), copy2(num2);
//    string ret;
//
//    //copy1, copy2, sum�� ��� ������������� ����� ����Ѵ�.
//    while (!copy1.empty() || !copy2.empty() || sum) {
//        if (!copy1.empty()) {
//            //copy1�� �ִ� ������ ���ڴ� char���·� ����Ǿ������Ƿ�(ascii����) '0'�� ���־� ����ȭ ���־���.
//            sum += copy1.back() - '0';
//            copy1.pop_back();
//        }
//        if (!copy2.empty()) {
//            sum += copy2.back() - '0';
//            copy2.pop_back();
//        }
//        //sum�� ���� �ڸ����� ret�� �־�����.(�̶�, char������ ���Ƿ� �ٽ� '0'�� �����ش�)
//        ret.push_back((sum % 10) + '0');
//        sum /= 10;
//    }
//    //�������� �ԷµǾ������Ƿ�, reverse�Լ��� Ȱ���� ���ڿ��� �����´�.
//    reverse(ret.begin(), ret.end());
//    return ret;
//}
//
////num1 > num2�� �Է�����.
//string string_sub(const string num1, const string num2) {
//	long long sum = 0;
//	//num�� copy�� �����Ͽ���.
//	string copy1(num1), copy2(num2);
//	string ret;
//	int flag = 0;
//
//	//���� num2�� ������ '0'�̶�� 0�� ������Ų��.
//	if (num2[0] == '0') {
//		copy2.erase(0, 1);
//	}
//
//	//copy1, copy2, sum�� ��� ������������� ����� ����Ѵ�.
//	while (!copy1.empty() || !copy2.empty() || sum) {
//		if (!copy1.empty()) {
//			//copy1�� �ִ� ������ ���ڴ� char���·� ����Ǿ������Ƿ�(ascii����) '0'�� ���־� ����ȭ ���־���.
//			sum += copy1.back() - '0';
//			if (flag) {
//				flag = 0;
//				sum -= 1;
//			}
//			copy1.pop_back();
//		}
//		if (!copy2.empty()) {
//			sum -= copy2.back() - '0';
//			copy2.pop_back();
//		}
//		//sum�� ���� �ڸ����� ret�� �־�����.(�̶�, char������ ���Ƿ� �ٽ� '0'�� �����ش�)
//		if (sum < 0) {
//			sum += 10;
//			ret.push_back((sum % 10) + '0');
//			sum /= 10;
//		
//				
//			flag = 1;
//
//		}
//		else {
//			ret.push_back((sum % 10) + '0');
//			sum /= 10;
//		}
//
//	}
//	//�������� �ԷµǾ������Ƿ�, reverse�Լ��� Ȱ���� ���ڿ��� �����´�.
//	reverse(ret.begin(), ret.end());
//
//	while (ret[0] == '0') {
//		ret.erase(0, 1);
//	}
//	if (ret.size() == 0) {
//		ret.push_back('0');
//	}
//	return ret;
//}
//
//string calculator(string N) {
//	string up(N), down(N);
//	string ret1,ret2;
//	int size = N.length();
//	for (int i = 0; i < size; i++) {
//		if (N[i] % 2 == 1) {
//			up[i] = N[i] + 1;
//			for (int j = i+1; j < size; j++) {
//				up[j] = '0';
//			}
//			down[i] = N[i] - 1;
//			for (int j = i+1; j < size; j++) {
//				down[j] = '8';
//			}
//			break;
//		}
//	}
//
//	ret1 = string_sub(up, N);
//	ret2 = string_sub(N, down);
//	string MIN;
//	MIN = Min(ret1, ret2);
//
//	return MIN;
//}
//
//int main() {
//	int T;
//	string N;
//	cin >> T;
//	for (int i = 1; i <= T; i++) {
//		cin >> N;
//		cout << "Case #" << i << ": " << calculator(N) << endl;
//	}
//}
