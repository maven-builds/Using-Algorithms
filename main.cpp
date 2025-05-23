// Binary Search Algorithm

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int userNum;
    int numMin = -1;
    int numMax = 100;
    
    cout << "Binary Search Algorithm! \n\n";
    
    cout << "What Number Should I Guess? ";
    cin >> userNum;
    
    if (userNum <= 0 & userNum < 101)
    {
        cout << "\n Let's begin!";
    }
    
    else if (userNum < numMin)
    {
        cout << "Error! Too low!";
    }
    
    else if (userNum > numMax)
    {
        cout << "Error! Too high!";
    }
    
}
