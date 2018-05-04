#include<iostream>
using namespace std;
#include "boss.h"
int main()
{
  office *poff=new office();
  boss *pboss=new boss(poff);
  cout<< endl<<"******Destructors called******" <<endl<<endl;
  delete pboss;
  cout<< endl<<"******Polymorphism******" <<endl<<endl;
  employe *pemploye = new boss(poff);
  cout<< endl<<"******Destructors called******" <<endl<<endl;
  delete pemploye;

  system("pause");
}