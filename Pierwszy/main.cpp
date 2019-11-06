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
    float a,b,c;
    if (argc < 3) throw std::logic_error("POTRZEBA CO NAJMNIEJ 4 ARGUMENTÓW  CLI");


    a = 1; // std::stoi(argv[2]);
    b = 1; // std::stoi(argv[3]);
    c = 1; // std::stoi(argv[4]);




        auto [x0, x1] = kwadratowa(a, b, c);    // może sygnalizować błąd spowodowany starą wersją QTCreatora
        cout << x0 << "\t" << x1 << "\n";



    for (auto i:test)
        suma+=i;
    printf("%d\n", suma);
    return 0;
}
