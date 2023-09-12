#include <iostream>
using namespace std;
// 복사 생성자의 호출 시점에 대한 example
// 함수가 함수 내 지역변수를 반환할 때

class SoSimple
{
private:
    int num;
public:
    SoSimple(int n) : num(n)
    { }
    SoSimple(const SoSimple& copy) : num(copy.num)
    { 
        cout<<"Called SoSimiple(const SoSimple& copy)"<<endl;
    }
    SoSimple& AddNum(int n)
    {
        num += n;
        return *this;
    }
    void ShowData()
    {
        cout<<"num: "<<num<<endl;
    }
};

SoSimple SimpleFuncObj(SoSimple ob)
{
    cout<<"before return"<<endl;
    return ob;
}

int main(void)
{
    SoSimple obj(7);
    SimpleFuncObj(obj).AddNum(30).ShowData();
    obj.ShowData();
    return 0;
}