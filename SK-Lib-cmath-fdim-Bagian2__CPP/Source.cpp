#include <cmath>
#include <iostream>
#include <conio.h>

/*
    Source by GeeksForGeeks
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

int main() {
    //perbedaan positif untuk 2.0 dan 1.0 adalah 1
    cout << "fdim of (2.0, 1.0) is " << fdim(2.0, 1.0) << endl;

    //di sini 1.0 < 2.0 jadi outputnya 0
    cout << "fdim of (1.0, 2.0) is " << fdim(1.0, 2.0) << endl;

    // di sini -2.0 < -1.0 jadi outputnya 0
    cout << "fdim of (-2.0, -1.0) is " << fdim(-2.0, -1.0) << endl;

    //perbedaan positif untuk -1.0 dan -2.0 adalah 1
    cout << "fdim of (-1.0, -2.0) is " << fdim(-1.0, -2.0) << endl;

    _getch();
    return 0;
}