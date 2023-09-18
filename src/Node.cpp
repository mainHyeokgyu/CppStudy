#include <iostream>
#include "Node.h"


Node::Node(int my_value){
    value = my_value;
    next = nullptr;
    prev = nullptr;
}
Node::Node(){
    value = 0;
    next = nullptr;
    prev = nullptr;
}
