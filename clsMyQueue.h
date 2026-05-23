#pragma once 
#include<iostream>
#include"clsDblLinkedList.h"
using namespace std;

template<class T>
class clsMyQueue
{
protected:
	clsDblLinkedList<T>_myDblLinkedList;

public:

	static void Push(T val) {
		_myDblLinkedList.InsertEnd(val);
	}

	void Print() {
		_myDblLinkedList.PrintList();
	}

	short Size() {
		return _myDblLinkedList.Size();
	}

	 T Frount() {
		return _myDblLinkedList.GitItem(0);
	}

	 T Back() {
		return _myDblLinkedList.GitItem(Size() - 1);
	}

	void Pop() {
		_myDblLinkedList.DeleteFristNode();
	}

	short GitItem(T item) {
		return _myDblLinkedList.GitItem(item);
	}

	void Reverse() {
		_myDblLinkedList.Revers();
	}

	bool IsEmpty() {

		return _myDblLinkedList.IsEmpty();
	}

	void UpdateItem(T index, T val) {

		_myDblLinkedList.UpdateItem(index, val);
	}

	void insertAfter(T index, T val) {

		_myDblLinkedList.InsertAftar(index, val);
	}

	void InsertAtFrount(T val) {

		_myDblLinkedList.InsertAtBigninng(val);
	}

	void InsertAtBack(T val) {

		_myDblLinkedList.InsertEnd(val);
	}

	void Clear() {

		_myDblLinkedList.Clear();
	}
};



