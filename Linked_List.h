#include "Linked_List.h"

void LinkedList::PrintList() {
	if (first == 0) {
		cout << "List is empty.\n";
		return;
	}
	ListNode* current = first;
	while (current != 0) {
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
}

void LinkedList::Push_front(int x) {
	ListNode* newNode = new ListNode(x);
	newNode->next = first;
	first = newNode;
}

void LinkedList::Push_back(int x) {
	ListNode* newNode = new ListNode(x);
	if (first == 0) {
		first = newNode;
		return;
	}
	ListNode* current = first;
	while (current->next != 0){
		current = current->next;
	}
	current->next = newNode;
}

void LinkedList::Delete(int x) {
	ListNode* current = first;
	ListNode* previous = 0;
	while (current != 0 && current->data != x) {
		previous = current;
		current = current->next;
	}
	if (current == 0) {
		cout << "There is no " << x << " in list.\n";
	}
	else if (current == first) {
		first = current->next;
		delete current;
		current = 0;
	}
	else {
		previous->next = current->next;
		delete current;
		current = 0;
	}
}

void LinkedList::Clear() {
	while (first != 0) {
		ListNode* current = first;
		first = first->next;
		delete current;
		current = 0;
	}
}

void LinkedList::Reverse() {
	if (first == 0 || first->next == 0) {
		return;
	}
	ListNode* previous = 0;
	ListNode* current = first;
	ListNode* preceding = first->next;
	while (preceding != 0) {
		current->next = previous;
		previous = current;
		current = preceding;
		preceding = preceding->next;
	}
	current->next = previous;
	first = current;
}