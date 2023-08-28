#include <iostream>

using namespace std;

class SinivelCap{
public:
    void Take() const {
        cout<<"콧물 치료"<<endl;
    }
};

class SneezeCap{
public:
    void Take() const {
        cout<<"재채기 치료"<<endl;
    }
};

class SnuffleCap{
public:
    void Take() const {
        cout<<"코막힘 치료"<<endl;
    }
};

class CONTAC600{
private:
    SinivelCap scap;
    SneezeCap zcap;
    SnuffleCap ncap;
public:
    void Take() const{
        scap.Take();
        zcap.Take();
        ncap.Take();
    }
};

class ColdPatient{
public:
    void TakeCONTAC600(CONTAC600 &contac600) const{
        contac600.Take();
    }
};

int main(void){
    CONTAC600 contac600;
    ColdPatient snufferer;
    snufferer.TakeCONTAC600(contac600);

    return 0;
}