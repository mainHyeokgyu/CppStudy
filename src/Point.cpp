#include <iostream>
#include "Point.h"

using namespace std;

bool Point::InitMembers(int xpos, int ypos){
    if(xpos < 0 || xpos > 100 || ypos <0 || ypos > 100){
        cout<<"잘못된 값 전달"<<endl;
        return false;
    }
    x = xpos;
    y = ypos;
    return true;
}

int Point::GetX(){
    return x;
}

int Point::GetY(){
    return y;
}

bool Point::SetX(int xpos){
    if (xpos > 100 || xpos < 0){
        cout<<"잘못된 값 전달"<<endl;
        return false;
    }
    x = xpos;
    return true;
}

bool Point::SetY(int ypos){
    if (ypos > 100 || ypos < 0){
        cout<<"잘못된 값 전달"<<endl;
        return false;
    }
    y = ypos;
    return true;
}