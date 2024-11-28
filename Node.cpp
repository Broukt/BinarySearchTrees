#include "Node.h"

Node::Node()
	: data(0), left(nullptr), right(nullptr) {}

Node::Node(int data)
	: data(data), left(nullptr), right(nullptr) {}

Node::Node(Node& other)
	: data(other.data), left(other.left), right(other.right) {}

int Node::get_data() { return data; }

Node* Node::get_left() { return left; }

Node* Node::get_right() { return right; }

void Node::set_data(int data) { this->data = data; }

void Node::set_left(Node* left) { this->left = left; }

void Node::set_right(Node* right) { this->right = right; }