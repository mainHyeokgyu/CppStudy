#include <iostream>
using namespace std;
// 생성자 적용 후 예제
class FruitSeller{
private:
    const int APPLE_PRICE;
    int numOfApples;
    int myMoney;
public:
    FruitSeller(int price, int num, int money)
    : APPLE_PRICE(price), numOfApples(num), myMoney(money) //이니셜라이저 (초기화 연산자)
    //const 멤버변수 이니셜라이저로 초기화 가능 (대입 연산을 통한 초기화로 초기화하면 불가능하다.)
    {
        // 생성자의 몸체부분에서의 대입 연산을 통한 초기화
        // APPLE_PRICE=price;
        // numOfApples=num;
        // myMoney=money;
    }
    int SaleApples(int money){
        int num=money/APPLE_PRICE;
        numOfApples-=num;
        myMoney+=money;
        return num;
    }
    void ShowSalesResult()
    {
        cout<<"남은 사과: "<<numOfApples<<endl;
        cout<<"판맴 수익: "<<myMoney<<endl<<endl;
    }
};

class FruitBuyer{
    int myMoney; //private
    int numOfApples; //private

public:
    FruitBuyer(int money)
    : myMoney(money), numOfApples(0)
    {
        myMoney=money;
        numOfApples=0;
    }
    void BuyApples(FruitSeller &seller, int money)
    {
        numOfApples+=seller.SaleApples(money);
        myMoney-=money;
    }
    void ShowBuyResult()
    {
        cout<<"현재 잔액: "<<myMoney<<endl;
        cout<<"사과 개수: "<<numOfApples<<endl<<endl;
    }
};

int main(void){
    FruitSeller seller(1000, 20 ,0);
    FruitBuyer buyer(5000);
    buyer.BuyApples(seller, 2000);

    cout<<"과일 판매자의 현황"<<endl;
    seller.ShowSalesResult();
    cout<<"과일 구매자의 현황"<<endl;
    buyer.ShowBuyResult();
    return 0;
}