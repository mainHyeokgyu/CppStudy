#include <iostream>
#include "LinkedList.h"

using namespace std;

List::List() {
	headnode->next = nullptr;
	headnode->prev = nullptr;
	headnode->value = 0; //NULL(목적이 많음) 사용대신 0이 더 가독성에 좋음
	node_num = 0;//header파일에서 변수 초기화시 노출위험, cpp파일에서 초기화 하는것을 권장
}

void List::Insert(int value) {

	if (headnode->next == nullptr) {

		headnode->prev = headnode;
		headnode->next = headnode;
		headnode->value = value;

		node_num = 1;
	}
	else {
		Node* newnode = new Node;
		newnode->value = value;
		
		newnode->prev = headnode;
		newnode->next = headnode->next;
		headnode->next = newnode;
		newnode->next->prev = newnode;

		node_num++;
	}
}

void List::Print(int index) const {
	auto* tempnode = headnode;
	for (int count(0); count < index; count++) {	// 초기화 연산자
		tempnode = tempnode->next;
	}
	cout << index << "번째 노드의 값은 " << tempnode->value << std::endl;
}

void List::Delete(const int index) {
	auto* tempnode = headnode;
	for (int count(0); count < index; count++) { // for문 안에 count 변수 선언 -> 가독성
		tempnode = tempnode->next;
	}
	tempnode->prev->next = tempnode->next;
	tempnode->next->prev = tempnode->prev;
	if (index == 0) {
		headnode = headnode->next;
	}

	delete(tempnode);
	node_num--; //강한 예외 보장
}