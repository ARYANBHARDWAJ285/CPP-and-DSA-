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
    int N,s,t ;
    vector<int> V ;
    cin>>N;
    int cum1= 0  , cum2 =0 ;
    int winner = 0 , lead = 0 ;
    for (int i =  0  ; i < N ; i++)
    {
        cin>>s>>t;
        cum1 += s ;
        cum2 += t ;
        int currentwinner ;
        int currentlead ;
        if(cum1>cum2)
        {
            currentwinner = 1 ;
            currentlead =  cum1 - cum2 ;
        }
        else
        {
            currentwinner = 2 ;
            currentlead = cum2 - cum1 ;
        }
        if(currentlead > lead)
        {
            lead = currentlead;
            winner = currentwinner ;
        }
    
    }
    cout<<winner<<" "<<lead ;
    
    return 0;
}