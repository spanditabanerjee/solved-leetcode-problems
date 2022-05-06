string removeDuplicates(string s) 
{
string res = "";
        for (char& c : S)
            if (res.size() && c == res.back())
                res.pop_back();
            else
                res.push_back(c);
        return res;
}
int main()
{
    string s;
    cin>>s;
    removeDuplicates(s);
}