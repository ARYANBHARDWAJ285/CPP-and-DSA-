#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n ;
    
    cin>>n ;
    int arr[n ];
    for(int i =  0  ; i < n ;  i++)
    {
        cin>>arr[i];
    }
    for(int i  =  0  ; i <  n-1 ; i ++)
    {
        if(i%2 ==  0 )
        {
            if(arr[i] >arr[i+1])
            {
                swap(arr[i], arr[i+1]);
            }
        }
        else{
            if(arr[i]<arr[i+1])
            {
                swap(arr[i], arr[i+1]);
            }
        }
    }
    for(int i = 0  ; i  < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}