class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    int left = 1, right = 1000000000;
    while(left < right){
        int mid = left + (right - left) / 2;
        if(canEat(piles, h, mid)) right = mid;
        else left = mid + 1;
    }
    return left;
}
bool canEat(vector<int>& piles, int h, int mid){
    int hour = 0;
    for(int i =0 ; i < piles.size(); i++){
        hour += piles[i] / mid;
        if(piles[i] % mid != 0) hour++;
    }
    return hour <= h;;
}
};
