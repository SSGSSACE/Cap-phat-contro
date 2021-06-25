#include <iostream>
using namespace std;

int main()
{
    int *P;
    P = new int(100);
    if (P != NULL)
    {
        cout << *P << "\n";
        delete P;
    }
    else
        cout << "Khong con du bo nho de cap phat\n";
    return 0;
}