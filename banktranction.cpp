#include<iostream>
using namespace std;
class Employee{
   char name[30];
   int id;
   public:
   int salary,debit,credit;
   void take()
   {
    cout<<"\n Enter the Name";
    cin>>name;
    cout<<"\n please Enter your id";
    cin>>id;
    cout<<"\nEnter the monthly salary";
    cin>>salary;
    cout<<"\nEnter your Credit transction";
    cin>>credit;
    cout<<"\n Enter your charges";
    cout<<"\nEnter  your Debit transction";
    cin>>debit;
   }
   void print()
   {
    cout<<"\n your name is:"<<name;
    cout<<"\n your id is:"<<id;
   }
};
class Calculate: public Employee
{
 int total5;
 public:
  int creditbalance,debitbalance,yearly,Average,chargedbalance;
  void result()
  {
   yearly=(salary*12);
                                        //condition is necessary that you should have to deposit a money in a bank for a year .NO credit and  debit is allowed untill year//
creditbalance=(yearly + credit);
    if(credit>=1000)
    {
     chargedbalance=(creditbalance - charges);
     cout<<"\n your balance is now deducted");
    }
    debitbalance=(yearly - debit);
                                            //after then we  will be able to  credit and debit in a bank//
total5=(yearly*5);
Average=total5/5;
  }                 //what is your five years of Average salary //
  void display(){
    cout<<"\n Your salary is:"<<salary;
    cout<<"\n Your yearly salary is:"<<yearly;
    cout<<"\n your credit is:"<<credit;
    cout<<"\n  your credited balance is:"<<creditbalance;
    cout<<"\n your charges is :"<<charges;
    cout<<"\n your charged balance is now remaining are"<<chargedbalance:
    cout<<"\n your debit is:"<<debit;
    cout<<"\n your  debited balance is:"<<debitbalance;
    cout<<"\n your five years salary is:"<<total5;
    cout<<"\n your Average salary is:"<<Average;
  }
};
int main()
{
 Calculate Emp1;
 Emp1.take();
 Emp1.result();
Emp1.display();
 Emp1.print();
  return 0;
 }

