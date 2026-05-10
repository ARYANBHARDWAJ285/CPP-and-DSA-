/*
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score = 0;
        int counter = 0;
        for (int i = 0; i < events.size(); i++) {
            if (counter == 10) {
                break;
            }
            if (events[i] == "W") {
                counter++;
            }
            else if (events[i] == "WD") {
                score = score + 1;
            }
            else if (events[i] == "NB") {
                score = score + 1;
            }
            else {
                if (events[i] == "0") {
                    score = score + 0;
                }
                else if (events[i] == "1") {
                    score = score + 1;
                }
                else if (events[i] == "2") {
                    score = score + 2;
                }
                else if (events[i] == "3") {
                    score = score + 3;
                }
                else if (events[i] == "4") {
                    score = score + 4;
                }
                else if (events[i] == "6") {
                    score = score + 6;
                }
            }
        }
        return {score, counter};
    }
};

int main() {

    int n;
    cout << "Enter number of events: ";
    cin >> n;
    vector<string> events(n);
    cout << "Enter the events: ";
    for (int i = 0; i < n; i++) {
        cin >> events[i];
    }
    Solution obj;
    vector<int> result = obj.scoreValidator(events);
    cout << "Final Score: " << result[0] << endl;
    cout << "Final Counter: " << result[1] << endl;
    return 0;
}

