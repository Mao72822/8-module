#include <iostream>
#include "Array.cpp"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
     
    Array<int> a(50);

    for (auto i = 0; i < a.getLength(); i++)
    {
        a.setElement(i * i, i);
    }

    for (auto i = 0; i < a.getLength(); i++)
    {
        cout << "a[ " << i << " ] = " << a.getElement(i) << endl;
    }

  

    return 0;
}