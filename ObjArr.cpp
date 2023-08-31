#include <iostream>
#include <cstring>

using namespace std;

class Person{
private:
    char* name;
    int age;
public:
    Person(const char * myname, int myage = 0) : age(myage){
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy(name, myname);
    }
    Person(){
        name=nullptr;
        age=0;
        cout<<"called Person"<<endl;
    }
    void SetPersonInfo(char* myname, int myage){
        name = myname;
        age = myage;
    }
    void ShowPersonInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
    ~Person(){
        delete[] name;
        cout<<"called destructor!"<<endl;
    }
};

int main(void){
    Person person[3];
    char namestr[100];
    char *strptr;
    int age;
    int len;

    for(int i=0;i<3;i++){
        cout<<"Name: ";
        cin>>namestr;
        len=strlen(namestr)+1;
        strptr = new char[len];
        strcpy(strptr, namestr);
        cout<<"Age: ";
        cin>>age;
        person[i].SetPersonInfo(strptr, age);
    }
    person[0].ShowPersonInfo();
    person[1].ShowPersonInfo();
    person[2].ShowPersonInfo();
    return 0;
}