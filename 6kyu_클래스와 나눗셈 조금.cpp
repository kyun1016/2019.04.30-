




//�Ϻ�!
//#include<string>
//#include<cmath>
//#include<iostream>
//
//class DigPow
//{
//public:
//	static int digPow(int n, int p) {
//		long long sum(0);
//		std::string a = std::to_string(n);
//		for (int i = 0;i<a.length();i++) {
//			sum += (int)pow(a[i]-'0', p + i);
//			std::cout << sum << "\n";
//		}
//		if (sum%n == 0) return sum / n;
//		else return -1;
//	}
//};
//
//int main() {
//	std::cout << DigPow::digPow(89, 1) << "\n";
//	std::cout << DigPow::digPow(92, 1) << "\n";
//	std::cout << DigPow::digPow(695, 2) << "\n";
//	std::cout << DigPow::digPow(46288, 3) << "\n";
//}
//
//



//#include<string>
//#include<cmath>
//#include<iostream>
//
//class DigPow
//{
//public:
//	static int digPow(int n, int p)
//	{
//		long long sum(0);
//		int copy_n(n);
//		int length = std::to_string(n).length();
//		for (int i = 0;i<length;i++) {
//			sum += pow(copy_n % 10, p + length - i - 1);
//			copy_n /= 10;
//			std::cout << sum << "\n";
//		}
//		if (sum % (sum / n) == 0)				//�̰� ù �õ��� ��� ���и� �Ͽ���. �ٷ� �� �κп� n%0�� �ڲ� ������ ������ �±� �����̴�.
//												//���� sum%n���� �ϴ� �ڵ带 �ϼ���ų �� �־�����, ��������
												//�̵� ������ �Ǽ� ���� ����.
//			return sum / n;
//		else 
//			return -1;
//	}
//};
//
//
//
//int main() {
//	std::cout << DigPow::digPow(89, 1)<<"\n";
//	std::cout << DigPow::digPow(92, 1) << "\n";
//	std::cout << DigPow::digPow(695, 2) << "\n";
//	std::cout << DigPow::digPow(46288, 3) << "\n";
//}