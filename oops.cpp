// let talk about oops in c++
#include <iostream>
using namespace std;
//this is a class Declaration
class gopal
{
private:// Access specifier
    int a, b;// Attribute (int variable)
public:
    gopal() // Constructor
    {
        cout<<"con is crated"<<endl;
    }
//this is exp. of functions overloding
    void fun(string a, string b)// Method/function defined inside the class
    {
    cout << a + " " + b;
    }
    void fun(string a) {
    cout << a;
    }
    void fun(int a) {
    cout << a;
    }

    ~gopal()// Destructor
    {
        cout<<"con is decrated"<<endl;
    }
};
class keshri : public gopal {
  public:
};
int main() {
    gopal g;// Create an object of class gopal
    g.fun("hello");
    cout<<endl;
    g.fun("hello","world");
    cout<<endl;
    g.fun(5);
    cout<<endl;
    keshri k;
    cout<<endl;
    k.fun(5);//this function is gopal class but it also Access by keshri class
    cout<<endl;
}
