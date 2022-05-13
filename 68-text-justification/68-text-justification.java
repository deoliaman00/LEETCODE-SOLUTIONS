class Solution {
    public List<String> fullJustify(String[] words, int maxWidth)
    {
        /*                 i     j    
        Input: words = ["This", "is", "an", "example", "of", "text", "justification."], maxWidth = 16
Output:
[
   "This    is    an",
   "example  of text",
   "justification.  "
]
*/
        
        List<String> list1= new ArrayList<>();
        
int i=0;
    while(i<words.length)
    {
        
        
        int wc=words[i].length(); // 4 
        int j=i+1;
        int candidates=0;
        while(j<words.length && (wc+candidates+words[j].length()+1)<=maxWidth) // eg for mW=16 string 4+2+2+2<=16 if one more then 17<16
        {
            wc+=words[j].length();
            candidates++;
            j++;
        }
        
           
        int vacancy=maxWidth-wc;   //   16-8=>8
        // int candidates=j-i-1; // 1 is for first string that wll 
        // no of words included = j-i;
        
        int atleastSpaces=candidates==0?0:vacancy/candidates; //eg-> 8/3=> 2 for each but 2 left for some
        int extraSpaces=candidates==0?0:vacancy%candidates;// 8%3=>2 for first ones 
      
        
        if(j==words.length)
        {
            atleastSpaces=1;
            extraSpaces=0;
        }
        
        
        /*  
        case1:- give spaces of atleastSpaces to every string 
        case2:- the spaces that cannot be evenly distributed is given to first coming strings
        case3:- the last string will get no spaces after it so when appending if k==j-1 then stop the spaces insert;
    */
        
        // string declaration done here
        StringBuilder ans= new StringBuilder();
        
        for(int k=i;k<j;k++)
        {
            ans.append(words[k]);
            if(k==j-1)
                break;
            for(int e=0;e<atleastSpaces;e++)
            {
                ans.append(" ");
            }
            if(extraSpaces>0)
            {
                ans.append(" ");
                extraSpaces--;
            }
        }
        while(ans.length()<maxWidth)ans.append(" ");
        
        list1.add(ans.toString());
        i=j; // array should be kept moving i towards wordlength
        
        // managing the last case that the last line cannot fit the who
    }return list1;
    }
    
}