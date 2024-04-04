#pragma once
#include<stdio.h>
typedef int datatype;
typedef struct BSTNode {
	datatype data;
	struct BST* leftnode;
	struct BST* rightnode;
}Node;
void GetNode(datatype data);
Node* InsertRecursion(Node* node, datatype data);
void Insert(Node** node, datatype data);