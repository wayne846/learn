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
	void PrintList();       //�L�Xlist���Ҧ����
	void Push_front(int x); //�blist���}�Y�s�WNode
	void Push_back(int x);  //�blist�����ڷs�WNode
	void Delete(int x);     //�R��list���� int x
	void Clear();           //����list�R��
	void Reverse();         //�Nlist����
};