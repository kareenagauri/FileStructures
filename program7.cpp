#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
fstream fp1,fp2,fp3;
char list1[50][20],list2[50][20];
int n,m,i,j,k;
fp1.open("f1.txt",ios::out);
cout<<"enter no. of names to read in file1:"<<endl;
cin>>n;
cout<<"enter the names of file1 in ascending order:"<<endl;
for(i=0;i<n;i++)
{
cin>>list1[i];
fp1<<list1[i]<<endl;
}
fp1.close();
fp2.open("f2.txt",ios::out);
cout<<"enter no. of names to read in file2:"<<endl;
cin>>m;
cout<<"enter the names of file2 in ascending order:"<<endl;
for(i=0;i<m;i++)
{
cin>>list2[i];
fp2<<list2[i]<<endl;
}
fp2.close();
fp3.open("f3.txt",ios::out);
i=j=k=0;
while(i<n && j<m)
{
if(strcmp(list1[i],list2[j])<0)
i++;
else if(strcmp(list1[i],list2[j])==0)
{
cout<<"names matched are:"<<list1[i]<<endl;
fp3<<list1[i]<<endl;
i++;
j++;
k++;
}
else
j++;
}
cout<<"no. of match found:"<<k<<endl;
fp3.close();
}
