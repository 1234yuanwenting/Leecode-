class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      
int t=s.length();int i=0;int j=0;int p=0;int l=0;
int left_max=0;int flag=0;int m=0;int count=0;
if(t==0)
{return 0;}
if(s==" ")
{return 1;}
if(t==1)
{return 1;}
for(i=0;i<t;i++)
{count=0;
for(j=flag;j<=i;j++)
{count++;
 if(s[j]==s[i]&&j!=i)
{flag=j+1;
break;}
if(count>left_max)
{ left_max=count;}
}}
return left_max;
}
};
