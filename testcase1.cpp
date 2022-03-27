#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<string>strs{"eat","tea","tan","ate","nat","bat"};

for(int i=0;i<strs.size();i++)
{
    for(int j=0;j<strs.size();j++)
    {
        cout<<"Printing "<<i<<" element's "<<j<<" char "<<" element is "<<strs[i][j]<<" Result: "<<strs[i]<<endl;
        cout<<endl;
    }
}

}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@result@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
Printing 0 element's 0 char  element is e Result: eat

Printing 0 element's 1 char  element is a Result: eat

Printing 0 element's 2 char  element is t Result: eat

Printing 0 element's 3 char  element is   Result: eat

Printing 0 element's 4 char  element is   Result: eat

Printing 0 element's 5 char  element is   Result: eat

Printing 1 element's 0 char  element is t Result: tea

Printing 1 element's 1 char  element is e Result: tea

Printing 1 element's 2 char  element is a Result: tea

Printing 1 element's 3 char  element is   Result: tea

Printing 1 element's 4 char  element is   Result: tea

Printing 1 element's 5 char  element is   Result: tea

Printing 2 element's 0 char  element is t Result: tan

Printing 2 element's 1 char  element is a Result: tan

Printing 2 element's 2 char  element is n Result: tan

Printing 2 element's 3 char  element is   Result: tan

Printing 2 element's 4 char  element is   Result: tan

Printing 2 element's 5 char  element is   Result: tan

Printing 3 element's 0 char  element is a Result: ate

Printing 3 element's 1 char  element is t Result: ate

Printing 3 element's 2 char  element is e Result: ate

Printing 3 element's 3 char  element is   Result: ate

Printing 3 element's 4 char  element is   Result: ate

Printing 3 element's 5 char  element is   Result: ate

Printing 4 element's 0 char  element is n Result: nat

Printing 4 element's 1 char  element is a Result: nat

Printing 4 element's 2 char  element is t Result: nat

Printing 4 element's 3 char  element is   Result: nat

Printing 4 element's 4 char  element is   Result: nat

Printing 4 element's 5 char  element is   Result: nat

Printing 5 element's 0 char  element is b Result: bat

Printing 5 element's 1 char  element is a Result: bat

Printing 5 element's 2 char  element is t Result: bat

Printing 5 element's 3 char  element is   Result: bat

Printing 5 element's 4 char  element is   Result: bat

Printing 5 element's 5 char  element is   Result: bat
*/
