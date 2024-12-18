#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    char name[10],father_name[10],city[10];
    cout<<"Enter Your Name : ";
    gets(name);
    cout<<"Enter Your Father's Name : ";
    gets(father_name);
    cout<<"Enter Your City : ";
    gets(city);
    system("cls");
    cout<<"Name : ";
    puts(name);
    cout<<"Father Name : ";
    puts(father_name);
    cout<<"City : ";
    puts(city);
    getch();
}