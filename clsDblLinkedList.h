#pragma once
#include<iostream>
using namespace std;

template<class T>
class clsDblLinkedList
{
private:
	int _Size = 0;

public:
	class Node {
	public:
		T value;
		Node* Next;
		Node* prev;

	};

	Node* head = NULL;

	void InsertAtBigninng(T val) {
		Node* newNode = new Node();

		newNode->value = val;
		newNode->prev = NULL;
		newNode->Next = head;

		if (head != NULL) {
			head->prev = newNode;
		}

		head = newNode;
		_Size++;
	}

	Node* find(T val) {
		Node* NewNode = head;

		while (NewNode != NULL) {
			if (NewNode->value == val) {
				return NewNode;
			}
			NewNode = NewNode->Next;
		}
		return NULL;
	}

	void InsertAftar(Node* NodePrev, T val) {

		Node* current = new Node();
		current->value = val;
		current->Next = NodePrev->Next;
		current->prev = NodePrev;

		if (NodePrev->Next != NULL) {

			NodePrev->Next->prev = current;
		}
		NodePrev->Next = current;
		_Size++;
	}

	void InsertEnd(T val) {

		Node* current = new Node();
		current->value = val;
		current->Next = NULL;

		if (head == NULL) {
			current->prev = NULL;
			head = current;
		}
		else {

			Node* New = head;
			while (New->Next != NULL) {
				New = New->Next;
			}
			New->Next = current;
			current->prev = New;
		}
		_Size++;
	}

	void DeleteNode(Node*& NodeToDel) {

		if (head == NULL || NodeToDel == NULL) {
			return;
		}
		if (head == NodeToDel) {
			head = NodeToDel->Next;
		}

		if (NodeToDel->Next != NULL) {
			NodeToDel->Next->prev = NodeToDel->prev;
		}

		if (NodeToDel->prev != NULL) {
			NodeToDel->prev->Next = NodeToDel->Next;
		}
		_Size--;
		delete NodeToDel;
	}

	void DeleteFristNode() {
		if (head == NULL) {
			return;
		}
		Node* temp = head;
		head = head->Next;
		if (head != NULL) {
			head->prev = NULL;
		}
		_Size--;
		delete temp;
	}

	void DeleteLastNode() {
		if (head == NULL) {
			return;
		}

		Node* temp = head;
		while (temp->Next->Next != NULL) {
			temp = temp->Next;
		}
		Node* current = temp->Next;
		temp->Next = NULL;
		_Size--;
		delete current;
	}

	void PrintList() {
		Node* New = head;

		while (New != NULL) {
			cout << New->value << " ";
			New = New->Next;
		}
		cout << "\n";
	}

	T Size() {
		return _Size;
	}

	bool IsEmpty() {
		return (_Size == 0 ? true : false);
	}

	void Clear() {
		if (_Size > 0) {
			DeleteFristNode();
		}

	}

	void Revers() {

		Node* temp = NULL;
		Node* current = head;

		while (current != NULL) {
			temp = current->prev;

			current->prev = current->Next;
			current->Next = temp;
			current = current->prev;

		}
		if (temp != NULL) {
			head = temp->prev;
		}
	}

	Node* GitNode(T index)
	{
		int count = 0;
		if (index<0 || index>(_Size - 1)) {
			return NULL;
		}

		Node* current = head;
		while (current != NULL) {
			if (count == index) {

				return current;
			}
			count++;
			current = current->Next;
		}
		return NULL;
	}

	int GitItem(int index) {
		Node* N = GitNode(index);
		if (N == NULL) {
			return NULL;
		}
		else
		{
			return N->value;
		}
	}

	void UpdateItem(int index, int value) {
		Node* N = GitNode(index);

		if (N != NULL) {
			N->value = value;
		}
		else
		{
			return;
		}
	}

	void InsertAftar(int index, int value) {
		Node* N = GitNode(index);

		if (N == NULL)
		{
			return;
		}
		else
		{
			InsertAftar(N, value);
		}
	}
};



