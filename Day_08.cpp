//Time Complexity : O(N)
//Space Complexity : O(1)
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x0 = coordinates[0][0], y0 = coordinates[0][1], 
            x1 = coordinates[1][0], y1 = coordinates[1][1];
        int dx = x1 - x0, dy = y1 - y0;
        for (auto i : coordinates) {
            int x = i[0], y = i[1];
            if (dx * (y - y1) != dy * (x - x1))
                return false;
        }
        return true;
    }
};
