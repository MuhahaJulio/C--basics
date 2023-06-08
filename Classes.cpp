#include <iostream>
#include "Tree.h"
#include <vector>

int main()
{
	Tree tree;
	tree.addChildren(123, 0);
	std::cout << tree.findById(123).getParent() << std::endl;
}

