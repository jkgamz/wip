#ifndef INFO_C
#define INFO_C

#include <iostream>
using namespace std;

#include <string>
#include "info.h"

info::info()
{
  level=0;
  name="Hiragawa Akio";
  age=18;
  relation=0;
}

info::info(int l, string n, int a, int r)
{
  level=l;
  name=n;
  age=a;
  relation=r;
}

void info::print();
{
  cout << "Displaying info for " << name << ":" << endl;
  cout << "Level: " << level << endl
       << "Age: " << age << endl
       << "Relation: " << relation << endl;
}

#endif
