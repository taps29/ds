#include<iostream>
#include<string.h>
using namespace std;
class STRING
{
public:
int i;
void frequency(string);
void deletel(string);
void chardel(string);
void palindrome(string);
};
void STRING :: frequency(string arr)
MIT ADT University, Pune
{
//cout<<"The string is"<<arr<<endl;
char ch;
cout<<"Enter the character for which you want to count frequency: "<<endl;
cin>>ch;
int count=0;
for(i=0;arr[i]!='\0';i++)
{
if (ch == arr[i])
{
count = count+1;
}
}
cout<<"The frequency of character"<<ch<<"is"<<count<<endl;
}
void STRING :: deletel(string arr)
{
int j,k,flag=0;
cout<<"Enter the two positions at which you want to delete characters"<<endl;
cin>>j>>k;
for(i=j-1;arr[i]!='\0';i++)
{
arr[i]=arr[i+1];
}
MIT ADT University, Pune
for(i=k-2;arr[i]!='\0';i++)
{
arr[i]=arr[i+1];
}
cout<<"The edited string is: "<<endl;
for(i=0;arr[i]!='\0';i++)
{
cout<<arr[i];
}
}
void STRING :: chardel(string arr)
{
char ch,arr1[8];
int j,len=0;
cout<<"Enter character to be deleted: ";
cin>>ch;
for(int i=0;arr[i]!='\0';i++)
{
len++;
}
for(i=j=0;i<len;i++)
{
if(arr[i]!=ch)
MIT ADT University, Pune
{
arr1[j++]=arr[i];
}
}
arr1[j]='\0';
cout<<"The edited string is: ";
for(int k=0;arr1[k]!='\0';k++)
{
cout<<arr1[k];
}
}
void STRING :: palindrome(string arr)
{
int i,j,count=0,k,flag=0;
for(i=0;arr[i]!='\0';i++)
{
count=count+1;
}
int a=count/2;
for(i=0,j=count-1;i<=a;i++,j--)
{
if(arr[i]!=arr[j])
{
cout<<"It is not a palindrome"<<endl;
MIT ADT University, Pune
break;
}
}
//cout<<i<<endl<<a;
if(i==(a+1))
{
cout<<"It is palindrome"<<endl;
}
}
int main()
{
int y, choice;
STRING obj;
string ch;
cout<<"Enter String = ";
cin>>ch;
cout<<"1.Frequency 2.Delete 3.Delete Character 4.Palindrome Check"<<endl;
cout<<"Enter choice = ";
cin>>choice;
switch(choice)
{
case 1:
{
obj.frequency(ch);
break;
}
MIT ADT University, Pune
case 2:
{
obj.deletel(ch);
break;
}
case 3:
{
obj.chardel(ch);
break;
}
case 4:
{
obj.palindrome(ch);
break;
}
default:
{
cout<<"Invalid Input"<<endl;
}
}
return 0;
}
