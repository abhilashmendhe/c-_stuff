#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    ofstream ofs("/home/amendhe/Desktop/MyFile.txt",ios::trunc);
    ofs<<"Abhilash"<<endl;
    ofs<<25<<endl;
    ofs<<"IT"<<endl;
    ofs.close();
}