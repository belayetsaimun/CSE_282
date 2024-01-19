/*Enter the marks of 5 students in Chemistry, Mathematics, and Physics
(each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks, and phy_marks and then display the
percentage of each student.*/

#include<iostream>
#include<string>
using namespace std;

struct marks
{
    int roll_no;
    string name;
    int chem_marks;
    int maths_marks;
    int phy_marks;

} student[6];

int main()
{
    for(int i=1; i<=5; i++)
    {
        cout<<"Roll No:";
        cin>>student[i].roll_no;
        cout<<"Name:";
        cin.ignore();
        getline(cin,student[i].name);
        cout<<"Chem_marks:";
        cin>>student[i].chem_marks;
        cout<<"Maths_marks:";
        cin>>student[i].maths_marks;
        cout<<"Phy_marks:";
        cin>>student[i].phy_marks;

    }
    for(int i=1; i<=5; i++)
    {
        cout<<"Roll No:"<<student[i].roll_no<<endl;
        cout<<"Name:"<<student[i].name<<endl;
        cout<<"Chem_marks:"<<student[i].chem_marks<<endl;
        cout<<"Maths_marks:"<<student[i].maths_marks<<endl;
        cout<<"Phy_marks:"<<student[i].phy_marks<<endl;
        int ptg=(student[i].chem_marks+student[i].maths_marks+student[i].phy_marks)/3;
        cout<<"Percentage:"<<ptg<<endl;


    }
}

