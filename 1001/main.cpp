/*
Завдання:
Для заданого цілого а та натурального k обчислити a^k.
*/
#include <iostream>
using namespace std;

int main()
{
    int a,k,q=1;
    cin>>a>>k;
    while(k--)
        q*=a;
    cout<<q;
    return 0;
}
