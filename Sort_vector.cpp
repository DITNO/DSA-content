// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int calc_marks(vector<int> marks){
    return marks[0]+marks[1]+marks[2];
}

bool compare(pair<string,vector<int>>s1,pair<string,vector<int>> s2){
    
    vector<int> m1 = s1.second;
    vector<int> m2 = s2.second;
    
    return calc_marks(m1) > calc_marks(m2);
}

int main() {

    vector <pair<string,vector<int>>> students_marks= {
        {"rohan",{12,50,75}},
        {"Krish",{15,58,95}},
        {"Rahul",{72,58,55}}
    };
    
    sort(students_marks.begin(),students_marks.end(),compare);
    
    for(auto s : students_marks){
        cout<<s.first<<" "<<calc_marks<<endl;
    }


    return 0;
}
