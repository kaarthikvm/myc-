#include<iostream>
#include <stdio.h>
#include <string.h>
#include<vector>
#include<map>

using namespace std;


class base {
private:
    int *total;

public:

    base(){
      total = new int;
    }

    base(const base &obj1) {
        cout<<"Inside copy constructor"<<endl;
        //total = new int;
        //memcpy(total, obj1.total, sizeof(int)); 
        *this = obj1;
    };

    void operator= (const base &obj1) {
        cout<<"Inside = operator"<<endl;
        total = new int;
        memcpy(total, obj1.total, sizeof(int));
    } 
  
    void set_total(int t) {
       *total = t;
    }
    int get_total() {
        return *total;
 
    }
    ~base(){
       delete total;
    }
};


class d:public base {

public:
    d():base(){
    
    }


};



int main(){

    base b1;
    b1.set_total(100);
    cout << b1.get_total() <<endl;
    base b2=b1; // it invokes copy constructor
    cout << b2.get_total()<<endl;
    base b3;
    b3=b1; // calls = operator
    cout<<b3.get_total()<<endl;

    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    
    for(int i=0; i<v.size(); i++) {
        cout << v[i]<<endl;
    }

    std::map<int,int> m;
    m[10]=100;
    m[20]=200;
    m[30]=300;

    std::map<int,int>::iterator it = m.begin();
    for( ; it!= m.end();++it) {
       cout<< it->first <<endl;
       cout<< it->second <<endl;
    
    }
}
