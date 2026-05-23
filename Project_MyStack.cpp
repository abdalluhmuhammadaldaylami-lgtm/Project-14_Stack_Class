#include<iostream>
#include"clsMyStack.h"
using namespace std;


int main() {

	clsMyStack<int>MyStack;

	MyStack.Push(10);
	MyStack.Push(20);
	MyStack.Push(30);
	MyStack.Push(40);
	MyStack.Push(50);

	cout << "the Print List:\n";

	MyStack.Print();

	cout << "\nStack size :" << MyStack.Size() << endl;
	cout << "\nStack frount :" << MyStack.Top() << endl;
	cout << "\nStack Back :" << MyStack.Butoom() << endl;

	MyStack.Pop();
	cout << "\nStack After Pop :\n";
	MyStack.Print();


}