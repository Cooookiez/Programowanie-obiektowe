#include <iostream>
#include<cmath>
#include<vector>
#include<cstdio>
using namespace std;
vector<int> test(100, 857142);
int suma0;
int main()
{
    int x,a,b,c;
    std::cin >> x,a,b,c;
    auto lambda =[]( float x, float a, float b, float c){ return a*pow(x,2)+b*x + c;};
    cout << lambda(x,a,b,c) << "XDasdasd";
    return 0;

    for (auto i:test)
        suma+=i;
    printf("%d\n", suma);
}
