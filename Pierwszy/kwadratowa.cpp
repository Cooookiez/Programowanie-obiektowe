#include <cmath>
#include "kwadratowa.h"


std::pair<float,float> kwadratowa(float a, float b, float c)
{
    float delta = b*b-4*a*c;
    if(delta > 0)
    {
        float x0 = (-b+sqrt(delta))/(2*a);
        float x1 = (-b-sqrt(delta))/(2*a);
        if (x0 > x1)
            std::swap(x0, x1);
        return {x0, x1};
    }
    if(delta  < 0)
    {
        return{NAN,NAN};
    }
    else
    {
        return {-b / (2 * a),NAN};
    }
}
