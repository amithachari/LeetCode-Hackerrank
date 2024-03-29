/**
 * // This is the ArrayReader's API interface.
 * // You should not implement it, or speculate about its implementation
 * class ArrayReader {
 *   public:
 *     int get(int index);
 * };
 */

class Solution {
public:
    int search(const ArrayReader& reader, int target) {
        int l = 0, r = 1;
        if (reader.get(0) == target) return 0;
        
        while(reader.get(r) < target){
            r*=2;
        }
        while(l<=r){
            int mid = l + (r - l)/2;
            if(reader.get(mid) == target) return mid;
            if(reader.get(mid) < target) l = mid + 1;
            else r = mid - 1;
        }
        return -1;
    }
};
