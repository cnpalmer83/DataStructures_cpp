#include <cstdlib>
#include "LinkedList.h"
using namespace std;

int main (int argc, char** argv)
{
	LinkedList test;
	test.AddNode(3);
	test.AddNode(4);
	test.AddNode(5);
	
	test.PrintList();
	
	return 0;
}
