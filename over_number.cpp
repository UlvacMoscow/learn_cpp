# include <iostream>
using namespace std;


int main()
{
    int var;

    cout << "введите число " << endl;
    cin >> var;
    if ((var % 2) == 0)   {
        cout << "число четное";
    } else {
        cout << "число не четное";
    }
}