//
// Created by eric on 11/5/2022.
//use and display a variable

#include <iostream>

int main()
{
    using namespace std;

    int carrots;                //declare an integer variable
                                //空行将声明语句和其他部分分割开来。但cpp并不那么常见。
    carrots = 25;               //assign a value to variable
    cout << "I have ";
    cout << carrots;            //display the value of the variable
    cout << " carrots";
    cout << endl;
    carrots = carrots - 1;      //modify the variable
    cout << "Crunch,crunch. Now I have " << carrots << " carrots." << endl;
    return 0;                   //主函数中可以自动添加
}
