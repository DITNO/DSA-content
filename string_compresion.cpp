#include<iostream>
#include<cstring>
using namespace std;

string compress_str(string str){
    int n = str.length();
    string output;

    for (int i = 0; i < n; i++)
    {   int count = 1;
        while (str[i+1] == str[i] and i<n-1)
        {
            count++;
            i++;
        }
        output += str[i];
        output += to_string(count);
        
    }
    if (output.length() > str.length())
    {
        return str;
    }

    return output;
    
    
}

int main(){
    string s1 = "aabbbbcdd";
    cout<<compress_str(s1)<<endl;
    return 0;
}