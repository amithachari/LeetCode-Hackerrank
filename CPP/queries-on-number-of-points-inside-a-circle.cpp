class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> result;
        for(size_t i = 0; i < queries.size(); i++){
            int temp = 0;
            for(size_t j = 0; j < points.size(); j++){
                int a = queries[i][0], b=queries[i][1], r = queries[i][2];
                int x = points[j][0], y = points[j][1];
                int dist = (x - a)*(x-a) + (y - b)*(y - b);
                if(dist - r*r <= 0){
                    temp++;
                }
            }
            result.push_back(temp);
        }
        return result;
    }
};
