class Solution {
    public:
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
            if (intervals.size() == 1) return intervals;
            sort(intervals.begin(), intervals.end());
            vector<vector<int>> Vc = {{intervals[0][0], intervals[0][1]}};
            int idx = 0;
            for (int i = 1; i < intervals.size(); i++) {
                if (intervals[i][0] >= Vc[idx][0] &&
                    intervals[i][0] <= Vc[idx][1]) {
                    Vc[idx][1] = max(Vc[idx][1], intervals[i][1]);
                } else {
                    Vc.push_back(intervals[i]);
                    idx++;
                }
            }
            return Vc;
        }
};