#include<iostream>
using namespace std;


typedef struct a{
  int a;
  int b;
} dummy;

int main(){

const char* a="";
cout<<a;

cout<< sizeof(dummy)<<endl;
dummy d1;
dummy *d2;
d2=&d1;
cout<< d2<<endl;
d2++;
cout<< d2<<endl;

dummy obj1;
obj1.a=100;
obj1.b=200;

dummy obj2;
obj2=obj1;
cout<<obj2.a<<endl;
cout<<obj2.b<<endl;
return 0;

}
