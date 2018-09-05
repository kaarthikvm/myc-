/* factory method example 
* Valgrind command : valgrind --leak-check=full -v ./a.out
*/

#include<iostream>
#include<vector>
using namespace std;

// factory method


class base {

public:
    base(){
        cout << "base class constructor" <<endl;
    };
    virtual void display() {
        cout << "base class display" <<endl;
    }
    // static method to create factory method
    static base* myfactory(int option);
};

class d1:public base {

public:
    d1(){
        cout << "d1 class constructor" <<endl;
    };
    virtual void display() {
        cout << "d1 class display" <<endl;
    }
};

class d2:public base {

public:
    d2(){
        cout << "d2 class constructor" <<endl;
    };
    virtual void display() {
        cout << "d2 class display" <<endl;
    }
};


base* base::myfactory(int option) {
    switch(option) {
        case 0:
             return new base;
             break;
        case 1:
             return new d1;
             break;
        case 2:
             return new d2;
             break;
        default:
             cout << "Invalid Option" <<endl;  
    }
}

void main_display(const vector<base*> &v) {
    for (int i=0; i<v.size(); ++i) {
        v[i]->display();
    }
}

void clear_pointer(vector<base*> &v) {
    for (int i=0; i<v.size(); ++i) {
        delete v[i];
    }
    v.erase(v.begin(),v.begin() + v.size());
}

int main() {

vector<base*> v;

v.push_back(new d1);
v.push_back(new d1);
v.push_back(new d2);
v.push_back(new base);

cout << "Vector size before erase " << v.size() <<endl;
main_display(v);

// clear the vector
// since pointer is present, free the pointer to avoid memory leak
clear_pointer(v);
cout << "Vector size after erase " << v.size() <<endl;


v.push_back(base::myfactory(0));
v.push_back(base::myfactory(1));
v.push_back(base::myfactory(2));
cout << "Vector size before erase " << v.size() <<endl;
main_display(v);


clear_pointer(v);
cout << "Vector size after erase " << v.size() <<endl;

return 0;
}
