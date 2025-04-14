// #3

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int max_candies = *max_element(candies.begin(), candies.end());
    vector<bool> output = {};
    for (int candy : candies) {
        output.push_back(candy + extraCandies >= max_candies);
    }
    return output;
}
