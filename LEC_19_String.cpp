#include<iostream>
using namespace std;
#include<algorithm>
int main(){
    /*string str;
    cin>>str;
    // cout<<str;
    // cout<<str.size();*/

    /*string s= "Shreya Bag";
    cout<<s<<endl;
    cout<<s.size();*/

    /*string str;
    getline(cin,str);
    cout<<str;*/

   /*string str="Shreya is a \\\"good\\\" girl";
    cout<<str;*/

    string str1="Coder";
    string str2= "Army";
    // str1=str1+" "+str2;
    // cout<<str1;

    // sort(str1.begin(),str1.end());
    // reverse(str2.begin(),str2.end());

    // str1.push_back('p');
    // cout<<str1<<endl<<str2;

    // char a = 'c'+1;
    // cout<<a;

    //Sorting
    string s;
    cout<<"Enter String: ";
    cin>>s;
    int n=s.size();
    int count[26]={0};
    for(int i=0;i<n;i++){
        int index= s[i]-'a';
        count[index]++;
    }
    
    for(int i=0;i<26;i++){
        char c = i+'a';
        for(int j =0 ; j<count[i];j++){
            cout<<c;
        }
    }
    //Reversing - https://www.geeksforgeeks.org/problems/reverse-a-string/1

    // finding max occuring charector - https://www.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

    //finding substring start and end with 1 -https://www.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

    // Make strings anagram - https://www.geeksforgeeks.org/problems/anagram-of-string/1

    //Check Palindrome - https://www.geeksforgeeks.org/problems/palindrome-string0817/1

    //minimum no of flips - https://www.geeksforgeeks.org/problems/min-number-of-flips3210/1
}