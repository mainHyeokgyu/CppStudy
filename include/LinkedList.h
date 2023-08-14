#pragma once

class List {
private: // 일반적으로 멤버 변수 선언
	class Node {
	public:
		int value;
		Node* next;
		Node* prev; // class -> 접근못하게 할 경우 사용하는 예시가 많음, public으로 사용할 거라면 struct가 가독성에 더 좋음
	};
	Node* headnode = new Node;
	int node_num; //header파일이 노출됨 cpp파일에서 초기화 하는것을 권장
public: // 일반적으로 멤버 함수 선언
	List();
	void Insert(const int value); //const 붙이나 안붙이나 차이 없음(call by value이기 때문)
	void Print(const int index) const; //멤버 변수가 변하지 않는 상황에서는 const를 붙여주는 것이 좋다.(읽는사람의 가독성)
	void Delete(const int index); //축약어 사용 x
};

// 초기화 연산 > 대입 연산 -> 초기화 연산 적극적 사용
// 웬만하면 모든 변수 초기화(성능 상관 x)
// 전방선언?
// auto 적극적 사용(auto *)
// 강한 예외 보장(멤버변수를 가능한 마지막에 조정)
// 매개변수 포인터변수일 때 값이 변한다면 const를 안 붙이는게 맞음
// eigen library(선형대수 라이브러리)
