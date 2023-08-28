#include <iostream>
// Constructor(생성자) 오버로딩, 디폴트 값 설정 예시
using namespace std;

class SimpleClass
{
private:
    int num1;
    int num2;
public:
    SimpleClass(){
        num1 = 0;
        num2 = 0;
    }
    SimpleClass(int n){
        num1 = n;
        num2 = 0;
    }
    SimpleClass(int n1, int n2){
        num1 = n1;
        num2 = n2;
    }
    /*SimpleClass(int n1 = 0, int n2 = 0){
        num1 = n1;
        num2 = n2;
    }*/
    void ShowData() const{
        cout<<num1<<' '<<num2<<endl;
    }
};

int main(void){
    SimpleClass sc1;// 함수의 원형 선언과의 구별을 위해 SimpleClass sc1();과 같은 형태의 사용을 금지한다.
    sc1.ShowData(); // 0 0

    SimpleClass sc2(100);
    sc2.ShowData(); // 100 0

    SimpleClass sc3(100, 200);
    sc3.ShowData(); // 100 200
    return 0;
}