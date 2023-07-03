/* Example of typecasting */
#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter the character" << endl;
    cin >> ch;
    int a = ch;
    if (a>=65 && a<=91)
    {
        cout << "Upper Case";
    }
    else if(a>=97 && a<=122)
    {
        cout << "Lower case";
    }
    else{
        cout << "This is number";
    }
}