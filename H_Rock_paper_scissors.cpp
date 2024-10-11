#include <bits/stdc++.h>
using namespace std;

int main(){
   string f, m, s;
   cin >> f >> m >> s;
 
 if(f != m && m== s){
    if(f == "rock" && (s == "scissors")){
        cout << "F" << endl;
    }
    else if(f == "paper" && (s == "rock" )){
        cout << "F" << endl;
    }
    else if(f == "scissors" && (s == "paper" )){
        cout << "F" << endl;
    }
    else{
    cout << "?" << endl;
 }
    
 }
 else if(m != f && f== s){
      if(m == "rock" && (s == "scissors" )){
        cout << "M" << endl;
    }
    else if(m == "paper" && (s == "rock" )){
        cout << "M" << endl;
    }
    else if(m == "scissors" && (s == "paper" )){
        cout << "M" << endl;
    }
    else{
    cout << "?" << endl;
 }
 }
 else if(s != f && m==f){
    if(s == "rock" && (f == "scissors" )){
        cout << "S" << endl;
    }
    else if(s == "paper" && (f == "rock"  )){
        cout << "S" << endl;
    }
    else if(s == "scissors" && (f == "paper")){
        cout << "S" << endl;
    }
    else{
    cout << "?" << endl;
 }
 }
 else{
    cout << "?" << endl;
 }

}