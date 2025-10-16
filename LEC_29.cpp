#include<iostream>
using namespace std;

//substring
void fun(string s,int index, string temp){
    if(temp.size()!=0){
        cout<<temp<<" ";
       
    }
    if(index==s.size()){
        return;
    }
    if(temp.size()==0){
        fun(s,index+1,temp);
        

    }
    fun(s,index+1,temp+s[index]);
}

//unique permutation of string

void str_par(string s, int index){
    if(s.size()-1==index){
        cout<<s<<" ";
        return;

    }
    for(int i=index;i<s.size();i++){
       
        swap(s[i],s[index]);
        str_par(s,index+1);
        swap(s[i],s[index]);
       
    }
}
int main(){
    string s;
    cout<<"enter string : ";
    cin>>s;
    //fun(s,0,"");
    str_par(s,0);
}

//combination sum : https://www.geeksforgeeks.org/problems/combination-sum-1587115620/1
/*
class Solution {
  public:
    vector<vector<int>> targetSumComb(vector<int> &arr, int target) {
        // code here
        vector<vector<int>>ans;
        vector<int>temp;
        int sum=0;
        find(arr,ans,temp,sum,target,0);
        return ans;
    }
    void find(vector<int> &arr,vector<vector<int>>&ans,vector<int>temp,int sum,int target,int index){
        if(sum==target){
            ans.push_back(temp);
            return;
        }
        if(arr.size()==index){
            
            return;
            
        }
        if(sum>target)
        return;
        find(arr,ans,temp,sum,target,index+1);
        sum+=arr[index];
        temp.push_back(arr[index]);
         find(arr,ans,temp,sum,target,index);
        
    }
};
*/

//phone no combination :https://www.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1

/*
vector<string> possibleWords(vector<int> &arr) {
        // code here
        vector<string>ans;
        if(arr.size()==0)
        return ans;
        vector<string>mapping(8);
        mapping[0]="abc";
        mapping[1]="def";
        mapping[2]="ghi";
        mapping[3]="jkl";
        mapping[4]="mno";
        mapping[5]="pqrs";
        mapping[6]="tuv";
        mapping[7]="wxyz";
        fun(arr,ans,mapping,"",0);
        return ans;
    }
    void fun(vector<int> &arr,vector<string>&ans,vector<string>mapping,string temp,int index){
        if(index==arr.size()){
            ans.push_back(temp);
            return;
        }
        int pos= arr[index]-2;
        for(int i=0;i<mapping[pos].size();i++){
            fun(arr,ans,mapping,temp+mapping[pos][i],index+1);
        }
*/