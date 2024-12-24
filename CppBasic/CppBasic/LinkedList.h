#pragma once

struct Node
{
public:
	int Data = 0;
	Node* Next = nullptr;

	Node(int InData)
	{
		Data = InData;
	}
};


class LinkedList
{
public:
	void Insert(int InData, int InPosition);
	void Add(int InData);
	void Remove(int InData);
	void RemoveAt(int InData);
	void Clear(Node** RemoveNode);
	void Print();

private:
	Node* Head = nullptr;
};

