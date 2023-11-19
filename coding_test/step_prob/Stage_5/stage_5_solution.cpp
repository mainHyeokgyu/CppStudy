// ==========================================================================
// #27866
// 링크 : https://www.acmicpc.net/problem/27866
// 문제 : 단어 S와 정수 i가 주어졌을 때, S의 i번째 글자를 출력하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 영어 소문자와 대문자로만 이루어진 단어 S가 주어진다. 단어의 길이는 최대 
//        1,000이다. 둘째 줄에 정수 i가 주어진다. (1 <= i <= |S|)
// 출력 :  S의 i번째 글자를 출력한다.
// ==========================================================================
// #include <iostream>
// using namespace std;

// int main(void)
// {
//     string ss;
//     int i(0);
//     cin>>ss;
//     cin>>i;
//     cout<<ss[i-1]<<endl;

//     return 0;
// }

// ==========================================================================
// #2743
// 링크 : https://www.acmicpc.net/problem/2743
// 문제 : 알파벳으로만 이루어진 단어를 입력받아, 그 길이를 출력하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 영어 소문자와 대문자로만 이루어진 단어가 주어진다. 단어의 길이는 최대 100이다.
// 출력 : 첫째 줄에 입력으로 주어진 단어의 길이를 출력한다.
// ==========================================================================
// #include <iostream>

// using namespace std;

// int main(void)
// {
//     string ss;
//     cin>>ss;

//     cout<<ss.length()<<endl;

//     return 0;
// }

// ==========================================================================
// #9086
// 링크 : https://www.acmicpc.net/problem/9086
// 문제 : 문자열을 입력으로 주면 문자열의 첫 글자와 마지막 글자를 출력하는 프로그램을 작성하시오.
// 입력 : 입력의 첫 줄에는 테스트 케이스의 개수 T(1 ≤ T ≤ 10)가 주어진다. 각 테스트 케이스는
//        한 줄에 하나의 문자열이 주어진다. 문자열은 알파벳 A~Z 대문자로 이루어지며 알파벳 사이에
//        공백은 없으며 문자열의 길이는 1000보다 작다.
// 출력 : 각 테스트 케이스에 대해서 주어진 문자열의 첫 글자와 마지막 글자를 연속하여 출력한다.
// ==========================================================================
// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int test_num(0);
//     cin>>test_num;
//     string *ss = new string[test_num];
//     string temp;
//     for(int i=0; i<test_num; i++)
//     {
//         cin>>temp;
//         cout<<temp[0]<<temp[temp.length()-1]<<endl;
//     }
//     return 0;
// }

// ==========================================================================
// #11654
// 링크 : https://www.acmicpc.net/problem/11654
// 문제 : 알파벳 소문자, 대문자, 숫자 0-9중 하나가 주어졌을 때,
//        주어진 글자의 아스키 코드값을 출력하는 프로그램을 작성하시오.
// 입력 : 알파벳 소문자, 대문자, 숫자 0-9 중 하나가 첫째 줄에 주어진다.
// 출력 : 입력으로 주어진 글자의 아스키 코드 값을 출력한다.
// ==========================================================================
// #include <iostream>

// using namespace std;

// int main(void)
// {
//     char c;
//     cin>>c;
//     cout<<(int)c<<endl;

//     return 0;
// }

// ==========================================================================
// #11720
// 링크 : https://www.acmicpc.net/problem/11720
// 문제 : N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에 숫자 N개가 공백없이 주어진다.
// 출력 : 입력으로 주어진 숫자 N개의 합을 출력한다.
// ==========================================================================
#include <iostream>

using namespace std;

int main()
{
    int num(0), sum(0);
    char ch;

    cin>>num;

    for(int i=0; i<num; i++)
    {
        cin>>ch;
        sum += ch-48; // 1 ascii code = 49
    }
    cout<<sum<<endl;
    return 0;
}