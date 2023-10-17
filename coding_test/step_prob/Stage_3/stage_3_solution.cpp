// ==========================================================================
// #2739
// 링크 : https://www.acmicpc.net/problem/2739
// 문제 : N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오.
//        출력 형식에 맞춰서 출력하면 된다.
// 입력 : 첫째 줄에 N이 주어진다. N은 1보다 크거나 같고, 9보다 작거나 같다.
// 출력 : 출력형식과 같게 N*1부터 N*9까지 출력한다.
// ==========================================================================
// #include <iostream>
// using namespace std;

// void Multiply(int n)
// {
//     for(int i=0; i < 9; i++)
//     {
//         cout<<n<<" * "<<i+1<<" = "<<n*(i+1)<<endl;
//     }
// }

// int main(void)
// {
//     int n(0);
//     cin>>n;
//     Multiply(n);

//     return 0;
// }

// ==========================================================================
// #10950
// 링크 : https://www.acmicpc.net/problem/10950
// 문제 : 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
//        각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
// 출력 : 각 테스트 케이스마다 A+B를 출력한다.
// ==========================================================================
// #include <iostream>

// using namespace std;

// void Add(int n)
// {
//     int* arr_A = new int[n];
//     int* arr_B = new int[n]; //동적할당
//     for(int i=0; i<n; i++) 
//     {
//         cin>>arr_A[i]>>arr_B[i];
//     }
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr_A[i]+arr_B[i]<<endl;
//     }
//     delete[] arr_A;
//     delete[] arr_B;
// }

// int main(void)
// {
//     int n(0);
//     cin>>n;
//     Add(n);

//     return 0;
// }

// ==========================================================================
// #8393
// 링크 : https://www.acmicpc.net/problem/8393
// 문제 : n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.
// 출력 : 1부터 n까지 합을 출력한다.
// ==========================================================================
// #include <iostream>
// using namespace std;

// void sum(int n)
// {
//     int sum(0);
//     for(int i=1;i<=n;i++)
//     {
//         sum+=i;
//     }
//     cout<<sum;
// }

// int main(void)
// {
//     int n(0);
//     cin>>n;
//     sum(n);
// }

// ==========================================================================
// #25304
// 링크 : https://www.acmicpc.net/problem/25304
// 문제 : 준원이는 저번 주에 살면서 처음으로 코스트코를 가 봤다. 정말 멋졌다. 그런데,
//        몇 개 담지도 않았는데 수상하게 높은 금액이 나오는 것이다! 준원이는 영수증을
//        보면서 정확하게 계산된 것이 맞는지 확인해보려 한다. 영수증에 적힌,
//        1. 구매한 각 물건의 가격과 개수 2.구매한 물건들의 총 금액을 보고,
//        구매한 물건의 가격과 개수로 계산한 총 금액이 영수증에 적힌 총 금액과 일치하는지 검사해보자.
// 입력 : 첫째 줄에는 영수증에 적힌 총 금액 X가 주어진다.
//        둘째 줄에는 영수증에 적힌 구매한 물건의 종류의 수 N이 주어진다.
//        이후 N개의 줄에는 각 물건의 가격 a와 개수 b가 공백을 사이에 두고 주어진다.
// 출력 : 구매한 물건의 가격과 개수로 계산한 총 금액이 영수증에 적힌 총 금액과 일치하면 Yes를 출력한다.
//        일치하지 않는다면 No를 출력한다.
// ==========================================================================
// #include <iostream>
// using namespace std;

// void calc_prices(int total_price, int n)
// {
//     int *price = new int[n];
//     int *num = new int[n];
//     int total(0);
//     for(int i=0;i<n;i++)
//     {
//         cin>>price[i]>>num[i];
//         total+=price[i]*num[i];
//     }
    
//     if(total_price==total)
//     {
//         cout<<"Yes";
//     }
//     else
//     {
//         cout<<"No";
//     }

//     delete[] price;
//     delete[] num;
// }

// int main(void)
// {
//     int total_price(0);
//     int num(0);
//     cin>>total_price;
//     cin>>num;

//     calc_prices(total_price, num);

//     return 0;
// }

// ==========================================================================
// #25314
// 링크 : https://www.acmicpc.net/problem/25314
// 문제 : 오늘은 혜아의 면접 날이다. 면접 준비를 열심히 해서 앞선 질문들을 잘 대답한 혜아는 이제 마지막으로
//        칠판에 직접 코딩하는 문제를 받았다. 혜아가 받은 문제는 두 수를 더하는 문제였다. C++ 책을 열심히 
//        읽었던 혜아는 간단히 두 수를 더하는 코드를 칠판에 적었다. 코드를 본 면접관은 다음 질문을 했다.
//        “만약, 입출력이 N바이트 크기의 정수라면 프로그램을 어떻게 구현해야 할까요?”
//        혜아는 책에 있는 정수 자료형과 관련된 내용을 기억해 냈다. 책에는 long int는 
//        4바이트 정수까지 저장할 수 있는 정수 자료형이고 long long int는 
//        8바이트 정수까지 저장할 수 있는 정수 자료형이라고 적혀 있었다. 혜아는 이런 생각이 들었다.
//        “int 앞에 long을 하나씩 더 붙일 때마다 4바이트씩 저장할 수 있는 공간이 늘어나는 걸까? 분명 long long long int는 
//        12바이트, long long long long int는 16바이트까지 저장할 수 있는 정수 자료형일 거야!” 그렇게 혜아는 당황하는
//        면접관의 얼굴을 뒤로한 채 칠판에 정수 자료형을 써 내려가기 시작했다. 혜아가 N바이트 정수까지 저장할 수 있다고 생각해서
//        칠판에 쓴 정수 자료형의 이름은 무엇일까?
// 입력 : 첫 번째 줄에는 문제의 정수 N이 주어진다. (4< N <10,000; N은 4의 배수)
// 출력 : 혜아가 N바이트 정수까지 저장할 수 있다고 생각하는 정수 자료형의 이름을 출력하여라.
// ==========================================================================
// #include <iostream>
// using namespace std;

// int main(void)
// {
//     int n(0);
//     cin>>n;
//     for(int i=0;i<n/4;i++)
//     {
//         cout<<"long ";
//     }
//     cout<<"int";

//     return 0;
// }

// ==========================================================================
// #15552
// 링크 : https://www.acmicpc.net/problem/15552
// 문제 : 본격적으로 for문 문제를 풀기 전에 주의해야 할 점이 있다. 입출력 방식이 느리면 여러 줄을 입력받거나 출력할 때
//        시간초과가 날 수 있다는 점이다. C++을 사용하고 있고 cin/cout을 사용하고자 한다면,
//        cin.tie(NULL)과 sync_with_stdio(false)를 둘 다 적용해 주고, endl 대신 개행문자(\n)를 쓰자.
//        단, 이렇게 하면 더 이상 scanf/printf/puts/getchar/putchar 등 C의 입출력 방식을 사용하면 안 된다.
//        또한 입력과 출력 스트림은 별개이므로, 테스트케이스를 전부 입력받아서 저장한 뒤 전부 출력할 필요는 없다.
//        테스트케이스를 하나 받은 뒤 하나 출력해도 된다.
// 입력 : 첫 줄에 테스트케이스의 개수 T가 주어진다. T는 최대 1,000,000이다. 다음 T줄에는 각각 두 정수 A와 B가 주어진다. A와 B는 1 이상, 1,000 이하이다.
// 출력 : 각 테스트케이스마다 A+B를 한 줄에 하나씩 순서대로 출력한다.
// ==========================================================================
// #include <iostream>

// using namespace std;

// void add(int n);

// int main(void)
// {
//     cin.tie(NULL);
//     ios_base::sync_with_stdio(false);

//     int n(0);
//     cin>>n;
//     add(n);

//     return 0;
    
// }

// void add(int n)
// {
//     int* A=new int[n];
//     int* B=new int[n];
//     int* result=new int[n];
//     int temp_A(0), temp_B(0);
//     for(int i=0; i<n; i++)
//     {
//         cin>>temp_A>>temp_B;
//         A[i]=temp_A;
//         B[i]=temp_B;
//         result[i]=A[i]+B[i];
//     }
//     for(int i=0; i<n; i++)
//     {
//         cout<<result[i]<<"\n";
//     }
//     delete[] A;
//     delete[] B;
//     delete[] result;
// }

// ==========================================================================
// #11021
// 링크 : https://www.acmicpc.net/problem/11021
// 문제 : 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
//        각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
// 출력 : 각 테스트 케이스마다 "Case #x: "를 출력한 다음, A+B를 출력한다. 테스트 케이스 번호는 1부터 시작한다.
// ==========================================================================
// #include <iostream>

// using namespace std;

// void add(int n);

// int main(void)
// {
//     cin.tie(NULL);
//     ios_base::sync_with_stdio(false);

//     int n(0);
//     cin>>n;
//     add(n);

//     return 0;
    
// }

// void add(int n)
// {
//     int* A=new int[n];
//     int* B=new int[n];
//     int* result=new int[n];
//     int temp_A(0), temp_B(0);
//     for(int i=0; i<n; i++)
//     {
//         cin>>temp_A>>temp_B;
//         A[i]=temp_A;
//         B[i]=temp_B;
//         result[i]=A[i]+B[i];
//     }
//     for(int i=0; i<n; i++)
//     {
//         cout<<"Case #"<<i+1<<": "<<result[i]<<"\n";
//     }
//     delete[] A;
//     delete[] B;
//     delete[] result;
// }

// ==========================================================================
// #11022
// 링크 : https://www.acmicpc.net/problem/11022
// 문제 : 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
//        각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
// 출력 : 각 테스트 케이스마다 "Case #x: A + B = C" 형식으로 출력한다.
//        x는 테스트 케이스 번호이고 1부터 시작하며, C는 A+B이다.
// ==========================================================================
// #include <iostream>

// using namespace std;

// void add(int n);

// int main(void)
// {
//     cin.tie(NULL);
//     ios_base::sync_with_stdio(false);

//     int n(0);
//     cin>>n;
//     add(n);

//     return 0;
    
// }

// void add(int n)
// {
//     int* A=new int[n];
//     int* B=new int[n];
//     int* result=new int[n];
//     int temp_A(0), temp_B(0);
//     for(int i=0; i<n; i++)
//     {
//         cin>>temp_A>>temp_B;
//         A[i]=temp_A;
//         B[i]=temp_B;
//         result[i]=A[i]+B[i];
//     }
//     for(int i=0; i<n; i++)
//     {
//         cout<<"Case #"<<i+1<<": "<<A[i]<<" + "<<B[i]<<" = "<<result[i]<<"\n";
//     }
//     delete[] A;
//     delete[] B;
//     delete[] result;
// }

// ==========================================================================
// #2438
// 링크 : https://www.acmicpc.net/problem/2438
// 문제 : 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
// 입력 : 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
// 출력 : 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
// ==========================================================================
// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int n(0);
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// ==========================================================================
// #2439
// 링크 : https://www.acmicpc.net/problem/2439
// 문제 : 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
//        하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.
// 입력 : 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
// 출력 : 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
// ==========================================================================
#include <iostream>

using namespace std;

int main(void)
{
    int n(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-(i+1);j++)
        {
            cout<<" ";
        }
        for(int k=0;k<i+1;k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}