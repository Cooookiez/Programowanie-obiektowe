#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    std::cin >> x,a,b,c;
    auto lambda =[]( float x, float a, float b, float c){ return a*pow(x,2)+b*x + c;};
    cout << lambda(x,a,b,c) << "XD";
    return 0;
}
