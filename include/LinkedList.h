#pragma once

class Node; //전방선언

class List {
private: // 일반적으로 멤버 변수 선언
	Node* headnode; //포인터 변수이므로 8Byte 인 것을 알고있으므로 가능 (Node headnode = value; 라면 Node가 몇 byte인지 몰라서 불가능)
	int node_num;
public:
	List();
	void Insert(const int value);
	void Print(const int index) const;
	void Delete(const int index);
};

// 초기화 연산 > 대입 연산 -> 초기화 연산 적극적 사용
// 웬만하면 모든 변수 초기화(성능 상관 x)
// 전방선언?
// auto 적극적 사용(auto *)
// 강한 예외 보장(멤버변수를 가능한 마지막에 조정)
// 매개변수 포인터변수일 때 값이 변한다면 const를 안 붙이는게 맞음
// eigen library(선형대수 라이브러리)
