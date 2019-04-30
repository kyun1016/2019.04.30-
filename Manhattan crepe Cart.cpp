////arrow_back
////Round 1B 2019 - Google Code Jam 2019
////
////Time remaining
////
////02:23 : 10
////
////timeline
////3
////
////question_answer
////Manhattan Crepe Cart(9pts, 18pts)
////
////Competitive Submissions
////You have not attempted this problem.
////Last updated : Apr 29 2019, 01 : 00
////
////Problem
////There are a lot of great streetside food vendors in Manhattan, but without a doubt, the one with the tastiest food is the Code Jam Crepe Cart!
////
////You want to find the cart, but you do not know where it is, except that it is at some street intersection.You believe that people from across Manhattan are currently walking toward that intersection, so you will try to identify the intersection toward which the most people are traveling.
////
////For the purposes of this problem, Manhattan is a regular grid with its axes aligned to compass lines and bounded between 0 and Q, inclusive, on each axis.There are west - east streets corresponding to gridlines y = 0, y = 1, y = 2, …, y = Q and south - north streets corresponding to gridlines x = 0, x = 1, x = 2, …, x = Q, and people move only along these streets.The points where the lines meet — e.g., (0, 0) and (1, 2) — are intersections.The shortest distance between two intersections is measured via the Manhattan distance — that is, by the sum of the absolute horizontal difference and the absolute vertical difference between the two sets of coordinates.
////
////You know the locations of P people, all of whom are standing at intersections, and the compass direction each person is headed : north(increasing y direction), south(decreasing y direction), east(increasing x direction), or west(decreasing x direction).A person is moving toward a street intersection if their current movement is on a shortest path to that street intersection within the Manhattan grid.For example, if a person located at(x0, y0) is moving north, then they are moving toward all street intersections that have coordinates(x, y) with y > y0.
////
////You think the crepe cart is at the intersection toward which the most people are traveling.Moreover, you believe that more southern and western parts of the island are most likely to have a crepe cart, so if there are multiple such intersections, you will choose the one with the smallest non - negative x coordinate, and if there are multiple such intersections with that same x coordinate, the one among those with the smallest non - negative y coordinate.Which intersection will you choose ?
////
////Input
////The first line of the input gives the number of test cases, T.T test cases follow.Each test case starts with one line containing two integers P and Q: the number of people, and the maximum possible value of an x or y coordinate in Manhattan, as described above.Then, there are P more lines.The i - th of those lines contains two integers Xi and Yi, the current location(street corner) of a person, and a character Di, the direction that person is headed.Di is one of the uppercase letters N, S, E, or W, which stand for north, south, east, and west, respectively.
////
////Output
////For each test case, output one line containing Case #t: x y, where t is the test case number(starting from 1) and x and y are the horizontal and vertical coordinates of the intersection where you believe the crepe cart is located.
////
////Limits
////1 ≤ T ≤ 100.
////Time limit : 20 seconds per test set.
////Memory limit : 1GB.
////1 ≤ P ≤ 500.
////0 ≤ Xi ≤ Q, for all i.
////0 ≤ Yi ≤ Q, for all i.
////For all i, if Xi = 0, Di ≠ W.
////For all i, if Yi = 0, Di ≠ S.
////For all i, if Xi = Q, Di ≠ E.
////For all i, if Yi = Q, Di ≠ N.
////
////Test set 1 (Visible)
////Q = 10.
////
////Test set 2 (Hidden)
////Q = 105.
////
////Sample
////
////Input
////
////Output
////
////3
////1 10
////5 5 N
////4 10
////2 4 N
////2 6 S
////1 5 E
////3 5 W
////8 10
////0 2 S
////0 3 N
////0 3 N
////0 4 N
////0 5 S
////0 5 S
////0 8 S
////1 5 W
////
////
////Case #1: 0 6
////Case #2: 2 5
////Case #3: 0 4
////
////
////In Sample Case #1, there is only one person, and they are moving north from(5, 5).This means that all street corners with y ≥ 6 are possible locations for the crepe cart.Of those possibilities, we choose the one with lowest x ≥ 0 and then lowest y ≥ 6.
////
////In Sample Case #2, there are four people, all moving toward location(2, 5).There is no other location that has as many people moving toward it.
////
////In Sample Case #3, six of the eight people are moving toward location(0, 4).There is no other location that has as many people moving toward it.
////
////
//
//
//
////Manhattan Crepe Cart(9pts, 18pts)
////
////경쟁 제출
////이 문제는 시도하지 않았습니다.
////최종 업데이트 : Apr 29, 2010, 01 : 37
////
////문제
////맨하탄에는 많은 거리의 음식 공급 업체가 있지만, 의심 할 여지없이 가장 맛있는 음식은 Code Jam Crepe Cart입니다.
////
////카트를 찾으려고하지만, 거리 교차로에있는 것을 제외하고는 카트가 어디에 있는지 알지 못합니다.맨해튼 전역의 사람들이 현재 그 교차로를 향해 걷고 있다고 믿기 때문에 대부분의 사람들이 여행하는 교차로를 식별하려고합니다.
////
////이 문제의 목적을 위해, Manhattan은 축이 나침반 라인에 정렬되고 각 축에 0과 Q 를 포함 하는 정규 그리드입니다.그리드 라인 y = 0, y = 1, y = 2, ..., y = Q에 해당하는 서쪽 - 동쪽 거리  와 눈금 선 x = 0, x = 1, x = 2, ..., x = Q, 사람들은이 거리만을 따라 이동합니다.선이 만나는 지점, 예 : (0, 0) 및(1, 2)은 교차점입니다.두 교차점 사이의 최단 거리는 맨하탄 거리 를 통해 측정됩니다.즉 절대 수평 차이와 두 좌표 세트 간의 절대 수직 차이를 합한 값입니다.
////
////당신의 위치를 알고 P의 교차로에 서있는 그들 모두 사람을, 각 사람이 향하고 나침반 방향 : 북쪽(증가 y 방향), 남쪽, 동쪽, (y 방향 감소) (x 방향을 증가) 또는 서쪽(감소 x 방향).현재 운동이 맨해튼 그리드 내의 거리 교차로에 대한 최단 경로 상에 있으면 사람이 거리 교차로로 이동하고 있습니다.예를 들어, (x 0, y 0)에있는 사람이 북쪽으로 이동하면 y > y 0 인 좌표(x, y)를 갖는 모든 교차로로 이동 합니다.
////
////크레이프 카트가 대부분의 사람들이 여행하는 교차로에 있다고 생각합니다.게다가 섬의 더 남쪽과 서쪽 부분이 크레이프 카트를 가질 확률이 높습니다.따라서 여러 개의 교차점이 있으면 가장 작은 음수가 아닌 점을 선택하고 x여러 개의 교차점이있는 경우 같은 x좌표로, 음수가 아닌 y좌표 가 가장 작은 좌표 중 하나 입니다.어느 교차로를 선택할 것입니까 ?
////
////입력
////입력의 첫 번째 라인은 테스트 케이스의 수 제공 T를.T 테스트 사례가 이어집니다.각 테스트 케이스는 위에 설명 된대로 Manhattan에서 두 개의 정수 P 와 Q를 포함하는 한 줄로 시작합니다.맨 아래에 사람 수와 x 또는 y 좌표의 가능한 최대 값이 있습니다.그런 다음 P 개의 줄 이 더 있습니다.이 행의 i 번째 행에는 두 개의 정수 X i 와 Y i, 즉 사람 의 현재 위치(거리 모퉁이)와 사람이 향하는 방향 인 문자 D i 가 포함됩니다.D의 i가 대문자 중 하나입니다 N, S, E, 또는W, 북쪽, 남쪽, 동쪽, 서쪽 각각에 대한 서.
////
////산출
////테스트 케이스를 들어, 하나 개의 출력 라인을 포함 Case #t: x y하는 경우, t테스트 케이스 번호(1에서 시작)되고, x및 y는 크레이프 카트가 위치 판단 교차의 수평 및 수직 좌표이다.
////
////제한
////1 ≤ T ≤ 100.
////제한 시간 : 테스트 세트 당 20 초.
////메모리 제한 : 1GB.
////1 ≤ P ≤ 500
////0 ≤ X는 난 ≤ Q가 모든 I에 대해.
////0 ≤ Y는 난 ≤ Q가 모든 I에 대해.
////모든 i에 대해, X i = 0이면 D i ≠ W.
////모든 i에 대해, Y i = 0이면 D i ≠ S.
////모든 i에 대해, X i = Q 라면 D i ≠ E.
////모든 i에 대해, Y i = Q 라면 D i ≠ N.
////
////테스트 세트 1 (보이기)
////Q = 10.
////
////테스트 세트 2 (숨김)
////Q = 10 5 .
////
////견본
////
////입력
////
////산출
////
////삼
////1 10
////5 5 N
////4 10
////2 4 N
////2 6 S
////1 5 E
////3 5 W
////8 10
////0 2 S
////0 3 N
////0 3 N
////0 4 N
////0 5 S
////0 5 S
////0 8 S
////1 5 W
////
////
////사례 # 1 : 0 6
////사례 # 2 : 2 5
////사례 # 3 : 0 4
////
////
////샘플 사례 # 1에는 한 명만 존재하며(5, 5)에서 북쪽으로 이동합니다.즉, y ≥ 6 인 모든 거리 구석이 크레페 카트의 위치 일 가능성이 있습니다.이러한 가능성 중에서 가장 낮은 x ≥ 0, 가장 낮은 y ≥ 6 중 하나를 선택합니다.
////
////샘플 사례 # 2에는 네 명이 있는데 모두 모두 위치로 이동합니다(2, 5).다른 사람들이 그것을 향해 나아가는 다른 위치는 없습니다.
////
////샘플 사례 # 3에서 8 명의 사람들 중 6 명이 위치(0, 4)로 이동하고 있습니다.다른 사람들이 그것을 향해 나아가는 다른 위치는 없습니다.
////
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//#include<iostream>
//
//using namespace std;
//
//int ret;
//
//int cache[10][10];
//
//void calc(int x, int y, int MAX, char direction) {
//	if (direction == 'N') {
//		for (int i = 0; i <= y; i++) {
//			for (int j = 0; j < MAX; j++) {
//				cache[i][j] = -1;
//			}
//		}
//	}
//	else if (direction == 'S') {
//		for (int i = y; i < MAX; i++) {
//			for (int j = 0; j < MAX; j++) {
//				cache[i][j] = -1;
//			}
//		}
//	}
//	else if (direction == 'E') {
//		for (int i = 0; i < MAX; i++) {
//			for (int j = 0; j <= x; j++) {
//				cache[i][j] = -1;
//			}
//		}
//	}
//	else if (direction == 'W') {
//		for (int i = 0; i < MAX; i++) {
//			for (int j = x; j < MAX; j++) {
//				cache[i][j] = -1;
//			}
//		}
//	}
//}
//
//void solve(int MAX) {
//	for (int i = 0; i < MAX; i++) {
//		for (int j = 0; j < MAX; j++)
//			if (cache[i][j] == 0) {
//				cout << j << " " << i << endl;
//				return;
//			}
//	}
//}
//
//
//int main() {
//	int T, P, Q;
//	int x, y;
//	char a;
//
//	cin >> T;
//	for (int i = 1; i <= T; i++) {
//		cin >> P >> Q;
//		memset(cache, 0, sizeof(cache));
//		for (int i = 0; i < P; i++) {
//			cin >> x >> y >> a;
//			calc(x, y, Q, a);
//		}
//
//		cout << "Case #" << i << ": ";
//		solve(Q);
//	}
//}