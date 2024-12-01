#include "BST.h"

Node* BST::insert(Node* root, int data)
{
	if (!root)
		return new Node(data);
	if (data < root->get_data())
		root->set_left(this->insert(root->get_left(), data));
	else
		root->set_right(this->insert(root->get_right(), data));
	return root;
}

Node* BST::search(Node* root, int data)
{
	if (!root || root->get_data() == data)
		return root;
	if (data < root->get_data())
		return this->search(root->get_left(), data);
	else
		return this->search(root->get_right(), data);
}

Node* BST::remove(Node* root, int data)
{
	if (!root)
		return root;
	if (data < root->get_data())
		root->set_left(this->remove(root->get_left(), data));
	else if (data > root->get_data())
		root->set_right(this->remove(root->get_right(), data));
	else
	{
		if (!root->get_right() || !root->get_left())
		{
			Node* child = root->get_right() ? root->get_right() : root->get_left();
			delete root;
			root = child;
			return root;
		}
		Node* most_left = this->get_most_left(root->get_right());
		root->set_data(most_left->get_data());
		root->set_right(this->remove(root->get_right(), most_left->get_data()));
	}
	return root;
}

Node* BST::get_most_left(Node* root)
{
	while (!root->get_left())
		root = root->get_left();
	return root;
}

BST::BST()
	: root(nullptr) {}

BST::~BST() { this->clear(); }

void BST::insert(int data) { this->root = this->insert(this->root, data); }

Node* BST::search(int data) { return this->search(this->root, data); }

void BST::remove(int data) { this->root = this->remove(this->root, data); }

Node* BST::get_root() { return this->root; }

// No lo implementé porque deben hacer algo similar en su taller
void BST::print()
{

}

void BST::clear()
{
	while (this->root)
		this->remove(this->root->get_data());
}