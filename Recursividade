#include <iostream>
#include <cstdlib>
#include <map>
using namespace std;


int div(int n){
    if ((n%2==0 && n%3==0) && n%10)
        return n;
    else{
        n++;
        return div(n);
    }
}

int main(void){
    int n = 10;
    cout<<div(10);
    return 0;
}
