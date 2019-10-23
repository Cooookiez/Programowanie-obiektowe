#include <iostream>
#include<cmath>
#include<vector>
#include<cstdio>
#include<stdexcept>
#include "kwadratowa.h"



using namespace std;

vector<int> test(100, 857142);
int suma;

int main(int argc, char* argv[])
{
    float x,a,b,c;
    if (argc < 4) throw std::logic_error("POTRZEBA CO NAJMNIEJ 4 ARGUMENTÓW  CLI");

    x = std::stoi(argv[1]);
    a = std::stoi(argv[2]);
    b = std::stoi(argv[3]);
    c = std::stoi(argv[4]);


    for (int i = 0; i < 10; i++)
    {
        int x = i;
        cout << a << "*" << x << "^2 + " << b << "*" << x << " + " << c << " = " << kwadratowa(x, a, b, c) << "\n";
    }


    for (auto i:test)
        suma+=i;
    printf("%d\n", suma);
    return 0;
}
