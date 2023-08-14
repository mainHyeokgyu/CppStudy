#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
using namespace std;

int main() {
	List test;
	int value(0);
	for (int i(0); i < 3; i++) {
		cout << "input value : ";
		cin >> value;
		test.Insert(value);
	}
	int index;
	for (int i(0); i < 3; i++) {
		test.Print(i);
	}
	cout << "insert index of delete node : ";
	cin >> index;
	test.Delete(index);
	for (int i(0); i < 2; i++) {
		test.Print(i);
	}
	return 0;
}