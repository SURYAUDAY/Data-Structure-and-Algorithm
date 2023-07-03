/* check wether it is positive, negative or zero */
#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter the number to check wether it is positive, negative or zero "<< endl;
    cin >> a;
    if(a>0){
        cout << a << " it is positive number" << endl;
    }
    else if(a<0){
        cout << a << " it is negative number" << endl;
    }
    else{
        cout << " it is zero " << endl;
    }
}