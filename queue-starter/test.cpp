#include "test.h"

test::test(int size){

}

bool test::test1(){
  Node<int>* ptr;
  bool isPassed = false;
  if(ptr->isEmpty()){
    isPassed = true;
    std::cout<<"Newly created Queue is empty: ";
    std::cout<<"PASSED";
  }
  else{
    isPassed = false;
    std::cout<<"Newly created Queue is empty: ";
    std::cout<<"NOT PASSED";
  }
}

bool test::test2(){
  Node<int>* ptr;
  bool isPassed = false;
  ptr->enqueue(1);
  if(ptr->isEmpty() == false){
    isPassed = true;
    std::cout<<"Enqueue an impty queue makes size larger than 1: ";
    std::cout<<"PASSED";
  }
  else{
    isPassed = false;
    std::cout<<"Enqueue an impty queue makes size larger than 1: ";
    std::cout<<"NOT PASSED";
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
      std::cout<<"PASSED";
    }
    else{
      isPassed = false;
      std::cout<<"Enqueue an impty queue 5 times and return 5: ";
      std::cout<<"NOT PASSED";
    }
}

bool test::test4(){
  Node<int>* ptr;
  bool isPassed = false;
  if()
}
