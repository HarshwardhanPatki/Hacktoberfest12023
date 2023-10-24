
// Generate Parenthesis(Recursion Tree Method)


class Solution
{
 public:
 void solve(int even,int odd,vector<string> &ans,string op)
 {
    if(even==0 and odd==0)
    {
        ans.push_back(op);
        cout<<op<<endl;
        return;
    }
    if(even<0 or odd<0)
    {
        return;
    }
    
    if(even==odd)
    {
        op.push_back('(');
        solve(even-1,odd,ans,op);
    }
    else if(even<odd)
    {
        op.push_back('(');
        solve(even-1,odd,ans,op);
	
	// BackTrack
        op.pop_back();

        op.push_back(')');
        solve(even,odd-1,ans,op);
        
        
    }
    else if(even==0 and odd>0)
    {
        op.push_back(')');
        solve(even,odd-1,ans,op);
    }
    return;
 }

    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> ans;
        string op = "";
        solve(n,n,ans,op);
        return ans;
    }

};
