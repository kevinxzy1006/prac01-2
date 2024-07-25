#include <iostream>

using namespace std;

void two_five_nine(int array[], int n) {
    //produce a line of output if the size parameter, n, is less than 1.
    if(n < 1) {
        cout << "Error: Size of parameter is too low." << endl;
    }

    //Use uppercase letters to represent the times of appearance of 2, 5 and 9
    int T = 0;
    int F = 0;
    int N = 0;
    for(int i=0; i<n; i++) {
        //use switch statement to record the occurrance of the numbers
        switch(array[i]) {
            case 2:
                T++;
                break;
            case 5:
                F++;
                break;
            case 9:
                N++;
                break;
        }
    }
    //output result
    cout << "2:" << T << ";" << "5:" << F << ";" << "9:" << N << ";" << endl;
}
