#include<iostream>
using namespace std;
#include "boss.h"
int main()
{
  office *poff=new office();
  boss *pboss=new boss(poff);
  cout<< endl<<"******Destructors called******" <<endl<<endl;
  delete poff;
  delete pboss;

  system("pause");
}