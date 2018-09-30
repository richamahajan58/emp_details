#include<iostream>
using namespace std;

class Emp
{
char name[20];

protected: 
int basic,id;
static int count;//declaration
public:

Emp()
{
basic=300;
id=count;
count++;
}
Emp(int b)
{
basic=b;
}
void getDetails()
{
cout<<"Enter name\n";
cin>>name;

//cout<<"Enter id\n";
//cin>>id;
}
void displayDet()
{
cout<<"ID: "<<id<<endl;
cout<<"NAME: "<<name<<endl;
cout<<"BASIC: "<<basic<<endl;
}
};

int Emp::count=1;
class Salary : public Emp
{
int totalsal, workday;
public:
Salary()
{
Emp(300);
}
void calSal()
{
totalsal= basic*workday;
}

void getSaldet(){
//cout<<"Enter working days: "<<endl;
cin>>workday;
}

void displaySal()
{
displayDet();
cout<<"TOTAL SALARY: "<<totalsal<<endl;
}
};

int main()
{
Salary ob[15];
int n,i,choice;
cout<<"Enter number of employess:"<<endl;
cin>>n;
for(i=0;i<n;i++)
{
ob[i].getDetails();
}
cout<<"Employee details are:"<<endl;				
for(i=0;i<n;i++)
{
cout<<"-----------------"<<endl;
ob[i].displaySal();
}
cout<<endl;
cout<<"To calculate total salary enter working days:"<<endl;

for(i=0;i<n;i++)
{
cout<<"Employee "<<i+1<<"-"<<endl;
ob[i].getSaldet();
ob[i].calSal();
}
cout<<"Employee details are:"<<endl;				
for(i=0;i<n;i++)
{
cout<<"-----------------"<<endl;
ob[i].displaySal();
}
	
return 0;
}
