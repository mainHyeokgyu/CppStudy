// ==========================================================================
// #10807
// 링크 : https://www.acmicpc.net/problem/10807
// 문제 : 총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 정수의 개수 N(1 ≤ N ≤ 100)이 주어진다. 둘째 줄에는 정수가 공백으로
//       구분되어져있다. 셋째 줄에는 찾으려고 하는 정수 v가 주어진다.
//        입력으로 주어지는 정수와 v는 -100보다 크거나 같으며, 100보다 작거나 같다.
// 출력 : 첫째 줄에 입력으로 주어진 N개의 정수 중에 v가 몇 개인지 출력한다.
// ==========================================================================
// #include <iostream>
// using namespace std;

// int main(void)
// {
//     int n(0), v(0), find(0);
//     cin>>n;
//     int *arr = new int[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     cin>>v;
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]==v)
//         {
//             find++;
//         }
//     }
//     cout<<find;
//     delete[] arr;

//     return 0;
// }

// ==========================================================================
// #10871
// 링크 : https://www.acmicpc.net/problem/10871
// 문제 : 정수 N개로 이루어진 수열 A와 정수 X가 주어진다.
//        이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 N과 X가 주어진다. (1 ≤ N, X ≤ 10,000)
//        둘째 줄에 수열 A를 이루는 정수 N개가 주어진다. 주어지는 정수는 모두 1보다 크거나 같고,
//        10,000보다 작거나 같은 정수이다.
// 출력 : X보다 작은 수를 입력받은 순서대로 공백으로 구분해 출력한다.
//        X보다 작은 수는 적어도 하나 존재한다.
// ==========================================================================
// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int n(0), x(0);
//     cin>>n>>x;
//     int* arr = new int[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//         if(arr[i]<x)
//         {
//             cout<<arr[i]<<" ";
//         }
//     }
//     delete[] arr;

//     return 0;
// }

// ==========================================================================
// #10818
// 링크 : https://www.acmicpc.net/problem/10818
// 문제 : N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄에는 N개의 정수를
//        공백으로 구분해서 주어진다. 모든 정수는 -1,000,000보다 크거나 같고,
//        1,000,000보다 작거나 같은 정수이다.
// 출력 : 첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.
// ==========================================================================
// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int n(0);
//     cin>>n;
//     int* arr = new int[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     int mini(0), maxi(0);
//     for(int i=0; i<n; i++)
//     {
//         if(i==0)
//         {
//             mini=arr[i];
//             maxi=arr[i];
//         }
//         if(arr[i]<=mini)
//         {
//             mini=arr[i];
//         }
//         if(arr[i]>=maxi)
//         {
//             maxi=arr[i];
//         }
//     }

//     cout<<mini<<" "<<maxi;

//     return 0;
// }

// ==========================================================================
// #2562
// 링크 : https://www.acmicpc.net/problem/2562
// 문제 : 9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를
//        구하는 프로그램을 작성하시오. 예를 들어, 서로 다른 9개의 자연수
//        3, 29, 38, 12, 57, 74, 40, 85, 61 이 주어지면, 이들 중 최댓값은 85이고,
//        이 값은 8번째 수이다.
// 입력 : 첫째 줄부터 아홉 번째 줄까지 한 줄에 하나의 자연수가 주어진다.
//        주어지는 자연수는 100 보다 작다.
// 출력 : 첫째 줄에 최댓값을 출력하고, 둘째 줄에 최댓값이 몇 번째 수인지를 출력한다.
// ==========================================================================
// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int arr[9];
//     int max_num(0), index(0);
//     for(int i=0; i<9; i++)
//     {
//         cin>>arr[i];
//     }

//     for(int i=0; i<9; i++)
//     {
//         if(i==0)
//         {
//             max_num=arr[i];
//             index=i+1;
//         }
//         if(max_num<=arr[i])
//         {
//             max_num=arr[i];
//             index=i+1;
//         }
//     }
//     cout<<max_num<<"\n";
//     cout<<index;

//     return 0;
// }

// ==========================================================================
// #10810
// 링크 : https://www.acmicpc.net/problem/10810
// 문제 : 도현이는 바구니를 총 N개 가지고 있고, 각각의 바구니에는 1번부터 N번까지 번호가 매겨져 있다.
//        또, 1번부터 N번까지 번호가 적혀있는 공을 매우 많이 가지고 있다. 가장 처음 바구니에는
//        공이 들어있지 않으며, 바구니에는 공을 1개만 넣을 수 있다.
//        도현이는 앞으로 M번 공을 넣으려고 한다. 도현이는 한 번 공을 넣을 때,
//        공을 넣을 바구니 범위를 정하고, 정한 바구니에 모두 같은 번호가 적혀있는 공을 넣는다.
//        만약, 바구니에 공이 이미 있는 경우에는 들어있는 공을 빼고, 새로 공을 넣는다.
//        공을 넣을 바구니는 연속되어 있어야 한다.
//        공을 어떻게 넣을지가 주어졌을 때, M번 공을 넣은 이후에 각 바구니에 어떤 공이 들어 있는지
//        구하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 N (1 ≤ N ≤ 100)과 M (1 ≤ M ≤ 100)이 주어진다.
//        둘째 줄부터 M개의 줄에 걸쳐서 공을 넣는 방법이 주어진다. 각 방법은 세 정수 i j k로
//        이루어져 있으며, i번 바구니부터 j번 바구니까지에 k번 번호가 적혀져 있는 공을 넣는다는
//        뜻이다. 예를 들어, 2 5 6은 2번 바구니부터 5번 바구니까지에 6번 공을 넣는다는 뜻이다.
//        (1 ≤ i ≤ j ≤ N, 1 ≤ k ≤ N) 도현이는 입력으로 주어진 순서대로 공을 넣는다.
// 출력 : 1번 바구니부터 N번 바구니에 들어있는 공의 번호를 공백으로 구분해 출력한다.
//        공이 들어있지 않은 바구니는 0을 출력한다.
// ==========================================================================
// #include <iostream>
// using namespace std;

// int main(void)
// {
//     int n(0), m(0);
//     cin>>n>>m;
//     int* basket = new int[n](); //() -> 0으로 초기화
    
//     int min(0), max(0), num(0);
//     for(int i=0; i<m; i++)
//     {
//         cin>>min>>max>>num;
//         for(int j=min; j<=max; j++)
//         {
//             basket[j-1] = num;
//         }
//     }

//     for(int i=0; i<n; i++)
//     {
//         cout<<basket[i]<<" ";
//     }

//     delete[] basket;

//     return 0;
// }

// ==========================================================================
// #10813
// 링크 : https://www.acmicpc.net/problem/10813
// 문제 : 도현이는 바구니를 총 N개 가지고 있고, 각각의 바구니에는 1번부터 N번까지 번호가 매겨져 있다.
//        바구니에는 공이 1개씩 들어있고, 처음에는 바구니에 적혀있는 번호와 같은 번호가 적힌 공이
//        들어있다. 도현이는 앞으로 M번 공을 바꾸려고 한다. 도현이는 공을 바꿀 바구니 2개를 선택하고,
//        두 바구니에 들어있는 공을 서로 교환한다. 공을 어떻게 바꿀지가 주어졌을 때, M번 공을 바꾼
//        이후에 각 바구니에 어떤 공이 들어있는지 구하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 N (1 ≤ N ≤ 100)과 M (1 ≤ M ≤ 100)이 주어진다.
//        둘째 줄부터 M개의 줄에 걸쳐서 공을 교환할 방법이 주어진다. 각 방법은 두 정수 i j로
//        이루어져 있으며, i번 바구니와 j번 바구니에 들어있는 공을 교환한다는 뜻이다.
//        (1 ≤ i ≤ j ≤ N) 도현이는 입력으로 주어진 순서대로 공을 교환한다.
// 출력 : 1번 바구니부터 N번 바구니에 들어있는 공의 번호를 공백으로 구분해 출력한다.
// ==========================================================================
// #include <iostream>
// using namespace std;

// int main(void)
// {
//     int n(0), m(0);
//     cin>>n>>m;
//     int* basket = new int[n](); //() -> 0으로 초기화
//     for(int i=0; i<n; i++)
//     {
//         basket[i]=i+1;
//     }
//     int swap_1(0), swap_2(0), temp(0);
//     for(int i=0; i<m; i++)
//     {
//         cin>>swap_1>>swap_2;
//         temp = basket[swap_1-1];
//         basket[swap_1-1] = basket[swap_2-1];
//         basket[swap_2-1] = temp;
//     }

//     for(int i=0; i<n; i++)
//     {
//         cout<<basket[i]<<" ";
//     }

//     delete[] basket;

//     return 0;
// }

// ==========================================================================
// #5597
// 링크 : https://www.acmicpc.net/problem/5597
// 문제 : X대학 M교수님은 프로그래밍 수업을 맡고 있다. 교실엔 학생이 30명이 있는데,
//        학생 명부엔 각 학생별로 1번부터 30번까지 출석번호가 붙어 있다.
//        교수님이 내준 특별과제를 28명이 제출했는데, 그 중에서 제출 안 한 학생 2명의 출석번호를
//        구하는 프로그램을 작성하시오.
// 입력 : 입력은 총 28줄로 각 제출자(학생)의 출석번호 n(1 ≤ n ≤ 30)가 한 줄에 하나씩 주어진다.
//        출석번호에 중복은 없다.
// 출력 : 출력은 2줄이다. 1번째 줄엔 제출하지 않은 학생의 출석번호 중 가장 작은 것을 출력하고,
//        2번째 줄에선 그 다음 출석번호를 출력한다.
// ==========================================================================
// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int arr[30]={0, };
//     int n(0);
//     for(int i=0; i<28; i++)
//     {
//         cin>>n;
//         arr[n-1]=1;
//     }

//     for(int i=0; i<30; i++)
//     {
//         if(arr[i]!=1)
//         {
//             cout<<i+1<<endl;
//         }
//     }
//     return 0;
// }

// ==========================================================================
// #3052
// 링크 : https://www.acmicpc.net/problem/3052
// 문제 : 두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다.
//        예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다. 
//        수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다.
//        그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.
// 입력 : 첫째 줄부터 열번째 줄 까지 숫자가 한 줄에 하나씩 주어진다.
//        이 숫자는 1,000보다 작거나 같고, 음이 아닌 정수이다.
// 출력 : 첫째 줄에, 42로 나누었을 때, 서로 다른 나머지가 몇 개 있는지 출력한다.
// ==========================================================================
// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int arr[10];
//     int num(0), total(1), remain(0);
//     for(int i=0; i<10; i++)
//     {
//         cin>>num;
//         remain = num%42;
//         if(total==1)
//         {
//             arr[total-1] = remain;
//             total++;
//         }
//         else
//         {
//             for(int j=0; j<total-1; j++)
//             {
//                 if(arr[j]==remain)
//                 {
//                     break;
//                 }
//                 if(j==total-2)
//                 {
//                     arr[total-1]=remain;
//                     total++;
//                     break;
//                 }
//             }
//         }
//     }
//     cout<<total-1<<endl;
//     return 0;
// }

// ==========================================================================
// #10811
// 링크 : https://www.acmicpc.net/problem/10811
// 문제 : 도현이는 바구니를 총 N개 가지고 있고, 각각의 바구니에는 1번부터 N번까지 번호가
//        순서대로 적혀져 있다. 바구니는 일렬로 놓여져 있고, 가장 왼쪽 바구니를 1번째 바구니,
//        그 다음 바구니를 2번째 바구니, ..., 가장 오른쪽 바구니를 N번째 바구니라고 부른다. 
//        도현이는 앞으로 M번 바구니의 순서를 역순으로 만들려고 한다. 도현이는 한 번 순서를
//        역순으로 바꿀 때, 순서를 역순으로 만들 범위를 정하고, 그 범위에 들어있는 바구니의
//        순서를 역순으로 만든다. 바구니의 순서를 어떻게 바꿀지 주어졌을 때, M번 바구니의 순서를
//        역순으로 만든 다음, 바구니에 적혀있는 번호를 가장 왼쪽 바구니부터 출력하는 프로그램을
//        작성하시오.
// 입력 : 첫째 줄에 N (1 ≤ N ≤ 100)과 M (1 ≤ M ≤ 100)이 주어진다.
//        둘째 줄부터 M개의 줄에는 바구니의 순서를 역순으로 만드는 방법이 주어진다.
//        방법은 i j로 나타내고, 왼쪽으로부터 i번째 바구니부터 j번째 바구니의 순서를 역순으로
//        만든다는 뜻이다. (1 ≤ i ≤ j ≤ N)
//        도현이는 입력으로 주어진 순서대로 바구니의 순서를 바꾼다.
// 출력 : 모든 순서를 바꾼 다음에, 가장 왼쪽에 있는 바구니부터 바구니에 적혀있는 순서를
//        공백으로 구분해 출력한다.
// ==========================================================================
// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int n(0), m(0), left(0), right(0), temp(0);
//     cin>>n>>m;
//     int* arr = new int[n];

//     for(int i=0; i<n; i++)
//     {
//         arr[i]=i+1;
//     }
//     for(int i=0; i<m; i++)
//     {
//         cin>>left>>right;
//         int *temp= new int[right-left+1];
//         for(int j=0; j<=(right-left); j++)
//         {
//             temp[j]=arr[right-j-1];
//         }
//         int count(0);
//         for(int k=left-1; k<right; k++)
//         {
//             arr[k]=temp[count];
//             count++;
//         }
//         delete[] temp;
//     }
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     delete[] arr;
//     return 0;
// }

// ==========================================================================
// #1546
// 링크 : https://www.acmicpc.net/problem/1546
// 문제 : 세준이는 기말고사를 망쳤다. 세준이는 점수를 조작해서 집에 가져가기로 했다.
//        일단 세준이는 자기 점수 중에 최댓값을 골랐다. 이 값을 M이라고 한다. 그리고 나서
//        모든 점수를 점수/M*100으로 고쳤다. 예를 들어, 세준이의 최고점이 70이고, 수학점수가
//        50이었으면 수학점수는 50/70*100이 되어 71.43점이 된다. 세준이의 성적을 위의 방법대로
//        새로 계산했을 때, 새로운 평균을 구하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 시험 본 과목의 개수 N이 주어진다. 이 값은 1000보다 작거나 같다.
//        둘째 줄에 세준이의 현재 성적이 주어진다. 이 값은 100보다 작거나 같은 음이 아닌 정수이고,
//        적어도 하나의 값은 0보다 크다.
// 출력 : 첫째 줄에 새로운 평균을 출력한다. 실제 정답과 출력값의 절대오차 또는 상대오차가
//        10^(-2) 이하이면 정답이다.
// ==========================================================================
#include <iostream>

using namespace std;

int main(void)
{
    int num(0);
    cin>>num;
    float *score = new float[num];
    float temp_score(0.), max_score(0.), total_score(0.);
    int max_index(0);
    for(int i=0; i<num; i++)
    {
        cin>>temp_score;
        score[i]=temp_score;

        if(temp_score>max_score)
        {
            max_score = temp_score;
            max_index = i;
        }
    }
    cout<<"max score: "<<max_score<<endl;
    cout<<"max index: "<<max_index<<endl;
    for(int i=0; i<num; i++)
    {

        score[i] = score[i] / max_score * 100;

        cout<<"score["<<i<<"]: "<<score[i]<<endl;
    }
    
    for(int i=0; i<num; i++)
    {
        total_score += score[i];
    }

    cout<<total_score / num<<endl;

    delete[] score;
    return 0;
}