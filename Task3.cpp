#include <iostream>
using namespace std;
struct student
    {
        char name[30][30];
        char grade[30];
        int g[30];
    };
struct student s;
int main()
{
    int n,sum=0,avg=0;
    char avg_grade;
    cout<<"Enter no. of students : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter the name of Student "<<i<<" : ";
        cin>>s.name[i];
        cout<<"Enter Grade (from A to E): ";
        cin>>s.grade[i];
        if(s.grade[i]=='A')
          s.g[i]=1;
        else if(s.grade[i]=='B')
          s.g[i]=2;
        else if(s.grade[i]=='C')
          s.g[i]=3;
        else if(s.grade[i]=='D')
          s.g[i]=4;
        else if(s.grade[i]=='E')
          s.g[i]=5;
        else
        {  cout<<"Oops! Invalid Grade." ;
           break;}
        sum+=s.g[i];
    } 
    avg=sum/n;
    if(avg==1)
      avg_grade='A';
    else if(avg==2)
      avg_grade='B';
    else if(avg==3)
      avg_grade='C';
    else if(avg==4)
      avg_grade='D';
    else if(avg==5)
      avg_grade='E';
    else
      cout<<"ERROR!!!" ;
    cout<<"AVERAGE GRADE : "<<avg_grade;
    return 0;
}