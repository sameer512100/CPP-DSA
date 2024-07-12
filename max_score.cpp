#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
string removesub(string &s,string &matching){
    stack<char> hehe;
    for(char &ch : s){
        if(ch==matching[1] && !hehe.empty() && hehe.top()==matching[0]){
            hehe.pop();
        }
        else{
            hehe.push(ch);
        }
    }
    string temp;
    while(!hehe.empty()){
        temp.push_back(hehe.top());
        hehe.pop();
    }
    reverse(temp.begin(),temp.end());
    return temp;
}
    int maximumGain(string s, int x, int y) {
        int n = s.length();
        int count=0;

        string maxstring = (x>y) ? "ab" : "ba";
        string minstring = (x<y) ? "ab" : "ba";

        string first_string = removesub(s,maxstring);
        int l = first_string.length();

        int charremoved = (n-l);
        count+=(charremoved/2)*max(x,y);

        string second_string = removesub(first_string,minstring);
        charremoved = l-second_string.length();
        count+=(charremoved/2)*min(x,y);
        return count;
    }
};
