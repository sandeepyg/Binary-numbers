#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> binary;

    while(n>0)
    {
        int remainder = n%2;
        binary.push_back(remainder);
        n = n/2;
    }

    int temp1=0;
    int count=0;
    for (int i=0; i<binary.size(); i++)
    {
        if (binary[i]==1 && binary[i+1]==1)
        {
            count++;
        }

        else if(binary[i]==1 && binary[i+1]==0)
        {
            if(temp1< count+1)
            {
                temp1 = count+1;
            }

            count = 0;
        }

    }

    cout << temp1;



    return 0;
}
