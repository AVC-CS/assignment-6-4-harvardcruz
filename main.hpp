#include <iostream>
using namespace std;

void swapValues(int &, int &);
void swapValues(int &, int &, int &);
void swapValues(int &, int &, int &, int &);

int num1, num2, num3, num4;

void swapValues(int &n1, int &n2){
    int swap = n1;
    n1 = n2;
    n2 = swap;
}
void swapValues(int &n1, int &n2, int &n3){
    int swap = n1;
    n1 = n2;
    n2 = n3;
    n3 = swap;
}
void swapValues(int &n1, int &n2, int &n3, int &n4){
    swapValues(n1, n4);
    swapValues(n2, n3);
}