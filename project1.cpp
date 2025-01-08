//SIP Calculator

#include<iostream>
#include<cmath> //for using pow function
using namespace std;

float SIP (float P, float R, int N) {
    //P=monthly investment , R= anual interest rate , N=time period
    float operation = P*(pow(1+R/100,N)-1)/(R/100) * (1+R/100);
    return operation; //return the calculated SIP Value

}



int main() {
    //example use
    float P =1000;
    float R = 12.5;
    int N = 15;

    float result = SIP(P,R,N);

    cout << result << endl;


    return 0;
}