#include <iostream>
#include <vector>
#include <string>
#include "printHelloWorld.h"

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    //使用&直接赋值地址，对原始数据进行修改
    //不用&赋值对应的值，创建副本，不对原始数据修改
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl; 
    //cout << "Hello World" << endl;

   //調用print
   print();
}