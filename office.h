#include<iostream>
using namespace std;

class office
{
  public:
  office()
  {
    cout<<"office :: office()"<<endl;
  }
  ~ office()
  {
    cout<<"office :: ~ office()"<<endl;
  }
};