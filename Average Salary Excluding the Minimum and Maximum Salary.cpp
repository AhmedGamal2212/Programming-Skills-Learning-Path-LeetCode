class Solution {
public:
    double average(vector<int>& salary) {
        int total = accumulate(salary.begin(), salary.end(), 0ll),
        maxi = *max_element(salary.begin(), salary.end()), mini = *min_element(salary.begin(), salary.end());

        return  double(total - maxi - mini) / (salary.size() - 2); 
    }
};