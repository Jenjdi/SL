#include"bst.h"
Node* GetNode(datatype data) {
	Node* newnode = (Node*)malloc(sizeof(Node));
	if (newnode == NULL) {
		perror("malloc failed");
	}
	newnode->data = data;
	newnode->leftnode = NULL;
	newnode->rightnode = NULL;
	return newnode;
}
Node* InsertRecursion(Node* node, datatype data) {
	if (node==NULL) {
		node = GetNode(data);
	}
	else if (data <= node->data) {
		node->leftnode=InsertRecursion(node->leftnode, data);
	}
	else if (data > node->data) {
		node->rightnode = InsertRecursion(node->rightnode, data);
	}
	return node;
}
void Insert(Node** node, datatype data) {
	Node* root = *node;
	if (*node == NULL) {
		*node = GetNode(data);
	}
	while (root){
		if (root->leftnode == NULL) {
			root->leftnode = GetNode(data);
		}
		if (root->rightnode == NULL) {
			root->rightnode = GetNode(data);
		}
		if (data > root->data) {
			root->rightnode = data;
			root = root->rightnode;
		}
		if (data < root->data) {
			
		}

	}
}