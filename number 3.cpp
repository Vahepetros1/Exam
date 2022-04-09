#include <iostream>

using namespace std;

int main()
{

    int number = 5678;

    cout<<"Our number:  "<<number<<endl;
    cout<<"Number inside out:  ";

    cout<<number % 10;
    number/=10;

    cout<<number % 10;
    number/=10;

    cout<<number % 10;
    number/=10;

    cout<<number % 10;
    number/=10;

    return 0;
}