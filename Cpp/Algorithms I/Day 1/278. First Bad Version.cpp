// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int pos = 1;
        int begin = 0;
        int end = n;
        int mid;

        while(begin <= end){
            mid = begin + (end-begin)/2;

            if(isBadVersion(mid)){
                pos = mid;
                end = mid - 1;
            }
            else{
                begin = mid + 1;
            }
        }

        return pos;
    }
};
