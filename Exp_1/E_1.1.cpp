/*Write a C++ program to store and print the roll no., name, age, and marks
of a student using structures.*/

#include<iostream>
#include<string>
using namespace std;

struct student
{
    string name;
    int roll_no;
    int age;
    int marks;

} student1;

int main()
{
    cout<<"Name:";
    getline(cin,student1.name);
    cout<<"Roll No:";
    cin>>student1.roll_no;
    cout<<"Age:";
    cin>>student1.age;
    cout<<"Marks:";
    cin>>student1.marks;


    cout<<"Student Info"<<endl;
    cout<<"Name: "<<student1.name<<endl;
    cout<<"Roll No: "<<student1.roll_no<<endl;
    cout<<"Age: "<<student1.age<<endl;
    cout<<"Marks: "<<student1.marks<<endl;

}

