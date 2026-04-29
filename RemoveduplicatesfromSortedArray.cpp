#include <iostream>
#include <vector>
using namespace std;

vector<int>  removeElement(vector<int> &arr)
{
    vector<int> num;
    int n = arr.size();

    for (int i = 0; i < n ; i++)
    {
        if (arr[i] != arr[i-1])
        {
            num.push_back(arr[i]);
        }
        
    }
    return  num ;
    

    //  Time complexity  =  o(n) 
    //  space complexity  =  o(n)
}
int main()
{
    vector<int> arr = {1, 2, 2, 3, 4, 4, 4, 5,6,6,6,7};
    
    vector<int> num = removeElement(arr);
    
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}