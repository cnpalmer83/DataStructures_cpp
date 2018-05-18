// A simple linked list

#include <iostream>
#include <cstdlib>
#include "Node.h"
using namespace std;

class LinkedList
{
private:
	struct Node
	{
		int data;
		Node* next;
	};
	typedef struct Node* nodePtr;

	/* the above can also be written as:
	 ****************************
	 * typedef struct Node
	 * {
	 * 	int data;
	 * 	node* next;
	 * }* nodePtr;
	 ****************************
	 */
	nodePtr head;
	nodePtr curr;
	nodePtr temp;

public:
	LinkedList();
	void AddNode(int addData);
	void DeleteNode(int delData);
	void PrintList();	
};
