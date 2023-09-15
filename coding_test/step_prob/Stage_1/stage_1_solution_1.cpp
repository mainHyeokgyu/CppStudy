// ==========================================================================
//  #2557                        
//  Hello World! 출력하기         
// ==========================================================================
// #include <iostream>
// using namespace std;

// int main(void)
// {
//     cout<<"Hello World!";
    
//     return 0;
// }

// ==========================================================================
// #1000
// 문제 : 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
// 출력 : 첫째 줄에 A+B를 출력한다.
// ==========================================================================
// #include <iostream>
// using namespace std;

// void print_sum(int num1, int num2);

// int main(void)
// {
//     int A=0, B=0;

//     cin>>A>>B;
//     print_sum(A, B);

//     return 0;
// }

// void print_sum(int num1, int num2)
// {
//     cout<<num1+num2;
// }

// ==========================================================================
// #1001
// 문제 : 두 정수 A와 B를 입력받은 다음, A-B를 출력하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
// 출력 : 첫째 줄에 A-B를 출력한다.
// ==========================================================================
// #include <iostream>
// using namespace std;

// void print_minus(int num1, int num2);

// int main(void)
// {
//     int A(0), B(0);

//     cin>>A>>B;
//     print_minus(A, B);

//     return 0;
// }

// void print_minus(int num1, int num2)
// {
//     cout<<num1-num2;
// }

// ==========================================================================
// #10998
// 문제 : 두 정수 A와 B를 입력받은 다음, A*B를 출력하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
// 출력 : 첫째 줄에 A*B를 출력한다.
// ==========================================================================
// #include <iostream>
// using namespace std;

// void print_multiply(int num1, int num2);

// int main(void)
// {
//     int A(0), B(0);

//     cin>>A>>B;
//     print_multiply(A, B);

//     return 0;
// }

// void print_multiply(int num1, int num2)
// {
//     cout<<num1*num2;
// }

// ==========================================================================
// #1008
// 문제 : 두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
// 출력 : 첫째 줄에 A/B를 출력한다.
// ==========================================================================
// #include <iostream>
// using namespace std;

// void print_divide(int num1, int num2);

// int main(void)
// {
//     int A(0), B(0);

//     cin>>A>>B;
//     print_divide(A, B);

//     return 0;
// }

// void print_divide(int num1, int num2)
// {   
//     cout.precision(10);
//     cout<<(double) num1/num2; //float은 6자리 정도만 정확하게 표현 가능
// }

// ==========================================================================
// #10869
// 문제 : 두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오.
// 입력 : 두 자연수 A와 B가 주어진다. (1 ≤ A, B ≤ 10,000)
// 출력 : 첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다.
// ==========================================================================

// #include <iostream>
// using namespace std;

// void print_calculate(int num1, int num2);

// int main(void)
// {
//     int A(0), B(0);
//     cin>>A>>B;
//     print_calculate(A, B);
// }

// void print_calculate(int num1, int num2)
// {
//     cout<<num1+num2<<endl<<num1-num2<<endl<<num1*num2<<endl<<num1/num2<<endl<<num1%num2;
// }

// ==========================================================================
// #10926
// 문제 : 준하는 사이트에 회원가입을 하다가 joonas라는 아이디가 이미 존재하는 것을 보고 놀랐다. 준하는 놀람을 ??!로 표현한다. 준하가 가입하려고 하는 사이트에 이미 존재하는 아이디가 주어졌을 때, 놀람을 표현하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 준하가 가입하려고 하는 사이트에 이미 존재하는 아이디가 주어진다. 아이디는 알파벳 소문자로만 이루어져 있으며, 길이는 50자를 넘지 않는다.
// 출력 : 첫째 줄에 준하의 놀람을 출력한다. 놀람은 아이디 뒤에 ??!를 붙여서 나타낸다.
// ==========================================================================
#include <iostream>
using namespace std;

void print_surprise(const string id);

int main(void)
{
    string id;
    cin>>id;

    print_surprise(id);
    return 0;
}

void print_surprise(const string id)
{
    cout<<id<<"??!"<<endl;
}