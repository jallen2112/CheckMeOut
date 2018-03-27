#ifndef _CUSTOMERVIEW_H_
#define _CUSTOMERVIEW_H_
#include "ObserverPattern-cpp/ObserverPattern.cpp"
#include "order.h"

class customerView: public IObserver
{
  private:
    order *o;
  public:
    void addObserver(order* x)
    {
      o = x;
      o->addObserver(this);
    }
    void refresh(order running);
    void update();
};

#endif
