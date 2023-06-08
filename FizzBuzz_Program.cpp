#include<iostream>
using namespace std;



int main()
{
    cout << "Enter a number to generate Fizz buzz up to ?: ";
    static int num;
    cin >> num;
    num+1;
    for (int i =0;i<num;i++)
    {
        if (i%5==0 && i%3==0)
        {
            cout << "FizzBuzz" << " "<< i <<"\n";
        }
        else if (i%5==0)
        {
            cout << "Fizz" << " "<< i <<"\n";
        }
        else if (i%3==0)
        {
            cout << "Buzz" << " "<< i <<"\n";
        }
        
    }
    return 0;
}