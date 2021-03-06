#include<iostream>
using namespace std;


class Complex{

    private:
        int real;
        int img;
    
    public:
        Complex(int r=0, int i=0)
        {
            real = r;
            img = i;
        }    

        Complex operator+(Complex c)
        {
            Complex temp;
            temp.real = real + c.real;
            temp.img = img + c.img;
            return temp;
        }

        void display()
        {
            cout<<real<<"+i"<<img<<endl;
        }
};

int main()
{
    Complex c1(10,4),c2(1,1),c3;
    c3 = c1 + c2;
    c3.display();
}
