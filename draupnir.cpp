////arrow_back
////Round 1B 2019 - Google Code Jam 2019
////
////Time remaining
////
////02:12 : 42
////
////timeline
////3
////
////question_answer
////Draupnir(10pts, 21pts)
////
////Competitive Submissions
////You have not attempted this problem.
////Last updated : Apr 29 2019, 01 : 00
////
////Problem
////Odin has some magical rings which produce copies of themselves.Each "X-day ring" produces one more X - day ring every X days after the day it came into existence.These rings come in six possible varieties : 1 - day, 2 - day, ..., all the way up to 6 - day.
////
////For example, a 3 - day ring that came into existence on day 0 would do nothing until day 3, when it would produce another 3 - day ring.Then, on day 6, each of those two rings would produce another 3 - day ring, and so on.
////
////You know that Odin had no rings before day 0. On day 0, some rings came into existence.At the end of day 0, Odin had Ri i - day rings, for each 1 ≤ i ≤ 6. You know that 0 ≤ Ri ≤ 100, for all i, and at least one of the Ri values is positive.
////
////Fortunately, you also have access to the secret well of knowledge.Each time you use it, you can find out the total number of rings that Odin had at the end of a particular day between day 1 and day 500, inclusive.The well will give you the answer modulo 263, because even it can only hold so much information!Moreover, you can only use the well up to W times.
////
////Your goal is to determine how many rings of each type Odin had at the end of day 0 — that is, you must find each of the Ri values.
////
////Input and output
////This is an interactive problem.You should make sure you have read the information in the Interactive Problems section of our FAQ.
////
////Initially, your program should read a single line containing two integers T, the number of test cases, and W, the number of times you are allowed to use the well of knowledge per test case.Then, you need to process T test cases.
////
////In each test case, your program processes up to W + 1 exchanges with our judge.You may make up to W exchanges of the following form :
////
////Your program outputs one line with a single integer D between 1 and 500, inclusive.
////The judge responds with one line with a single integer : the total number of rings that Odin had at the end of day D, modulo 263. If you send invalid data(e.g., a number out of range, or a malformed line), the judge instead responds with - 1.
////After between 0 and W exchanges as explained above, you must perform one more exchange of the following form :
////
////Your program outputs one line with six integers R1, R2, R3, R4, R5, R6, where Ri represents the number of i - day rings that Odin had at the end of day 0.
////The judge responds with one line with a single integer : 1 if your answer is correct, and -1 if it is not (or you have provided a malformed line).
////After the judge sends - 1 to your input stream(because of either invalid data or an incorrect answer), it will not send any other output.If your program continues to wait for the judge after receiving - 1, your program will time out, resulting in a Time Limit Exceeded error.Notice that it is your responsibility to have your program exit in time to receive a Wrong Answer judgment instead of a Time Limit Exceeded error.As usual, if the memory limit is exceeded, or your program gets a runtime error, you will receive the appropriate judgment.
////
////Limits
////1 ≤ T ≤ 50.
////Time limit : 20 seconds per test set.
////Memory limit : 1GB.
////
////Test set 1 (Visible)
////W = 6.
////
////Test set 2 (Hidden)
////W = 2.
////
////Testing Tool
////You can use this testing tool to test locally or on our servers.To test locally, you will need to run the tool in parallel with your code; you can use our interactive runner for that.For more information, read the Interactive Problems section of the FAQ.
////
////Local Testing Tool
////To better facilitate local testing, we provide you the following script.Instructions are included inside.You are encouraged to add more test cases for better testing.Please be advised that although the testing tool is intended to simulate the judging system, it is NOT the real judging system and might behave differently.
////
////If your code passes the testing tool but fails the real judge, please check the Coding section of our FAQ to make sure that you are using the same compiler as us.
////
////
////Sample Interaction
////This interaction corresponds to Test set 1. Suppose that, unbeknownst to us, the judge has decided that Odin had one ring of each of the six types at the end of day 0.
////
////t, w = readline_int_list()   // Reads 50 into t and 6 into w
////printline 3 to stdout        // Asks about day 3.
////flush stdout
////n = readline_int()           // Reads 16 into n.
////printline 1 to stdout        // Asks about day 1.
////flush stdout
////n = readline_int()           // Reads 8 into n.
////printline 1 1 1 4 0 0 to stdout
////flush stdout                 // We make a guess even though we could have
////							 // queried the well up to four more times.
////	verdict = readline_int()     // Reads -1 into verdict (judge has decided our
////								 //   solution is incorrect)
////	exit                         // Exits to avoid an ambiguous TLE error
////	Notice that even though the guess was consistent with the information we received from the judge, we were still wrong because we did not find the correct values.
////
////
////
////
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
//Draupnir(10pts, 21pts)
//
//경쟁 제출
//이 문제는 시도하지 않았습니다.
//최종 업데이트 : Apr 29, 2010, 01 : 37
//
//문제
//Odin은 자신의 복사본을 만드는 마법의 고리를 가지고 있습니다.각 "X-day 링"은 그것이 생겨난 후 X 일마다 한 번 더 X - 링을 생성합니다.이 반지는 1 일, 2 일, ..., 최대 6 일 동안 6 가지 종류로 제공됩니다.
//
//예를 들어, 0 일에 생겨난 3 일간의 링은 3 일째되는 날까지 아무것도하지 못한다.그런 다음 6 일에 두 개의 고리가 각각 다른 3 일간의 고리를 생성합니다.
//
//오딘에게는 0 일 전에는 반지가 없다는 것을 알 수 있습니다. 0 일에는 약간의 고리가 생겨났습니다. 0 일의 끝에서 Odin은 각 1 ≤ i ≤ 6에 대해 R i i - day 링을 가졌 습니다.모든 i에 대해 0 ≤ R i ≤ 100이고 R i 값 중 적어도 하나 는 양수임을 알 수 있습니다.
//
//다행히 지식의 비밀 우물에도 접근 할 수 있습니다.당신이 그것을 사용할 때마다, 당신은 오딘이 하루의 끝에서 하루 1 일과 500 사이 의 총 반지 수를 알 수 있습니다.우물은 당신에게 답을 2 63으로 줄 것입니다, 왜냐하면 그것은 단지 많은 정보만을 담을 수 있기 때문입니다!또한 최대 W 회 까지만 사용할 수 있습니다 .
//
//당신의 목표는 Odin이 0 일의 마지막에 몇 개의 링을 가지고 있는지를 결정하는 것입니다.즉, 각각의 R i 값을 찾아야 합니다.
//
//입력과 출력
//이는 대화식 문제입니다.FAQ 의 대화 형 문제 섹션 에서 정보를 읽었는지 확인해야합니다 .
//
//처음에 프로그램은 두 개의 정수 T, 테스트 케이스의 수, W(테스트 케이스 당 지식의 우물을 사용할 수있는 횟수)를 포함하는 한 줄을 읽어야합니다.그런 다음 T 테스트 케이스 를 처리해야합니다 .
//
//각 테스트 케이스에서 귀하의 프로그램 은 판사와 W + 1 회까지의 교환을 처리합니다.다음 양식의 W 교환을 할 수 있습니다 :
//
//프로그램은 1과 500 사이의 단일 정수 D를 가진 한 줄을 출력합니다.
//판사는 하나의 라인으로 하나의 정수로 응답합니다 : Odin이 하루의 끝에서 D, modulo 2 63 의 총 반지 수.잘못된 데이터(예 : 범위를 벗어난 번호 또는 잘못된 형식의 전화 번호)를 보내면 판사가 대신 응답합니다 - 1.
//위에 설명 된대로 0과 W 교환 사이에 한 번 더 다음 양식을 교환해야합니다.
//
//프로그램은 R 1, R 2, R 3, R 4, R 5, R 6의 6 개의 정수로 된 한 줄을 출력합니다.여기서 R i 는 Odin이 0 일의 끝에서 가지고 있었던 i - day 링의 수를 나타냅니다.
//판사 1는 대답이 정확하고, -1그렇지 않은 경우(또는 잘못된 형식의 행을 제공 한 경우) 단일 정수로 한 줄로 응답합니다 .
//판사가 - 1입력 스트림으로 보낸 후(잘못된 데이터 또는 잘못된 답변으로 인해) 다른 출력을 보내지 않습니다.수신 한 후 - 1프로그램이 판사를 기다리는 경우 프로그램이 시간 초과되어 시간 제한 초과 오류가 발생합니다.시간 제한 초과 오류 대신 잘못된 응답을 받도록 프로그램을 정각에 종료해야하는 것은 사용자의 책임입니다.평소와 같이 메모리 제한을 초과하거나 프로그램에 런타임 오류가 발생하면 적절한 판단을 받게됩니다.
//
//제한
//1 ≤ T ≤ 50.
//제한 시간 : 테스트 세트 당 20 초.
//메모리 제한 : 1GB.
//
//테스트 세트 1 (보이기)
//W = 6.
//
//테스트 세트 2 (숨김)
//W = 2이다.
//
//테스트 도구
//이 테스트 도구를 사용하여 로컬 또는 서버에서 테스트 할 수 있습니다.로컬에서 테스트하려면 코드와 함께 도구를 실행해야합니다.당신은 우리의 인터랙티브 러너 를 사용할 수 있습니다.자세한 내용 은 FAQ 의 대화 형 문제 섹션 을 참조하십시오.
//
//로컬 테스트 도구
//로컬 테스트를 용이하게하기 위해 다음과 같은 스크립트를 제공합니다.지침은 내부에 포함되어 있습니다.더 나은 테스트를 위해 더 많은 테스트 케이스를 추가하는 것이 좋습니다.테스트 도구는 판단 시스템을 시뮬레이션하기위한 것이지만 실제 판단 시스템 은 아니며 다르게 작동 할 수도 있습니다.
//
//코드가 테스트 도구를 통과했지만 실제 판사가 실패한 경우 FAQ 의 코딩 섹션 에서 동일한 컴파일러를 사용하고 있는지 확인하십시오.
//
//
//샘플 상호 작용
//이 상호 작용은 테스트 세트 1에 해당합니다.우리에게 알려지지 않았지만 판사는 Odin이 0 일 끝에 6 가지 유형 중 하나의 링을 가지고 있다고 판단했다고 가정합니다.
//
//t, w = readline_int_list() // t를 50, w를 6으로 읽어 들인다.
//printline 3에서 stdout // 3 일째를 묻는다.
//stdout을 내리다
//n = readline_int() // n을 15로 읽습니다.
//printline 1을 stdout에 // 요일 1에 대해 묻습니다.
//stdout을 내리다
//n = readline_int() // 7을 n으로 읽습니다.
//printline 1 1 1 4 0 0 ~표준 출력
//stdout // // 우리가 가질 수 있다고해도 우리는 추측을합니다.
//							 // 4 번 이상 우물을 질렀다.
//	verdict = readline_int() // -1을 판결로 읽습니다.
//								 // 해결책이 잘못되었습니다.)
//	exit / / 모호한 TLE 오류를 피하기 위해 종료합니다.
//	비록 추측이 우리가 판사로부터받은 정보와 일치한다고해도 올바른 값을 찾지 못했기 때문에 우리는 여전히 틀 렸습니다.
//
// // //
