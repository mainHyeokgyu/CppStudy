#include <iostream>
#include <cstring>

using namespace std;

class Computer
{
private:
    char owner[50];
public:
    Computer(char *name)
    {
        strcpy(owner, name);
    }
    void Calculate()
    {
        cout<<"calculate requested comments."<<endl;
    }
};

class notebookComp: public Computer
{
private:
    int battery;
public:
    notebookComp(char* name, int initChag)
    : Computer(name), battery(initChag)
    { }
    void Charging() { battery+=5;}
    void UseBattery() { battery -=1;}
    void MovingCal()
    {
        if(GetBatteryInfo()<1)
        {
            cout<<"need to charge."<<endl;
            return;
        }
        cout<<"while moving ";
        Calculate();
        UseBattery();
    }
    int GetBatteryInfo() { return battery;}
};

class TabletNotebook: public notebookComp
{
private:
    char regstPenModel[50];
public:
    TabletNotebook(char *name, int initChag, char *pen)
    : notebookComp(name, initChag)
    {
        strcpy(regstPenModel, pen);
    }
    void Write(char *penInfo)
    {
        if(GetBatteryInfo()<1)
        {
            cout<<"need to charge."<<endl;
            return;
        }
        if(strcmp(regstPenModel, penInfo)!=0)
        {
            cout<<"not registered pen.";
            return;
        }
        cout<<"write comments are cleared."<<endl;
        UseBattery();
    }
};

int main(void)
{
    notebookComp nc("Lee", 5);
    TabletNotebook tn("Jung", 5, "ISE-241-242");
    nc.MovingCal();
    tn.Write("ISE-241-242");
    return 0;
}