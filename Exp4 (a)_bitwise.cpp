#include <iostream>
using namespace std;

int main() {    
    int i = 67; int j = 32;
    int k = 125; int set; int reset;

    set = (i|j);
    reset = (i&k);
    cout << set << endl;
    cout << reset<< endl ;
    return 0;


    
}