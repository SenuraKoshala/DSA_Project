#pragma once
#include <iostream>


using namespace std;

class Student
{
private:
	int index_No;
	int registration_date;
	int last_modified_date;
	string health_records;
	Student* next;

public:
	Student();
	Student(int index, int regi_date, string health_status);
	Student(int index, int modify_date, string health_status);
};

