#include <iostream>
using namespace std;

int main(){
    int i = 4;

    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << ptr << endl;
    cout << "&ptr " << &ptr << endl;
    cout << ptr2 << endl;

    cout << endl;
    cout << "i " << i << endl;
    cout << "*ptr " <<*ptr << endl;
    cout << "&ptr " <<&ptr << endl;
    cout << "*ptr2 " << *ptr2 << endl;
    
}