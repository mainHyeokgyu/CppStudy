#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
using namespace std;

int main() {
	List test;
	int select(0);
	int value(0);
	int index(0);
	int node_num(0);
	while(1){
		cout<<"======================================"<<endl;
		cout<<"    1. input  2. delete  3. print"<<endl;
		cout<<"enter the number what you want : ";
		cin>>select;
		cout<<"======================================"<<endl;
		switch(select)
		{

			case 1:
				cout<<"please enter the input value : ";
				cin>>value;
				test.Insert(value);
				node_num++;
				break;

			case 2:
				cout<<"please enter the index of delete vallue : ";
				cin>>index;
				test.Delete(index);
				node_num--;
				break;
			case 3:
				cout<<"**********Value List*************"<<endl;
				for (int i(0); i < node_num; i++){
					test.Print(i);
				}
				cout<<"**********Value List*************"<<endl;
				break;
			default:
				cout<<"Unknown number!"<<endl;
				break;
		}
	}
	return 0;
}