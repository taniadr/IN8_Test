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
    int m = 10;
    cout<<div(m);
    return 0;
}
