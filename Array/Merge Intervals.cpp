 
 vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> MergeIntervals;
        if(intervals.size()==0) return MergeIntervals;

        sort(intervals.begin(),intervals.end());
        vector<int>tempIntervals = intervals[0];
        
        for(auto it:intervals){
            if(it[0]<=tempIntervals[1]){
                tempIntervals[1] = max(it[1],tempIntervals[1]);
            }
            else{
                MergeIntervals.push_back(tempIntervals);
                tempIntervals = it;
            }
        }
        MergeIntervals.push_back(tempIntervals);
            return MergeIntervals; 
    }