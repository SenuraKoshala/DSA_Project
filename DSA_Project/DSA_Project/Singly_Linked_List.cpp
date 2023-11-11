#include "Singly_Linked_List.h"

Student_List::Student_List()
{
	head = NULL;
	tail = NULL;
	size = 0;
}

Student* Student_List::gethead()
{
	return head;
}

Student* Student_List::gettail()
{
	return tail;
}

void Student_List::insertFirst(int elem)
{
	Student* temp = new Student(elem);
}
