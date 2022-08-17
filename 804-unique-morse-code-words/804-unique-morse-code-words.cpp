class Solution {
public:
	int uniqueMorseRepresentations(vector<string>& words) {

		vector<string>ref = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
	};

		unordered_map<string,int>mp;
		for(int i=0;i<words.size();i++)
		{
			string str="";
			for(int j=0;j<words[i].length();j++)
			{
				str+=ref[words[i][j]-'a'];
			}
			mp[str]++;
		}

		for(auto i:mp)
		{
			cout<<i.first<<" "<<i.second<<endl;
		}
		return mp.size();
	}
};