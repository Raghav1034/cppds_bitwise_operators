#include <iostream>
using namespace std;

int main() {    
    int i = 67; int bit_to_be_set;
    int set; int reset ;
    int bit_to_be_reset;

 
    cout << "Enter the Bit Position to be set : "; 
    cin >> bit_to_be_set; 
    set = i|(1<<bit_to_be_set);


    cout << "Enter the Bit Position to be reset : "; 
    cin >> bit_to_be_reset; 
    reset = i&(~(1<<bit_to_be_reset));


    cout << "Your number is :  " << set << endl; 
    cout << "Your number is :  " << reset << endl; 

    return 0;
    
}