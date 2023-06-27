#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class student{
       public:char name[10];
}rec1[10],rec2[10];
int n;

void reads()
{

       char name[10];
       cout<<"enter the number of students";
       cin>>n;
       cout<<"enter the names:";
       for(int i=0;i<n;i++)
       {
              cin>>rec1[i].name;
       }

       cout<<"reversed names\n";
       for(int i=0;i<n;i++)
       {
              strcpy(name,rec1[i].name);
              strrev(name);
              strcpy(rec2[i].name,name);
              cout<<rec2[i].name<<"\n";
       }
}

void write()
{
       fstream file;
       char fname[10];
       cout<<"enter the filename";
       cin>>fname;
       file.open(fname,ios::out);
       if(!file)
       {
              cout<<"could not open file";
              exit(1);
       }
       for(int i=0;i<n;i++)
       {
              file<<rec2[i].name<<"\n";
       }
}

void stored_name()
{
       fstream f1,f2;
       char fname1[10],fname2[10],name[10];
       cout<<"enter the file from where u want to read";
       cin>>fname1;
       f1.open(fname1,ios::in);
       if(!f1)
       {
              cout<<"could not open";
              exit(1);
       }
       cout<<"enter the file name where u want to store\n";
       cin>>fname2;
       f2.open(fname2,ios::out);
       while(!f1.eof())
       {
              f1.getline(name,10,'\n');
              strrev(name);
              cout<<name<<"\n";
              f2<<name<<"\n";
       }
       f1.close();
       f2.close();



}


int main()
{
       system("cls");;
       reads();
       write();
       stored_name();
       getch();
}
