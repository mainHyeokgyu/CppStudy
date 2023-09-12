// ==========================================================================
// #1000
// 문제 : ICPC Bangkok Regional에 참가하기 위해 수완나품 국제공항에 막 도착한 팀 레드시프트 일행은
//        눈을 믿을 수 없었다. 공항의 대형 스크린에 올해가 2562년이라고 적혀 있던 것이었다.
//        불교 국가인 태국은 불멸기원(佛滅紀元), 즉 석가모니가 열반한 해를 기준으로 연도를 세는
//        불기를 사용한다. 반면, 우리나라는 서기 연도를 사용하고 있다.
//        불기 연도가 주어질 때 이를 서기 연도로 바꿔 주는 프로그램을 작성하시오.
// 입력 : 서기 연도를 알아보고 싶은 불기 연도 y가 주어진다. (1000 ≤ y ≤ 3000)
// 출력 : 불기 연도를 서기 연도로 변환한 결과를 출력한다. 서기 = 불기 - 543
// ==========================================================================
// #include <iostream>
// using namespace std;

// void changeyear(int year);

// int main(void)
// {
//     int year(0);
//     cin>>year;
//     changeyear(year);    
    
//     return 0;
// }

// void changeyear(int year)
// {
//     cout<<year-543;
// }

// ==========================================================================
// #10430
// 문제 : (A+B)%C는 ((A%C) + (B%C))%C 와 같을까?
//        (A×B)%C는 ((A%C) × (B%C))%C 와 같을까?
//        세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 A, B, C가 순서대로 주어진다. (2 ≤ A, B, C ≤ 10000)
// 출력 : 첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C, 셋째 줄에 (A×B)%C,
//        넷째 줄에 ((A%C) × (B%C))%C를 출력한다.
// ==========================================================================
// #include <iostream>
// using namespace std;

// void print_remain(int num1, int num2, int num3);

// int main(void)
// {
//     int A(0), B(0), C(0);
//     cin>>A>>B>>C;
//     print_remain(A, B, C);

//     return 0;
// }

// void print_remain(int num1, int num2, int num3)
// {
//     cout<<(num1+num2)%num3<<endl;
//     cout<<((num1%num3)+(num2%num3))%num3<<endl;
//     cout<<(num1*num2)%num3<<endl;
//     cout<<((num1%num3)*(num2%num3))%num3<<endl;
// }

// ==========================================================================
// #2588
// 링크 : https://www.acmicpc.net/problem/2588
// 문제 : (세 자리 수) × (세 자리 수)는 다음과 같은 과정을 통하여 이루어진다.
//        (1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때 (3), (4), (5), (6)위치에 들어갈 값을
//        구하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 (1)의 위치에 들어갈 세 자리 자연수가,
//        둘째 줄에 (2)의 위치에 들어갈 세자리 자연수가 주어진다.
// 출력 : 첫째 줄부터 넷째 줄까지 차례대로 (3), (4), (5), (6)에 들어갈 값을 출력한다.
// ==========================================================================
// #include <iostream>
// using namespace std;

// void multiply(int num1, int num2);

// int main(void)
// {
//     int num1(0), num2(0);
//     cin>>num1;
//     cin>>num2;
//     multiply(num1, num2);

//     return 0;
// }

// void multiply(int num1, int num2)
// {
//     int q1 = num2 % 10;
//     int q2 = (num2/10)%10;
//     int q3 = ((num2/10)/10);

//     int multi1=num1*q1;
//     int multi2=num1*q2;
//     int multi3=num1*q3;

//     int result=multi3*100+multi2*10+multi1;

//     cout<<num1*q1<<endl;
//     cout<<num1*q2<<endl;
//     cout<<num1*q3<<endl;
//     cout<<result<<endl;
// }

// ==========================================================================
// #11382
// 링크 : https://www.acmicpc.net/problem/11382
// 문제 : 꼬마 정민이는 이제 A + B 정도는 쉽게 계산할 수 있다. 이제 A + B + C를 계산할 차례이다!
// 입력 : 첫 번째 줄에 A, B, C (1 ≤ A, B, C ≤ 10^12)이 공백을 사이에 두고 주어진다.
// 출력 : A+B+C의 값을 출력한다.
// ==========================================================================
#include <iostream>
using namespace std;

void plusfunc(long long num1, long long num2, long long num3);

int main(void)
{
    long long num1(0), num2(0), num3(0);
    cin>>num1>>num2>>num3;
    plusfunc(num1, num2, num3);

    return 0;
}

void plusfunc(long long num1, long long num2, long long num3)
{
    cout<<num1+num2+num3<<endl;
}