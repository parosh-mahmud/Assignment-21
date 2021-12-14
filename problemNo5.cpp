#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
private:

int num;

public:
int admissionFee;

Student(int x,int y){

num = y;
admissionFee = x;
cout<<"initiazized public data is: "<<admissionFee <<endl;
cout<<"initialized private data is: "<<num;


}

};

int main()
{
  Student s1(15000,44);


  getch();
}