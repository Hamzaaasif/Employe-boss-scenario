#include<iostream>
using namespace std;
#include "employe.h"
#include "pc.h"
class boss : public employe
{
  public:
  pc mypc;
  boss (office *o):employe(o)
  {
    mypc.turn_on();
    cout << "Boss :: Boss()" <<endl;
  }
   ~ boss ()
  {
    mypc.turn_off();
    cout << "Boss :: ~ Boss()" <<endl;
  }
};