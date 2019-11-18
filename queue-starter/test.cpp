#include "test.h"

test::test(){

}

test::~test()
{
}
bool test::test1(){
  Node<int>* ptr;
  bool isPassed = false;
  if(ptr->isEmpty()){
    isPassed = true;
    std::cout<<"Newly created Queue is empty: ";
    std::cout << "PASSED" << '\n';
    return true;
  }
  else{
    isPassed = false;
    std::cout<<"Newly created Queue is empty: ";
    std::cout << "NOT PASSED" << '\n';
    return false;
  }
}

bool test::test2(){
  Node<int>* ptr;
  bool isPassed = false;
  ptr->enqueue(1);
  if(ptr->isEmpty() == false){
    isPassed = true;
    std::cout<<"Enqueue an impty queue makes size larger than 1: ";
    std::cout << "PASSED" << '\n';
    return true;
  }
  else{
    isPassed = false;
    std::cout<<"Enqueue an impty queue makes size larger than 1: ";
    std::cout << "NOT PASSED" << '\n';
    return false;
  }
}

bool test::test3(){
  Node<int>* ptr;
  bool isPassed = false;
    ptr->enqueue(1);
      ptr->enqueue(2);
        ptr->enqueue(3);
          ptr->enqueue(4);
            ptr->enqueue(5);
    if(ptr->peekFront()==5){
      isPassed = true;
      std::cout<<"Enqueue an impty queue 5 times and return 5: ";
      std::cout << "PASSED" << '\n';
      return true;
    }
    else{
      isPassed = false;
      std::cout<<"Enqueue an impty queue 5 times and return 5: ";
      std::cout << "NOT PASSED" << '\n';
      return false;
    }
}

bool test::test4(){
  Node<int>* ptr;
  bool isPassed = false;
  try{
  ptr->enqueue();
  std::cout<<"Dequeue an empty queue: NOT PASSED"<<'\n';
  return false;
  isPassed = false;
  }
  catch(std::runtime_error & rte){
    std::cout <<"Dequeue an empty queue : PASSED "<<'\n';
    isPassed = true;
    return true;
  }
}

bool test::test5(){
  Node<int> *ptr;
  bool isPassed = false;
  try{
    ptr->peekFront();
    std::cout<<"Peek Front an empty queue: NOT PASSED"<<'\n';
    return false;
  }
  catch(std::runtime_error &rte){
    std::cout << "Peek Front an empty queue: PASSED" << '\n';
    return true;
  }
}

bool test::test6(){
  Node<int> *ptr;
  bool isPassed = false;
  ptr->enqueue(1);
  ptr->enqueue(2);
  if(ptr->peekFront()==1){
    std::cout<<"Enqueue queue return in order value: PASSED"<<'\n';
    return true;
  }
  else{
    std::cout << "Enqueue queue return in order value: NOT PASSED" << '\n';
    return false;
  }
}

bool test::test7()
{
  Node<int> *ptr;
  bool isPassed = false;
  ptr->enqueue(1);
  ptr->enqueue(2);
  ptr->dequeue();
  if (ptr->peekFront() == 2)
  {
    std::cout << "Dequeue queue return in order value: PASSED" << '\n';
    return true;
  }
  else
  {
    std::cout << "Dequeue queue return in order value: NOT PASSED" << '\n';
    return false;
  }
}

void test::run(){
  test1();
  test2();
  test3();
  test4();
  test5();
  test6();
  test7();
}