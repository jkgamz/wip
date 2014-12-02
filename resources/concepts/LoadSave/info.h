#ifndef INFO_H
#define INFO_H

#include <string>

class info
{
 public:
  int level;
  string name;
  int age;
  int relation;

  info();
  info(int, string, int, int);
  void print();
};

#endif
