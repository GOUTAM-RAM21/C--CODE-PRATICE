#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Pair format: {startTime, endTime}
bool compareByEndTime(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

vector<pair<int, int>> activitySelection(vector<pair<int, int>> &activities) {
    // Step 1: Sort activities by finish time
    sort(activities.begin(), activities.end(), compareByEndTime);

    vector<pair<int, int>> selectedActivities;
    int lastFinishTime = 0;

    // Step 2: Select activities
    for (auto activity : activities) {
        if (activity.first >= lastFinishTime) {
            selectedActivities.push_back(activity);
            lastFinishTime = activity.second;
        }
    }

    return selectedActivities;
}

int main() {
    vector<pair<int, int>> activities = {{1, 3}, {2, 4}, {3, 5}, {0, 6}, {5, 7}, {8, 9}, {5, 9}};

    vector<pair<int, int>> selected = activitySelection(activities);

    cout << "Selected Activities:\n";
    for (auto act : selected) {
        cout << "(" << act.first << ", " << act.second << ")\n";
    }

    return 0;
}
