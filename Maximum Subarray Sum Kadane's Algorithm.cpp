/*
        To find the maximum subarray sum
               KADANE'S ALGORITHM
*/

        // To find the maximum subarray sum
        //       KADANE'S ALGORITHM
/*
                    #include<bits/stdc++.h>
                    using namespace std;
                    
                    int maxSubarraySum(vector<int> &arr, vector<int> &subarray) {
                        int msf = arr[0], meh = 0, s=0;
                      
                        for (int i = 0; i < arr.size(); i++)
                        {
                            meh = meh + arr[i];
                            if (meh > msf) {
                                subarray.clear();
                                msf = meh;
                                subarray.push_back(s);
                                subarray.push_back(i);
                            }
                      
                            if (meh < 0) {
                                meh = 0;
                                s = i+1;
                            }
                        }
                        return msf;
                    }
                    
                    int main() {
                        vector<int> arr{10, 12, 20, 4};
                        vector<int> subarray;
                        cout << maxSubarraySum(arr, subarray) << endl;
                        for(int i=subarray[0];i<=subarray[1];i++) {
                            cout << arr[i] << " ";
                        }
                    }
*/
