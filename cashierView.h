#ifndef _CASHIERVIEW_H_
#define _CASHIERVIEW_H_
#include "ObserverPattern-cpp/ObserverPattern.cpp"
#include "order.h"

class cashierView: public IObserver
{
  private:
    order *o;
  public:
    void addObserver(order* x)
    {
      o = x;
      o->addObserver(this);
    }
    void displayRunningTotal(order running);

    void displayFinalReceipt(order final);

    void update();
};

#endif
