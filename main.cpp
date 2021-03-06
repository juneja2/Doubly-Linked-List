// Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "DoubyLinkedList.h"
#include <iostream>
using namespace std;
void print(const char* msg, const vector<E>& vec);

int main(){
    try {
        DoublyLinkedList list;
        list.add("AA");
        list.add("BB");
        list.add("CC");
        list.add("DD");
        list.add("EE");
       
        print("S2", list.toVector(false));
        print("S3", list.toVector(true));

        list.add(0, "XX"); 
        list.add(3, "YY"); 
        list.add(7, "ZZ");

        print("S5", list.toVector(false));
        print("S6", list.toVector(true));

        DoublyLinkedList list2(list);
        print("S8", list2.toVector(false));
       
        list2.remove(0);
        list2.remove(2);
        list2.remove(5);

        print("S10", list2.toVector(false));

        list2.reverse();

        print("S12", list2.toVector(false));
        print("S13", list2.toVector(true));



    }
    catch (const char* msg) {
        cout << "Error : " << msg << endl;
    }
}
void print(const char* msg, const vector<E>& vec) {
    cout << msg << "   [ ";
    for (unsigned i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << "]" << endl;
}


