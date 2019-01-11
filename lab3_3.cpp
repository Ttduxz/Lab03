#include <iostream>

using namespace std;
int main(){
    int a = 6;
    double sum = 0;

    while(a<=19){
        sum = 1.0/a + sum;
        a++;
    }
    cout << sum;
    return 0;
}

