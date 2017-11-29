#include <iostream>
#include "stack.h"

int main(){
	stack s1;
	for (int i = 0; i <= 10; i++)
        s1.push(i);
    for (int i = 0; i <= 10; i++)
        std::cout << s1.pop() << std::endl;
    std::cout << "is stack empty? " << s1.isEmpty();
	return 0;
}
