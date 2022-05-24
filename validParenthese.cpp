 bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' or s[i]=='[' or s[i]=='{')
            {
                st.push(s[i]);
            }
            else
            {
              if(!st.empty())
              {
                char ch = st.top();
                 if(ch=='(' and s[i]==')')
                {
                        st.pop();
                }
                else if(ch=='[' and s[i]==']')
                {
                        st.pop();
                }
                else if(ch=='{' and s[i]=='}')
                {
                        st.pop();
                }
                  else 
                      st.push(s[i]);
              }
              else
              {
                    st.push(s[i]);
              }  
            }
        }
        if(!st.empty()) return false;
        return true;
    }