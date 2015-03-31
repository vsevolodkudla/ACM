/*
Завдання:
Комірник видає по К пар рукавичок кожному робітнику.
Тобто другий робітник отримає рукавички від (K+1)-шої до (2∙K)-ї пари включно,
пару рукавичок номер (2∙K+2) отримає третій робітник і для нього вона буде другою.
Напишіть програму, яка за номером виданої пари рукавичок визначає номер робітника,
якому її видано та порядковий номер цієї пари рукавичок в цього робітника.
*/

#include <iostream>

int main()
{
    unsigned K,N;
    std::cin>>K>>N;
    std::cout<<N/K+1<<" "<<N%K;
    return 0;
}