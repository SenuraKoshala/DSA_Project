#pragma once
#include "Student.h"

class Student_List
{
private:
	Student* head;
	Student* tail;
	int size;
public:
	Student_List();
	Student* gethead();
	Student* gettail();
	void insertFirst(int elem);

	


};

