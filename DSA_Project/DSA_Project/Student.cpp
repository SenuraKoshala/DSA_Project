#include "Student.h"

Student::Student()
{
	index_No = 0;
	registration_date = 0;
	last_modified_date = 0;
}

Student::Student(int index, int regi_date, string health_status)
{
	index_No = index;
	registration_date = regi_date;
	health_records = health_status;
}

