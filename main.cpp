#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {5, 4, 3};
    int num          = 0;
    int numInputs    = 3;


    for (int i = 0; i < numInputs; i++)
    {
        cout << "Enter a number: ";
        cin  >> num;

        nums.push_back(num);
    }

    for (int i : nums)
    {
        cout << i << " ";
    }
}