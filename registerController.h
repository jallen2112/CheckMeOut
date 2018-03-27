#ifndef _REGISTERCONTROLLER_H_
#define _REGISTERCONTROLLER_H_
#include "cashierView.h"
#include "customerView.h"
#include "StoreInventory.h"
#include "order.h"

class registerController
{
private:
  StoreInventory *database;
  order *cart;
  cashierView screen;
  customerView custScreen;
public:
  registerController(StoreInventory *, order *);
  void processOrder();
};

#endif
