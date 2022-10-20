//         string res;
//         string sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
//         int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        
//         for(int i=0; num != 0; i++)
//         {
//             while(num >= val[i])
//             {
//                 num -= val[i];
//                 res += sym[i];
//             }
//         }
        
//         return res;

// vector<pair<int, string>> m = {{1000, "M"},{900, "CM"}
//                                        , {500, "D"},{400, "CD"}
//                                        , {100, "C"} , {90, "XC"},
//                                        {50, "L"}, {40, "XL"},
//                                        {10, "X"}, {9, "IX"},
//                                        {5, "V"} , {4, "IV"},
//                                        {1, "I"} };
//         string ans = "";// XLVIII
//         while(n > 0)
//         {
//             for(auto x : m)
//             {
//                 if(n >= x.first)
//                 {
//                     ans += x.second;
//                     n = n - x.first;
//                     break;
//                 }
//             }
//         }
        
//         return ans;
class Solution 
{
public:
    string intToRoman(int n)
    {
        vector<pair<string,int>>check{{"M",1000},{"CM",900},{"D",500},{"CD",400},{"C",100},{"XC",90},{"L",50},{"XL",40},{"X",10},{"IX",9},{"V",5},{"IV",4},{"I",1}};
        string ans="";
        
        while(n>0)
        {
            for(auto i:check)
            {
                if(n>=i.second)
                {
                    ans+= i.first;
                    n-=i.second;
                    break;
                }
            }
        }
        
        return ans;
        
    }
};