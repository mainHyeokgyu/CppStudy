#include <iostream>
// Class [변수명]();과 같은 방식은 생성자를 디폴트로 호출하는 것이 아닌 함수의 원형 선언으로 인식한다.
// 그에대한 예시 코드
using namespace std;

class SimpleClass
{
private:
    int num1;
    int num2;
public:
    SimpleClass(int n1 = 0, int n2 = 0){
        num1 = n1;
        num2 = n2;
    }
    void ShowData() const{
        cout<<num1<<' '<<num2<<endl;
    }
};

int main(void){
    SimpleClass sc1();// 함수의 원형 선언으로 인식함
    SimpleClass mysc = sc1();

    mysc.ShowData();
    return 0;
}

SimpleClass sc1(){ //함수 정의 부분
    SimpleClass sc(20,30);
    return sc;
}