#include "Element.h"
#include <vector>

Element::Element(int id, int parent) {
	this->id = id;
	this->parent = parent;
}
int Element::getParent() {
	return parent;
}
int Element::getId() {
	return id;
}
std::vector<int> Element::getChildren() {
	return children;
}
void Element::addChild(int id) {
	children.push_back(id);
}
Element::~Element() {
}