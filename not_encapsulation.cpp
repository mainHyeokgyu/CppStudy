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

class ColdPatient{
public:
    void TakeSinivelCap(const SinivelCap &cap){
        cap.Take();
    }
    void TakeSneezeCap(const SneezeCap &cap){
        cap.Take();
    }
    void TakeSnuffleCap(const SnuffleCap &cap){
        cap.Take();
    }
};

int main(void){
    SinivelCap scap;
    SneezeCap zcap;
    SnuffleCap ncap;

    ColdPatient snufferer;
    snufferer.TakeSinivelCap(scap);
    snufferer.TakeSneezeCap(zcap);
    snufferer.TakeSnuffleCap(ncap);

    return 0;
}