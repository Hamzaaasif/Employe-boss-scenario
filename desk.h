#include<iostream>
using namespace std;

class desk
{
  public: 
  desk()
  {
    cout<<"Desk :: Desk()"<<endl;
  }
  ~ desk()
  {
    cout<<"Desk :: ~ Desk()"<<endl;
  }
};