

#include <iostream>
#include "Linked_List.h"
int main()
{
    LinkedList list;
    list.Push_front(8);
    list.Push_front(7);
    list.Push_front(2);
    list.Push_back(7);
    list.PrintList();
    list.Reverse();
    list.PrintList();
    return 0;
}
