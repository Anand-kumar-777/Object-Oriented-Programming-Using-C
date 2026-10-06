#include<iostream>

#include<algorithm>
using namespace std;

int trappedWater(int height[], int n){
    //Calculate the Left max Boundry
    int* leftMax = new int[n];
    leftMax[0] = height[0];
    for(int i = 1; i<n; i++){
        leftMax[i] = max(height[i], leftMax[i-1]);
    }

    //Calculate the Right Max Boundry
    int* rightMax = new int[n];
    rightMax[n-1] = height[n-1];
    for(int j = n-2; j>=0; j--){
        rightMax[j] = max(height[j], rightMax[j+1]);
    }

    int totalTrappedWater = 0;
    for(int k = 0; k<n; k++){
        int minWaterLevel  = min(leftMax[k], rightMax[k]);
        totalTrappedWater += minWaterLevel - height[k];
    }

    return totalTrappedWater;
};

int main(){
    int height[] = {9,8,6,0,5,4,8,3,10};
    int n = sizeof(height) / sizeof(height[0]);
    cout<<trappedWater(height, n);

}