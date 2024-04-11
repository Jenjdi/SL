#pragma once
#include<stdio.h>
typedef int Datatype;
typedef struct Node {
	Datatype data;
	struct Node* left;
	struct Node* right;
}root;
root* Init(root* node, Datatype data);
void Insert(root* node, Datatype data);
root* NewNode(Datatype data);
void Search(root* node, Datatype FindNum, Datatype ChangNum);
void PreOrder(root* node);

