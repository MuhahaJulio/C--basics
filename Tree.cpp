#include "Tree.h"
#include <vector>
#include "Element.h"


Element Tree::findById(int id) {
	std::vector<Element> elements = getElements();
	for (int i = 0; i < elements.size(); i++) 
		if (elements[i].getId() == id) {
			return elements[i];
	}
}

std::vector<Element> Tree::getElements() {
	return elements;
}
