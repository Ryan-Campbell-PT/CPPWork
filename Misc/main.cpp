#include "ArraySorts.h"
#include "LinkedList.h"
#include "UniqueLL.h"
#include "Maze.h"
#include "BinaryTree.h"
#include "String.h"
#include "HashTable.h"
#include "Tries.h"

//used to detect memory leaks
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

int main()
{
	Tries trie;
	GenericDigit *head = new GenericDigit(1);
	trie.createNumber(head, "12", 2, "camme");
	trie.createNumber(head, "5243", 4, "Grass");
	trie.createNumber(head, "1242454", 7, "ca");
	trie.createNumber(head, "16307800997", 10, "din");
	delete head;

	_CrtDumpMemoryLeaks();
}