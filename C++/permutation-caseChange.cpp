#include<iostream>
using namespace std;

void solve(string input, string output){
    if(input.empty()){
        cout << output << " ";
        return;
    }
    string output1 = output + input[0];
    string output2 = output;
    output2.push_back(toupper(input[0]));

    input.erase(input.begin());
    
    solve(input, output1);
    solve(input, output2);

    return;
}

int main() {
    string input = "abc";
    for(auto &elem : input){
        elem = tolower(elem);
    }
    string output = "";
    solve(input, output);
}