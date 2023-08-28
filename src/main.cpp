#include <iostream>
#include "Point.h"
#include "Rectangle.h" 
#include "Point.cpp"
#include "Rectangle.cpp"

using namespace std;
// 클래스 정보은닉(Information Hiding)관련 예제
//          <조건>
// 1. Point, Rectangle 클래스 생성
// 2. Point class       - x, y 좌표값 제한된 방법으로의 접근만 허용
//                      - 멤버변수 (x, y) ※x, y값 범위 : 0~100
//                      - 멤버함수 (InitMembers, GetX, GetY, SetX, SetY)
// ----------------------------------------------------------------------
// 3. Rectangle class   - upLeft, lowRight 값 제한된 방법으로의 접근만 허용
// 3. Rectangle class   - 멤버변수 (upLeft, lowRight)
//                      - 멤버함수 (InitMembers, ShowRecInfo)

int main(){
    Point pos1;
    if(!pos1.InitMembers(-2, 4)){
        cout<<"초기화 실패1"<<endl;
    }
    if(!pos1.InitMembers(2,4)){
        cout<<"초기화 실패2"<<endl;
    }

    Point pos2;
    if(!pos2.InitMembers(5,9)){
        cout<<"초기화 실패3"<<endl;
    }

    Rectangle rect1;
    if(!rect1.InitMembers(pos2, pos1)){
        cout<<"초기화 실패4"<<endl;
    }
    if(!rect1.InitMembers(pos1, pos2)){
        cout<<"초기화 실패5"<<endl;
    }

    rect1.ShowRecInfo();
    return 0;
}