#include<iostream>
using namespace std;


typedef struct a{
  int a;
  int b;
}A;

int main(){

const char* a="";
cout<<a;
//char *b = "sdfsdfsdf";

//a=b;

//cout<<a;

cout<< sizeof(struct a);
struct a b;
struct a *A;
A=&b;
cout<< A<<endl;
A++;
cout<< A;

return 0;
}
