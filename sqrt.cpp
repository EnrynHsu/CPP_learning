// github test-pull
// Created by eric on 11/5/2022.
// using the sqt() function

#include <iostream>
//#include <cmath>                                     //or math.h
double sqrt(double _X);                                //在vs中是可以的
int main()
{
    using namespace std;

    double area;
    cout << "Enter the floor area, in square feet, of your home: "; //最后一个空格居然显示在下一行的开头！！！（在vs中显示无误）
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That is the equivalent of a square " << side
         << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
    return 0;
}
