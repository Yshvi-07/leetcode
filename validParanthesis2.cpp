bool isValidParenthesis(string e)
{
    // Write your code here.
    stack<char>b;
    char a;
    for(int i=0;i<e.size();i++){
        a=e[i];
        if (a == '{' || a == '(' || a == '[') {
          b.push(a);
        } else if (!b.empty()){
          char x=b.top();
          if ((x == '(' && a == ')') || (x == '[' && a == ']') ||
              (x == '{' && a == '}')){
                b.pop();
              }
              else{
                return 0;
              }
        }
        else{
          return 0;
        }

    }
    if(b.empty()){
      return 1;
    }
    else{
      return 0;
    }
    

    
}
