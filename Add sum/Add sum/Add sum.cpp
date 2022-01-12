// Add sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void print(std::vector<int> const& input);
class Solution {

public:

    void check_and_add(int a,vector<int>& result) {
        bool is_existing = false;
        for (int i = 0; i < result.size(); i++) {
            if (result.at(i) == a) {
                is_existing = true;
            }
            else {
               
            }
        }

        if (is_existing == false) {
            result.push_back(a);
        }
        else {
            cout<<"Value already exists.";
        }
    }

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result{0};
        cout << "size of vector:" << nums.size() << "\n";
        for (int i = 0; i < nums.size(); i++) {
            int val1 = nums.at(i);
            for (int j = i+1; j < nums.size(); j++) {
                cout << "value of j: "<<j<<"\n";
                if (val1 + nums[j] == target) {
                    result.pop_back();
                    check_and_add(val1,result);
                    check_and_add(nums.at(j),result);
                    cout << "value pushed" << val1 << " " << nums.at(j) << "\n";
                    print(result);
                }
            }
        }
        return result;

    }
}; 

void print(std::vector<int> const& input)
{   
    cout << "size of the result vector" << input.size()<<"\n";
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}

int main()
{
    std::cout << "Hello World!\n";
    Solution s;
    vector<int> v{ 2, 4, 11, 3 };
    vector<int> result = s.twoSum(v, 6);
    cout << "\n\nresult acquired:";
    print(result);
}


