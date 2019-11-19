#ifndef TEST_H
#define TEST_H

#include<iostream>
#include<stdexcept>
#include "QueueInterface.h"
#include "Queue.h"
#include <math.h>
#include <random>

class test{
public:
test();
~test();
void run();

private:

bool test1(); // Check the size of a new created queue is zero or not

bool test2(); // Check whether can enqueue a queue makes an impty queue size is more than 1

bool test3(); // Enqueue 5 on empty queue and then peekFront return 5

bool test4(); // Dequeue an empty queue

bool test5(); // Peek front in an empty queue

bool test6(); // Check whether enqueue is in the right order

bool test7(); // Check whether dequeue is in the right order

};
#endif
