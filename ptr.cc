#include<iostream>
using namespace std;

class b{
public:
   virtual void display(){
       cout<<"base class display"<<endl;
   }
};


class d:public b {
public:
  virtual void display(){
   cout<<"derived class display"<<endl;
  }
};

int main(){

d D;
b *B=&D;
B->display();
//cout<< B->__vptr;
int i;
cout<< "Enter pointer values";
cin >> i;
cout << i+B;


}
