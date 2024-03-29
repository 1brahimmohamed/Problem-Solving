class Solution {
public:
double average(vector<int>& salary) {

    sort(salary.begin(), salary.end());

    salary.pop_back();
    salary.erase(salary.begin());

    int sum = 0;
    
    for(int x: salary){
        sum += x;
    }

    return (double)sum/salary.size();
}
};
