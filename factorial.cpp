#include<iostream>
using namespace std;
class abc
{
    int counter,n;
public:
    void display();
    long factorial(int);
};
long abc::factorial(int n)
{
    int counter;
    long fact=1;
    for(int counter=1;counter<=n;counter++)
        fact=fact*counter;
    return fact;
}
void abc::display()
{
    cout<<"enter the number:";
    cin>>n;
    cout<<"factorial value is"<<factorial(n);
}
int main()
{
abc a;
a.display();
return 0;
}
