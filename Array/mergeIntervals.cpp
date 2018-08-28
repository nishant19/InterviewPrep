// Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).

// You may assume that the intervals were initially sorted according to their start times.

// Example 1:

// Given intervals [1,3],[6,9] insert and merge [2,5] would result in [1,5],[6,9].

// Example 2:

// Given [1,2],[3,5],[6,7],[8,10],[12,16], insert and merge [4,9] would result in [1,2],[3,10],[12,16].

// This is because the new interval [4,9] overlaps with [3,5],[6,7],[8,10].

// Make sure the returned intervals are also sorted.

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool isOverlap(Interval a,Interval b){
    if(max(a.start,b.start)>min(a.end,b.end)) 
        return false;
    return true;
}

vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    vector<Interval> result = {};
    int size = intervals.size();
    int startMerge, endMerge ;
    
    if(size==0){
        result.push_back(newInterval);
        return result;
    }

    
    // at the end
    
    if(newInterval.start > intervals[size-1].end){
        for(int i=0;i<intervals.size();i++){
            result.push_back(intervals[i]);
        }
        result.push_back(newInterval);
        return result;
    }
    
    // in the middle or in the start as well
    
    for(int i=0;i<intervals.size();i++){
        bool overLap = isOverlap(intervals[i],newInterval);
        if(!overLap){
            if(newInterval.end < intervals[i].start){
                startMerge = i;
                endMerge = i-1;
                break;
            }
        }
        else{
            startMerge = i;
            while(i<size && isOverlap(intervals[i],newInterval)){
                i++;
            }
            endMerge = i-1;
            newInterval.start = min(intervals[startMerge].start,newInterval.start);
            newInterval.end = max(intervals[endMerge].end,newInterval.end);
            break;
        }
    }
    
    for(int i=0;i<startMerge;i++){
        result.push_back(intervals[i]);
    }
    result.push_back(newInterval);
    for(int i=endMerge+1;i<size;i++){
        result.push_back(intervals[i]);
    }
    
    return result;
    
    
}
