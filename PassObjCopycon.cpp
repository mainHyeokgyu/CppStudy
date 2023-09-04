#include <iostream>
using namespace std;

// 복사 생성자의 호출 시점에 대한 example
// 함수호출(Call-by-value) 과정에서 객체를 인자로 전달하는 경우

class SoSimple
{
private:
    int num;
public:
    SoSimple(int n) : num(n)
    { }
    SoSimple(const SoSimple &copy) : num(copy.num)
    { 
        cout<<"Called SoSimple(const SoSimple &copy)"<<endl;
    }
    void ShowData()
    {
        cout<<"num: "<<num<<endl;
    }
};

void SimpleFuncObj(SoSimple ob)
{
    ob.ShowData();
}

int main(void)
{
    SoSimple obj(7);
    cout<<"Before call function"<<endl;
    SimpleFuncObj(obj);
    cout<<"After call function"<<endl;
    return 0;
}