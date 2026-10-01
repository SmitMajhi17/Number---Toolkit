#include <iostream>
#include <string>
using namespace std;

int main()
{
float dep,bal,wit;
string a;
cout<<"Enter your current balance";
cin>>bal;
while (true)
{
cout<<"What do you want to do? \n1. Check_Balance\n2. Deposit\n3. Withdraw\n4. Exit";
cin>>a;
if (a=="Check_Balance")
{
  cout<<"Your current balance is :"<<bal;
}
if (a=="Deposit")
{
  cout<<"Enter the amout to be deposited";
  cin>>dep;
  bal=bal+dep;
  cout<<"Amount deposited succesfully.";
}
if (a=="Withdraw")
{
  cout<<"Enter the amount to be withdrawn";
  cin>>wit;
  if(wit>bal)
{
cout<<"Insufficient balance";
}
else
  {
    bal=bal-wit;
    cout<<"Amount withdrawn successfully";
}
if (a=="Exit")
{
cout<<"Thank you!";
break;
}
}
  return 0;
}


