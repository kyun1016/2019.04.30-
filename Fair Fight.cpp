////arrow_back
////Round 1B 2019 - Google Code Jam 2019
////
////Time remaining
////
////02:12 : 28
////
////timeline
////3
////
////question_answer
////Fair Fight(14pts, 28pts)
////
////Competitive Submissions
////You have not attempted this problem.
////Last updated : Apr 29 2019, 01 : 00
////
////Problem
////En garde!Charles and Delila are about to face off against each other in the final fight of the Swordmaster fencing tournament.
////
////Along one wall of the fencing arena, there is a rack with N different types of swords; the swords are numbered by type, from 1 to N.As the head judge, you will pick a pair of integers(L, R) (with 1 ≤ L ≤ R ≤ N), and only the L - th through R - th types of swords(inclusive) will be available for the fight.
////
////Different types of sword are used in different ways, and being good with one type of sword does not necessarily mean you are good with another!Charles and Delila have skill levels of Ci and Di, respectively, with the i - th type of sword.Each of them will look at the types of sword you have made available for this fight, and then each will choose a type with which they are most skilled.If there are multiple available types with which a fighter is equally skilled, and that skill level exceeds the fighter's skill level in all other available types, then the fighter will make one of those equally good choices at random. Notice that it is possible for Charles and Delila to choose the same type of sword, which is fine — there are multiple copies of each type of sword available.
////
////The fight is fair if the absolute difference between Charles's skill level with his chosen sword type and Delila's skill level with her chosen sword type is at most K.To keep the fight exciting, you'd like to know how many different pairs (L, R) you can choose that will result in a fair fight.
////
////Input
////The first line of the input gives the number of test cases, T.T test cases follow.Each case begins with a line containing the two integers N and K, as described above.Then, two more lines follow.The first of these lines contains N integers Ci, giving Charles' skill levels for each type of sword, as described above. Similarly, the second line contains N integers Di, giving Delila's skill levels.
////
////Output
////For each test case, output one line containing Case #x: y, where x is the test case number(starting from 1) and y is the number of choices you can make that result in a fair fight, as described above.
////
////Limits
////1 ≤ T ≤ 100.
////0 ≤ K ≤ 105.
////0 ≤ Ci ≤ 105, for all i.
////0 ≤ Di ≤ 105, for all i.
////Time limit : 30 seconds per test set.
////Memory limit : 1GB.
////
////Test set 1 (Visible)
////1 ≤ N ≤ 100.
////
////Test set 2 (Hidden)
////N = 105, for exactly 8 test cases.
////1 ≤ N ≤ 1000, for all but 8 test cases.
////
////Sample
////
////Input
////
////Output
////
////6
////4 0
////1 1 1 8
////8 8 8 8
////3 0
////0 1 1
////1 1 0
////1 0
////3
////3
////5 0
////0 8 0 8 0
////4 0 4 0 4
////3 0
////1 0 0
////0 1 2
////5 2
////1 2 3 4 5
////5 5 5 5 10
////
////
////Case #1: 4
////Case #2: 4
////Case #3: 1
////Case #4: 0
////Case #5: 1
////Case #6: 7
////
////
////In Sample Case #1, the fight is fair if and only if Charles can use the last type of sword, so the answer is 4.
////
////In Sample Case #2, there are 4 fair fights : (1, 2), (1, 3), (2, 2), and (2, 3).Notice that for pairs like(1, 3), Charles and Delila both have multiple swords they could choose that they are most skilled with; however, each pair only counts as one fair fight.
////
////In Sample Case #3, there is 1 fair fight : (1, 1).
////
////In Sample Case #4, there are no fair fights, so the answer is 0.
////
////In Sample Case #5, remember that the duelists are not trying to make the fights fair; they choose the type of sword that they are most skilled with.For example, (1, 3) is not a fair fight, because Charles will choose the first type of sword, and Delila will choose the third type of sword.Delila will not go easy on Charles by choosing a weaker sword!
////
////In Sample Case #6, there are 7 fair fights : (1, 3), (1, 4), (2, 3), (2, 4), (3, 3), (3, 4), and (4, 4).
////
//// //// ////
//
//
//
//
//
//arrow_back
//Round 1B 2019 - Google Code Jam 2019
//
//남은 시간
//
//01:47 : 45
//
//타임 라인
//3
//
//question_answer
//1
//공정한 전투(14pts, 28pts)
//
//경쟁 제출
//이 문제는 시도하지 않았습니다.
//최종 업데이트 : Apr 29, 2010, 01 : 37
//
//문제
//앙 가르드!찰스와 델리 야는 소드 마스터 펜싱 토너먼트의 마지막 시합에서 서로 대결하고 있습니다.
//
//펜싱 경기장의 한 벽을 따라 N 개의 다른 종류의 칼 이있는 랙이 있습니다.칼은 형식에 따라 1에서 N 까지 번호가 매겨집니다.헤드 심사 위원은 정수(L, R) (1 ≤ L ≤ R ≤ N)를 선택하고 L 번째부터 R 번째까지의 검만이 싸울 수 있습니다 .
//
//다른 종류의 칼은 다른 방식으로 사용되며, 한 종류의 칼로도 좋다고해서 반드시 다른 사람과 잘 어울리는 것은 아닙니다.Charles와 Delila는 기술 수준이 C i 와 D i입니다., 각각 i 번째 유형의 검을 사용합니다.그들 각각은 당신이이 싸움에 사용할 수있게 만든 칼의 유형을보고, 그리고 각각은 그들이 가장 숙련 된 유형을 선택할 것입니다.전투기가 똑같이 숙련 된 여러 종류의 사용 가능한 유형이 있고 그 기술 수준이 다른 모든 사용 가능한 유형의 전투기의 기술 수준을 초과하면 전투기는 그 중 하나를 무작위로 똑같이 선택합니다.Charles와 Delila가 똑같은 유형의 검을 선택할 수 있다는 점에 유의하십시오.검의 종류마다 여러 개의 사본이 있습니다.
//
//찰스의 기술 수준과 자신이 선택한 칼 유형의 델라 실력 수준과 선택한 칼 종류의 델라 실력 수준의 절대 차이가 K 이하인 경우 싸움은 공평 합니다.흥미 진진한 싸움을 유지하려면 공정한 싸움을하게 될 여러 쌍(L, R)을 선택할 수 있는지 알고 싶습니다.
//
//입력
//입력의 첫 번째 라인은 테스트 케이스의 수 제공 T를.T 테스트 사례가 이어집니다.각각의 경우는 위에서 설명한 두 개의 정수 N 과 K를 포함하는 줄로 시작합니다.그런 다음 두 줄이 더 이어집니다.이 행 중 첫 번째 행에는 N 개의 정수 C i 가 포함되어 있어 위에서 설명한대로 Charles의 각 스킬 레벨에 대한 스킬 레벨을 제공합니다.마찬가지로, 두 번째 줄에는 N 개의 정수 D i 가 포함되어 있어 Delila의 기술 수준을 제공합니다.
//
//산출
//테스트 케이스를 들어, 하나 개의 출력 라인을 포함 Case #x: y하는 경우, x테스트 케이스 번호(1에서 시작)되고, y 선택 수는 전술 한 바와 같이하면, 정당한 싸움에 그 결과를 만들 수있다.
//
//제한
//1 ≤ T ≤ 100.
//0 ≤ K ≤ 10 5 .
//0 ≤ C i ≤ 10 5, 모든 i에 대해.
//0 ≤ D i ≤ 10 5, 모든 i에 대해.
//제한 시간 : 테스트 세트 당 30 초.
//메모리 제한 : 1GB.
//
//테스트 세트 1 (보이기)
//1 ≤ N ≤ 100.
//
//테스트 세트 2 (숨김)
//N = 10 5, 정확히 8 개의 테스트 케이스.
//1 ≤ N ≤ 1000, 8 가지 테스트 케이스를 제외한 모든 테스트 케이스.
//
//견본
//
//입력
//
//산출
//
//6
//4 0
//1 1 1 8
//8 8 8 8
//3 0
//0 1 1
//1 1 0
//1 0
//삼
//삼
//5 0
//0 8 0 8 0
//4 0 4 0 4
//3 0
//1 0 0
//0 1 2
//5 2
//1 2 3 4 5
//5 5 5 5 10
//
//
//사례 # 1 : 4
//사례 # 2 : 4
//사례 # 3 : 1
//사례 # 4 : 0
//사례 # 5 : 1
//사례 # 6 : 7
//
//
//샘플 사례 # 1에서 찰스가 마지막 유형의 검을 사용할 수있는 경우에만 싸움은 공평합니다.따라서 답은 4입니다.
//
//샘플 사례 # 2에는(1, 2), (1, 3), (2, 2) 및(2, 3)의 4 가지 공정한 경기가 있습니다. (1, 3)과 같이 찰스와 델라라는 두 켤레에 여러 개의 칼을 가지고있어 가장 숙련되어 있다고 선택할 수 있습니다.그러나 각 페어는 하나의 공정한 전투로 간주됩니다.
//
//샘플 사례 # 3에는 1 개의 공정한 전투가 있습니다(1, 1).
//
//샘플 케이스 # 4에는 공정한 경기가 없으므로 대답은 0입니다.
//
//Sample Case # 5에서, duelists 는 싸움을 공평하게하려고하지 않는다는 것을 기억하십시오; 그들은 가장 숙련 된 검의 종류를 선택합니다.예를 들어, (1, 3)은 공정한 싸움이 아닙니다.Charles는 첫 번째 유형의 칼을 선택하고 Delila는 세 번째 유형의 칼을 선택합니다.Delila는 약한 칼을 선택하여 Charles에게 쉽게 갈 수 없습니다!
//
//예제 사례 # 6에는(1, 3), (1, 4), (2, 3), (2, 4), (3, 3), (3, 4) 및 4, 4).
//
// // //
