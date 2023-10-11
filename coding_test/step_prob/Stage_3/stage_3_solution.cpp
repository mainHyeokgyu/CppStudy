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
#include <iostream>
using namespace std;

void calc_prices(int total_price, int n)
{
    int *price = new int[n];
    int *num = new int[n];
    int total(0);
    for(int i=0;i<n;i++)
    {
        cin>>price[i]>>num[i];
        total+=price[i]*num[i];
    }
    
    if(total_price==total)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }

    delete[] price;
    delete[] num;
}

int main(void)
{
    int total_price(0);
    int num(0);
    cin>>total_price;
    cin>>num;

    calc_prices(total_price, num);

    return 0;
}