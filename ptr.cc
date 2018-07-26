#include<iostream>
using namespace std;

class b{
public:
   virtual void f(){
       cout<<"fff"<<endl;
   }
};


class d:public b {
public:
  virtual void f(){
   cout<<"sdfsdfsdfsdf"<<endl;
  }
};

int main(){

d D;
b *B=&D;
B->f();
cout<< B->__vptr;
}
