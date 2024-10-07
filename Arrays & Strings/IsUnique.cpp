// Question : Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures ?


// Approach 1 : Using an extra data structure
// #include<bits/stdc++.h>
// using namespace std;

// bool checkIsUnique(string str){
//     unordered_map<char, int> mapp;
//     for(auto ch : str){
//         mapp[ch]++;
//         if(mapp[ch] > 1){
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     string str1 = "OmvirSingh";
//     cout<<"Check str1 : "<<checkIsUnique(str1)<<endl;
//     string str2 = "Omvir";
//     cout<<"Check str2 : "<<checkIsUnique(str2)<<endl;
//     return 0;
// }




// Approach 2 : Without using an extra data structure
#include<bits/stdc++.h>
using namespace std;

bool checkIsUnique(string str){
    
}

int main()
{
    string str1 = "OmvirSingh";
    cout<<"Check str1 : "<<checkIsUnique(str1)<<endl;
    string str2 = "Omvir";
    cout<<"Check str2 : "<<checkIsUnique(str2)<<endl;
    return 0;
}