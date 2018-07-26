#include<iostream>
using namespace std;
class person
{
    int i,j,n;
public:
    void getdata();
    void display();
};
void person::getdata()
{
    cout<<"Enter the value of n:";
    cin>>n;
}
void person::display()
{
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
}
int main()
{
    person p;
    p.getdata();
    p.display();
    return 0;
}
