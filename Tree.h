#pragma once
#include "Element.h"
#include <vector>

class Tree:Element
{
private:
	std::vector<Element> elements;
public:
	Tree();
	~Tree();
	void addChildren(int id, int parent);
	Element findById(int id);
	std::vector<Element> getElements();
};

