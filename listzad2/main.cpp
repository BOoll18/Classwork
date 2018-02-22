#include <list>
#include <iostream>

using namespace std;
void a(double b, double c,double j ,double d,double e)
{
    cin>>j;
    list<double> numbers;
    numbers.push_front(c);
    numbers.push_front(b);
    numbers.push_back(e);
    numbers.push_back(d);
    list<double>::iterator it;
    it=numbers.begin();
    numbers.insert(it,j);
    while(it!=numbers.end())
    {
        cout<<*it<<"_";
        it++;
    }
}
int main()
{
    a(2.13,4.15,4.20,3.15);
    cout<<a;
}
