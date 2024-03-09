#ifndef NUMBERS_H
#define NUMBERS_H

#include <string>

using namespace std;

class Numbers {
  private:
    int number;
    static string lessThan20[20];
    static string tens[10];
    static string hundred;
    static string thousand;

  public:
    Numbers(int num);
    void print();
};

#endif
