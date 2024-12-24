#include "LinkedList.h"
#include <assert.h>
#include <iostream>

using namespace std;

void LinkedList::Insert(int Indata, int InPosition)
{
	Node* current = Head;
	Node* NewNode = new Node(Indata);

	while (InPosition == 0)
	{
		current = current->Next;
		InPosition--;
	}

	if (!!current)
	{
		current->Next = NewNode;
	}
	else
	{
		assert(!current);
	}
}

void LinkedList::Add(int Indata)
{
	Node* NewNode = new Node(Indata);

	if (!Head)
	{
		Head = NewNode;
	}
	else
	{
		Node* Current = Head;
		while (Current->Next != nullptr)
		{
			Current = Current->Next;
		}
		Current->Next = NewNode;
	}
}

void LinkedList::Remove(int Indata)
{
	Node* Current = Head;
	Node* Prev = nullptr;

	while (Current->Data != Indata)
	{
		Prev = Current;
		Current = Current->Next;
	}

	Prev->Next = Current->Next;

	Clear(&Current);
}

void LinkedList::RemoveAt(int InData)
{
	Node* Current = Head;
	Node* Prev = nullptr;
	while (Current->Data != InData)
	{
		Prev = Current;
		Current = Current->Next;
	}

	if (!!Current)
	{
		Prev->Next = Current->Next;
	}
	else
	{
		assert(!Current);
	}

	Clear(&Current);

}

void LinkedList::Clear(Node** RemoveNode)
{
	(*RemoveNode)->Next = nullptr;
	delete RemoveNode;
}

void LinkedList::Print()
{
	const Node* Current = Head;

	while (!!Current)
	{
		cout << Current->Data << endl;
		Current = Current->Next;
	}
}
