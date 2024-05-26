#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
    try
    {
        int numerator = 10;
        int denominator = 0;
        int result;

        if(denominator == 0)
        {
            throw runtime_error
               (" division is not allowed");
            
        }
        result = numerator / denominator ;
        cout<< "Result =" << result <<endl;
    }
   

    catch(const exception& e)
    {
        cout<<"Exception :" << e.what() <<endl;
    }
    return 0;
    
}


