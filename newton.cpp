#include <iostream>
#include <stdexcept>
#include <array>
#include <iomanip>
#include "newton.h"


using namespace std;

static long double factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

static long double newton(int n, int k)
//funkcja obliczajaca C(n,k) wykorzystujac funkcje sil()
{
    if (n < 0 || k < 0 || n < k)
    {
        cout << "Bledne dane wejsciowe wymane n>k dla C(n,k) oraz n,k > 0" << endl;
        throw std::invalid_argument("Bledne dane wejsciowe wymane n>k dla C(n,k) oraz n,k > 0");
    }
    return factorial(n) / (factorial(k) * factorial(n - k));
}

// Driver program
int main()
{
//    cout<<factorial(3)<<endl;
//    cout<<factorial(4)<<endl;
//    cout<<factorial(5)<<endl;
//    cout<<factorial(20)<<endl;
//    cout<<factorial(30)<<endl;
//    cout<<factorial(40)<<endl;
    
    return 0;
}



