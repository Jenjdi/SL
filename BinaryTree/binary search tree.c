#include"binary search tree.h"
root* NewNode(Datatype data) {
	root* newnode = (root*)malloc(sizeof(Datatype));
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}
void Insert(root* node, Datatype data) {
	if (node == NULL) {
		node = NewNode(data);
	}
	if (data < node->data) {
		Insert(node->left, data);
	}
	if (data > node->data) {
		Insert(node->right, data);
	}
}

void Search(root* node, Datatype FindNum,Datatype ChangNum) {
	if (node == NULL) {
		return;
	}
	if (node->data == FindNum) {
		node->data = ChangNum;
	}
	Search(node->right, FindNum, ChangNum);
	Search(node->left, FindNum, ChangNum);
}
void PreOrder(root* node) {
	if (node==NULL) {
		return;
	}
	print("%d", node->data);
	PreOrder(node->left);
	PreOrder(node->right);
}
root* Init(root* node, Datatype data) {

}