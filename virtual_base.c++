#include<iostream>
using namespace std;

class A{
    public :
        int a;

        A(){
            a = 10;
        }
};

class B : public virtual A{};
class C : public virtual A{};

class D : public B, public C{};

int main(){
    D obj;

    cout<< "a =" << obj.a<<endl;
    return 0;
}