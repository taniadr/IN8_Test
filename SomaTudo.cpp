#include <iostream>
using namespace std;

int main(void){
    int NumMax = 1000;
    int start = 3;
    int aux=0;
    while (start <= 1000)
    {
        if (start%3 == 0 || start%5 == 0){
            aux += start;
        start++;
    }
    cout<<aux<<endl;
    return 0;
}
