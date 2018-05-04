#include<iostream>
using namespace std;
#include "desk.h"
#include"office.h"
class employe
{
  public:
  desk mydesk;
  office *myoffice; //shared office 
  employe(office *o)
  {
    myoffice = o;
    cout << "Employe :: Employe()" << endl;
  }
  virtual ~ employe()
  {
    cout << "Employe :: ~ Employe()" << endl;
  }
};