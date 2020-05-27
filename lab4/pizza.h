//\begin{sourcecode}
#pragma once
#include <iostream>
#include "config.h"
#include <FL/Fl_Cairo_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/fl_ask.H>
#include "LLQueue.h"
#include "RBQueue.h"
extern LLQUEUE orderQueue;
extern RBQUEUE driverQueue;
void order_cb(Fl_Button*,void*);
extern Fl_Input* pizza;
void driver_cb(Fl_Button*,void*);
extern Fl_Input* driverName;
void dispatch(void*);
extern Fl_Input* addressName;
extern bool status;
void deliver();
//\end{sourcecode}
