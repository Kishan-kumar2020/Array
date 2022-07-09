/*
        // Stock Buy and Sell
*/
        // Stock Buy and Sell
/*
                    #include<bits/stdc++.h>
                    using namespace std;
                    
                    int stockBuyAndSell(vector<int> arr) {
                        int min = INT_MAX;
                        int max = 0;
                        for(int i=0;i<arr.size();i++) {
                            if(arr[i]<min) {
                                min = arr[i];
                            }
                            else {
                                if(max < arr[i]-min) {
                                    max = arr[i]-min;
                                }
                            }
                        }
                        return max;
                    }
                    
                    int main() {
                        vector<int> arr{7,1,5,3,6,4};
                        cout << stockBuyAndSell(arr);
                    }
*/
