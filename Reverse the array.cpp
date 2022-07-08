/*
    Reverse the array
*/

        // Reverse the array
/*        
                    #include<bits/stdc++.h>
                    using namespace std;
                    
                    void reverse(int arr[], int n) {
                        int i=0,j=n-1;
                        while(i<j) {
                            swap(arr[i], arr[j]);
                            i++;
                            j--;
                        }
                    }
                    
                    int main() {
                        int arr[] = {10, 12, 20, 4};
                        reverse(arr, 4);
                        for(int i=0;i<4;i++) {
                            cout << arr[i] << " ";
                        }
                    }
*/

        // Reverse the array by using vector data structure
/*                    
                    #include<bits/stdc++.h>
                    using namespace std;
                    
                    void reverse(vector<int> arr) {
                        int i=0,j=arr.size()-1;
                        while(i<j) {
                            swap(arr[i], arr[j]);
                            i++;
                            j--;
                        }
                        
                        // in-built function
                        /*
                            reverse(arr.begin(), arr.end());
                        //
                    }
                    
                    int main() {
                        vector<int> arr{10, 12, 20, 4};
                        reverse(arr);
                        for(int i=0;i<arr.size();i++) {
                            cout << arr[i] << " ";
                        }
                        
                        // Ouput the vector using iterator method
                        /*
                            vector<int> :: iterator it = arr.begin();
                            for(it=arr.begin();it!=arr.end();it++) {
                                cout << *it << " ";
                            }
                            
                                        // OR
                            
                            for(auto it : arr) {
                                cout << it << " ";
                            }
                        //
                    }
*/
