// #4

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int count = 0;
    for (size_t i = 0; i < flowerbed.size(); ++i) {
        if (flowerbed[i] == 0) {
            bool prevEmpty = (i == 0) || (flowerbed[i - 1] == 0);
            bool nextEmpty = (i == flowerbed.size() - 1) || (flowerbed[i + 1] == 0);

            if (prevEmpty && nextEmpty) {
                flowerbed[i] = 1;
                count++;
                if (count >= n) return true;
            }
        }
    }
    return count >= n;
}
