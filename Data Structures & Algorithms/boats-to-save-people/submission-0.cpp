class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
    sort(people.begin(), people.end());
    int left = 0;
    int right = people.size() - 1;
    int boats = 0;

    while (left <= right) {
        int remain=limit-people[right--];
        boats++;
        if (left<= right && remain >= people[left]) {
            left++;
        }
    }
    return boats;
        
    }
};