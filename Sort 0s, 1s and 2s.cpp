/*
        // Sort an array of 0s, 1s and 2s without using sorting methods
*/
        // Sort an array of 0s, 1s and 2s without using sorting methods
/*                    
                    #include<bits/stdc++.h>
                    using namespace std;
                    
                    void sort012method1(vector<int> &arr) {
                        int count=0, count1=0, count2=0;
                        for(int i=0;i<arr.size();i++) {
                            if(arr[i]==0) count++;
                            else if(arr[i]==1) count1++;
                            else count2++;
                        }
                        for(int i=0;i<count;i++) {
                            arr[i] = 0;
                        }
                        for(int i=count;i<count+count1;i++) {
                            arr[i] = 1;
                        }
                        for(int i=count+count1;i<count+count1+count2;i++) {
                            arr[i] = 2;
                        }
                    }
                    
                    void sort012method2(vector<int> &arr) {
                        int low = 0, mid = 0, high = arr.size()-1;
                        while(mid <= high) {
                            if(arr[mid]==0) {
                                swap(arr[low], arr[mid]);
                                low++;
                                mid++;
                            }
                            else if(arr[mid]==1) {
                                mid++;
                            }
                            else {
                                swap(arr[mid], arr[high--]);
                            }
                        }
                    }
                    
                    int main() {
                        vector<int> arr{2,0,2,1,1,0};
                        sort012method1(arr);
                        for(auto it : arr) {
                            cout << it << " ";
                        }
                        cout << endl;
                        vector<int> arr{2,0,2,1,1,0};
                        sort012method2(arr);
                        for(auto it : arr) {
                            cout << it << " ";
                        }
                    }
*/
