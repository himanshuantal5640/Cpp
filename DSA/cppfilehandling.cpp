#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream myfile("text.txt");

if(!myfile)
{
cout<<"Error in Opening the File";
}
else
{
cout<<"File Successfully Opened";
}
}