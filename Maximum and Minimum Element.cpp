/*
    To find the maximum and minimum element in an array
    To find the second largest element in an array
    To find the second smallest element in an array
*/

        // To find the maximum and minimum element in an array
/*                    
                    #include<bits/stdc++.h>
                    using namespace std;
                    
                    int maximum(int arr[], int n) {
                        int max = INT_MIN;
                        for(int i=0;i<n;i++) {
                            if(arr[i]>max) {
                                max = arr[i];
                            }
                        }
                        return max;
                    }
                    
                    int minimum(int arr[], int n) {
                        int min = INT_MAX;
                        for(int i=0;i<n;i++) {
                            if(arr[i]<min) {
                                min = arr[i];
                            }
                        }
                        return min;
                    }
        
        // To find the second largest element in an array
        
                    int secondLargest(int arr[], int n) {
                        int first=0, second=-1;
                        for(int i=1;i<n;i++) {
                            if(arr[i]>arr[first]) {
                                second = first;
                                first = i;
                            }
                            else if(arr[i]<arr[first]) {
                                if(second == -1 || arr[second]<arr[i]) {
                                    second = i;
                                }
                            }
                        }
                        return second;
                    }
        
        // To find the second smallest element in an array
        
                    int secondSmallest(int arr[], int n) {
                        int first = 0, second = -1;
                        for(int i=1;i<n;i++) {
                            if(arr[i]<arr[first]) {
                                second = first;
                                first = i;
                            }
                            else if(arr[i]>arr[first]) {
                                if(second == -1 || arr[second]>arr[i]) {
                                    second = i;
                                }
                            }
                        }
                        return second;
                    }
                    
                    int main() {
                        int arr[] = {10, 12, 20, 4};
                        cout << "The maximum element in an array is :: " << maximum(arr, 4) << endl;
                        cout << "The minimum element in an array is :: " << minimum(arr, 4) << endl;
                        cout << "The second largest element in an array is :: " << arr[secondLargest(arr, 4)] << endl;
                        cout << "The second smallest element in an array is :: " << arr[secondSmallest(arr, 4)];
                    }
*/
