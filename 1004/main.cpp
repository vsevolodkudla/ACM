/*
Завдання:
Знайти квадрат N-го простого числа.
*/
#include <iostream>

int main()
{
    unsigned long N,P=2,C=1;
    std::cin>>N;
    while(--N)
    {
        while(C!=P)
        {
            C=1;
            P++;
            while(++C!=P)
                if(!P%C) break;
        }
    }
    std::cout<<P*P;
    return 0;
}
