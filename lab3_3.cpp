#include <iostream>

using namespace std;
int main(){
    int a = 2;
    double sum = 0;

    while(a<=69){
        sum = 1.0/a + sum;
        a++;
    }
    cout << sum;
    return 0;
}

