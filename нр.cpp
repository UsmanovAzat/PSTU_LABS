

#include <iostream>
#include <math.h>
using namespace std;
double basefunktion(double x){
    const double PI = 3.1415926535;
    double y = 0.5 - PI/4*abs(sin(x));
    return y;
}
double rtcurentfuntion(double x, int n) {
    double  y=0;
    for (int i = 1; i <= n;i++)
    {
        y+= cos(2 * i * x) / (4 * i*i - 1);     
    }
    return y;
}
double functiobacaracy(double x, double epsilon)
{
    double y = 0;
    int i = 0;
    while (true)
    {
        i++;
        double partvalue = cos(2 * i * x) / (4 * i * i - 1);
        y += partvalue;
        if (partvalue <= epsilon)
            break;
    }
    return y;
}
int main()
{
    
    for (double x = 0.1; x < 0.8; x += (0.8 - 0.1) / 10)
    {
        cout << basefunktion(x) << " " << rtcurentfuntion(x, 50) <<" " << functiobacaracy (x,0.0001)<<endl;
    }

}

