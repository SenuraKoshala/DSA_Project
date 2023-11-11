#pragma once
#include <iostream>
#include <cstdlib>
#include "Student.h"
#include "Singly_Linked_List.h"

using namespace std;

int main()
{
    int index = 0;
    int selection = 0;
    cout << "Welcome to the faculty health care management system" << endl;
    cout << "If you have registered erlier press\t 1" << endl;
    cout << "If you haven't registerd earlier press\t 0" << endl;
    cout << "Enter your selection: ";
    cin >> selection;

    do {
        if (selection == 1) {
            cout << "Enter the last 4 didgits of the student registration NO: ";
            cin >> index;
            break;
        }
        else if (selection == 0) {
            cout << "Prompt user to enteer his or her details" << endl;
            break;
        }
        else {
            cout << "Inavalid selection!!!!...." << endl;
            cout << "Enter your selection: ";
            cin >> selection;
        }
    } while (selection != 1 || selection != 0);





    //for (int i = 0; selection != 1 || selection != 0; i++) {
    //    // Istead of use for loop we can use while loop. Please correct it before submit the code. Btter do while loop..
    //    if (selection != 1 || selection != 0) {
    //        cout << "Invalid Selection....." << endl;
    //        cout << "Enter your selection: " << endl;
    //        cin >> selection;
    //    }
    //    else if (selection) {
    //        //prompt user to enter the index and return the previous records
    //    }
    //    else {
    //        //prompt user to register...
    //    }
    //}

    
    
    return 0;
    
}

