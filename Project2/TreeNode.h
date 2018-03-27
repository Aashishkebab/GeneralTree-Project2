#pragma once
#include <string>


/*********************************************
Space complexity:
	Node size:	string x 2, pointer x 3
	Tree size:		pointer x 1, unsigned int x 1
*********************************************/
class TreeNode{
private:
	std::string name;
	std::string title;
	//Aashish - I was thinking of using character arrays. And then I realized sanity was an option.

	TreeNode* leftmostChild;
	TreeNode* rightSibling;
	TreeNode* parent;

public:
	TreeNode();
	TreeNode(std::string title, std::string name);
	~TreeNode();

	void setLeftmostChild(TreeNode* node);
	void setRightSibling(TreeNode * node);
	void setParent(TreeNode * node);

	TreeNode* getLeftmostChild();
	TreeNode* getRightSibling();
	TreeNode * getParent();

	std::string getTitle();
	std::string getName();

	void addChild(TreeNode* theChild);
};

