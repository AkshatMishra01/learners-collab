#include<iostream>
void display(int marks[5]);
int main()
{
cout<<"This is an array programme";
int marks[5] = {34,65,1,90,13};
display(marks);
}
void display(int marks)
{
for(i=0;i<5;i++)
{
cout<<marks[i];
}
}
