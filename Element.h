#pragma once
#include <vector>
class Element
{
private:
	int id;
	int parent;
	std::vector<int> children;
	int height;
	int depth;
public:
	Element(int id, int parent);
	~Element();
	void addChild(int id);
	int getParent();
	int getId();
	std::vector<int> getChildren();
};

