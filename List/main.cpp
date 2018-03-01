#include <list>
#include <iostream>

using namespace std;
void a(int b, int c,int d,int e)
{
    int sum=0;
    list<int> numbers;
    numbers.push_front(c);
    numbers.push_front(b);
    numbers.push_back(d);
    numbers.push_back(e);
    list<int>::iterator it;
    it=numbers.begin();
    while(it!=numbers.end())
    {
        sum+=*it;
        cout<<*it<<" ";
        it++;


    }

    cout<<a;
    cout<<endl;
    cout<<sum;
}
int main()
{

    a(13,5,4,3);

}
