#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define float long double

bool isDivBy6(string s) {
    int n = s.length();
    
    // Check if the last digit is even
    int lastDigit = s[n - 1] - '0';
    if (lastDigit % 2 != 0) return false;

    // Check if the sum of digits is divisible by 3
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += s[i] - '0';  // Convert character to integer
    }
    
    return (sum % 3 == 0);
}

bool isDivBy11(string s) {
    int n = s.length();
    int oddSum = 0, evenSum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenSum += s[i - 1] - '0';  // Converting character to integer
        } else {
            oddSum += s[i - 1] - '0';   // Converting character to integer
        }
    }

    return abs(evenSum - oddSum) % 11 == 0;
}

string addOneToString(string numStr) {
    int n = numStr.length();
    int carry = 1;  // We start with a carry of 1, as we're adding 1

    // Traverse the string from the last digit to the first
    for (int i = n - 1; i >= 0; --i) {
        int digit = numStr[i] - '0'; // Convert char to int
        digit += carry;

        if (digit == 10) {
            numStr[i] = '0'; // Set current position to 0
            carry = 1;       // Carry over to the next higher digit
        } else {
            numStr[i] = digit + '0'; // Convert int back to char
            carry = 0;               // No further carry needed
            break;
        }
    }

    // If there is still a carry after the loop, add '1' at the beginning
    if (carry == 1) {
        numStr.insert(numStr.begin(), '1');
    }

    return numStr;
}

bool isValid(string s){
    int n = s.length();
    for(int i=0; i<n; i++){
        if(s[i]=='3' || s[i]=='6') continue;
        else return false;
    }
    return true;
}

void solution(){
    //write your code here
    int n;
    cin>>n;
    string minNum = "";
    for(int i=0; i<n; i++){
        minNum += "3";
    }
    
    string maxNum = "";
    for(int i=0; i<n; i++){
        maxNum += "6";
    }
    
    string i=minNum;
    while(i<=maxNum){
        if(isDivBy6(i) && isDivBy11(i) && isValid(i)){
            cout<<i<<endl;
            return;
        }
        i = addOneToString(i);
    }
    cout<<-1<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    //for calculating run time
    clock_t z = clock();
    
    //no of testcases
    int t = 1;
    cin>>t;
    
    //initiating loop for every test case
    while(t--) solution();
    
    cerr<<"Run Time : "<<((double)(clock()-z)*1000/CLOCKS_PER_SEC)<<" ms";

    return 0;
}
