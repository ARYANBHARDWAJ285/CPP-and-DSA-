#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int numOfSubarrays(vector<int> &arr, int k, int threshold)
    {
        int n = arr.size();
        int count = 0;
        int sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += arr[i];
        }
        if (sum / k >= threshold)
        {
            count++;
        }
        for (int i = k; i < n; i++)
        {

            sum = sum - arr[i - k] + arr[i];

            if (sum / k >= threshold)
            {
                count++;
            }
        }

        return count;
    }
};

int main()
{
    cout << "Enter the Size of the Array :- ";
    int n;
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the element of the Array :- ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the Window Size :- ";
    int k;
    cin >> k;

    cout << "Enter the threshold value :- ";
    int threshold;
    cin >> threshold;

    Solution obj;

    int result = obj.numOfSubarrays(arr, k, threshold);

    cout << "Output is :- " << result << endl;

    return 0;
}
