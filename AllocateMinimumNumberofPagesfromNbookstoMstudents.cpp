 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
    //int n; cin >> n;

    vector<int>arr {12,34,67,90};

    int m = 2;
int maxVal = arr[0];
int sum = 0;
for(int i = 0;i < arr.size(); i++){
     sum += arr[i];
    if(arr[i] > maxVal){
        maxVal = arr[i];
        }
    
}
    int ans =0;
    int start = maxVal ;
    int end = sum;
    cout << "start " << start << "End " << end;
    int count = 0;
    while(start <= end){
        int mid = start + (end - start)/2;
        cout << "mid " << mid << endl;
        count = 1;
        int temp = 0;
        for(int i = 0;i < arr.size(); i++){
            temp += arr[i];
            if(temp > mid){
                count ++;
                temp = arr[i];
            }
        }

        if(count >= m){
            start = mid +1;
        }
        
        else{
            ans = mid;
            end = mid -1;
        }
       
    }

    cout << ans << endl;
 }