#include<iostream>
using namespace std;
class abc
{
public:
    void prime(int);
};
void abc::prime(int n)
{
    for(int i=2;i<=n;i++)
    {
        bool prime=true;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                prime=false;
                break;
            }
        }
        if(prime)cout<<i<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    abc a;
    cout<<"list of prime number below"<<endl;
    a.prime(n);
    return 0;
}
