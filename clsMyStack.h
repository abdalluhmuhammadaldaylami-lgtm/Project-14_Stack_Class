#pragma once
#include<iostream>
#include"clsMyQueue.h"
using namespace std;

template<class T>
class clsMyStack:public clsMyQueue<T>
{

public:

	void Push(T val) {

		clsMyQueue<T>::_myDblLinkedList.InsertAtBigninng(val);
	}
	  
	T Top() {
		return clsMyQueue<T>::Frount();
	}

	T Butoom() {
		return clsMyQueue<T>::Back();
	}

};

