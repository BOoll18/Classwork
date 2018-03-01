#include <list>
#include <iostream>

using namespace std;
void a(int b, int c,int d,int e)
{
    list<int> numbers;
    if(c>10)
    {
       numbers.push_front(c);
    }
    else
    {
        cout<<" ";
    }
    if(b>10)
    {
       numbers.push_front(b);
    }
    else
    {
        cout<<" ";
    }
    if(d>10)
    {
       numbers.push_front(d);
    }
    else
    {
        cout<<" ";
    }
    if(e>10)
    {
       numbers.push_front(e);
    }
    else
    {
        cout<<" ";
    }
    list<int>::iterator it;
    it=numbers.begin();
    while(it!=numbers.end())
    {
        cout<<*it<<"_";
        it++;
    }
}
int main()
{
    a(5,12,14,2);

}
