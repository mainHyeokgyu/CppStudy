#include <iostream>

using namespace std;

class SoSimple{
private:
    int num;
public:
    SoSimple(int n) : num(n){
        cout<<"num="<<num<<", ";
        cout<<"address="<<this<<endl;
    }
    SoSimple * GetThisPointer(){
        return this;
    }
    void ShowSimpleData(){
        cout<<num<<endl;
    }
};

int main(void){
    SoSimple sim1(100);
    SoSimple *ptr1 = sim1.GetThisPointer();
    cout<<ptr1<<", ";
    ptr1->ShowSimpleData();

    SoSimple sim2(200);
    SoSimple *ptr2 = sim2.GetThisPointer();
    cout<<ptr2<<", ";
    ptr2->ShowSimpleData();
    return 0;
}