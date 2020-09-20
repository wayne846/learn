#include <iostream>

using namespace std;
class LinkedList;

class ListNode {
private:
	int data;
	ListNode* next;
public:
	ListNode() :data(0), next(0) {};
	ListNode(int a) :data(a), next(0) {};

	friend class LinkedList;
};

class LinkedList {
private:
	ListNode* first;
public:
	LinkedList() :first(0) {};
	void PrintList();       //印出list的所有資料
	void Push_front(int x); //在list的開頭新增Node
	void Push_back(int x);  //在list的尾巴新增Node
	void Delete(int x);     //刪除list中的 int x
	void Clear();           //把整串list刪除
	void Reverse();         //將list反轉
};