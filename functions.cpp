// let talk about function in c++
#include <iostream>
using namespace std;
//this is a class and in class exp. of functions overloding
class gopal
{
private:
    int a, b;
public:
    gopal(){
        cout<<"con is crated"<<endl;
    }
//this is exp. of functions overloding
    void fun(string a, string b) {
    cout << a + " " + b;
    }
    void fun(string a) {
    cout << a;
    }
    void fun(int a) {
    cout << a;
    }

    ~gopal(){
        cout<<"con is decrated"<<endl;
    }
};


//funnction with argument
int add(int a, int b) {
    return (a + b);  
}

int main() {
    gopal g;
    g.fun("hello");
    cout<<endl;
    g.fun("hello","world");
    cout<<endl;
    g.fun(5);
    cout<<endl;
    cout <<"a and b sum is : "<< add(10, 20); 
    cout<<endl;
}
