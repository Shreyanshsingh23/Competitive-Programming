#include<bits/stdc++.h>
using namespace std;


int main(){
    string s1= "this apple is sweet";
    string s2 = "this apple is sour";

    vector<string> v;
    int j = 0;
    int i = 0;
    string temp = "";
    while( i <= s1.length()){
        
      if(i == s1.length() || s1[i] == ' '){
        v.push_back(temp);
        temp = "";
      }
      else{
        temp += s1[i];
      }
      i++;
    }

    i = 0;
    temp = "";
     while( i <= s2.length()){
        
      if(i == s2.length() || s2[i] == ' '){
        v.push_back(temp);
        temp = "";
      }
      else{
        temp += s2[i];
      }
      i++;
    }

    vector<int> count = countFrequency(v);
    vector<string> ans;

    for(int i = 0;i< count.size(); i++){
        if(count[i] == 1){
            ans.push_back(v[i]);
        }
    }
    

    

    //  string s1 = "this apple is sweet";
    // vector<string> v;

    // string temp = "";
    // for (int i = 0; i <= s1.length(); i++) {
    //     // If we hit a space or end of string, we push the word to the vector
    //     if (i == s1.length() || s1[i] == ' ') {
    //         if (!temp.empty()) {  // Only push non-empty words
    //             v.push_back(temp);
    //             temp = "";  // Reset for the next word
    //         }
    //     } else {
    //         temp += s1[i];  // Build the current word
    //     }
    // }

    // // Output the words
    // for (string e : v) {
    //     cout << e << endl;
    // }
}