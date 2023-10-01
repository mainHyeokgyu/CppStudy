#pragma once
#include "nodelib_export.h" //generate_export_header를 통해 line 3~7을 추가하지 않아도 include로 해결 가능
// #if defined(Nodelib_EXPORTS)
// 	#define Nodelib_API __declspec(dllexport)
// #else
// 	#define Nodelib_API __declspec(dllimport)
// #endif

class NODELIB_EXPORT Node {
public:
    int value;
    Node* next;
    Node* prev; // class -> 접근못하게 할 경우 사용하는 예시가 많음, public으로 사용할 거라면 struct가 가독성에 더 좋음
    Node(int my_value);
    Node(); //LinkedList.h에 Node 동적할당 하기위한 default 생성자
};