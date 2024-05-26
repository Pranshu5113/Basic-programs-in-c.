#include<iostream>
using namespace std;

class A{
    int num1=20,num2=10;
    public:
        void add(){
            int sum = num1+num2;
            cout<<"Addition = "<<sum<<endl;
        }
        void add(int a,int b){
            int sub = a - b;
            cout<<"Substract = "<<sub<<endl;
        }
};

int main()
{
    A obj;

    obj.add();
    obj.add(20,30);

    return 0;
}