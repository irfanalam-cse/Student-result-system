#include<iostream>
using namespace std;
int main ()
{
  string name;
  int marks1,marks2,marks3,marks4;
  cout<<"====STUDENT RESULT MANAGEMENT SYSTEM===="<<"\n";
  cout<<"Enter name of student:";
  cin>>name;
  cout<<"Enter marks of four subject:";
  cin>>marks1>>marks2>>marks3>>marks4;
  int total=marks1+marks2+marks3+marks4;
  float average=(float)total/4;
  char GRADE;
  if(average>=90)
  GRADE='A';
else if(average>=75)
GRADE='B';
else if(average>=60)
GRADE='C';
else if(average>=40)
GRADE='D';
else
GRADE='F';
  cout<<"NAME:"<<name<<"\n";
cout<<"subject marks="<<marks1<<" "<<marks2<<" "<<marks3<<" "<<marks4<<"\n";
cout<<"total marks="<<total<<"\n";
cout<<"average of student="<<average<<"%"<<"\n";
cout<<"grade"<<GRADE;
  return 0;
}