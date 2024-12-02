

// this code is only run on coding ninjah place

// link : https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbkFpTGZEemlJZS0zSDZscXRvRlVQY3Z5VVdvd3xBQ3Jtc0trcWllQjhoVDRfUkhCNFN4VnNLczVQMFJpM2Z6ZXliOENON3dVUFJnYlBDZi1LR2o0UHNaSmllUDRrUUt1NFdDNDFndWE0WHBMeU1YU3paeVc2YXBVZlpSUjZQSHFMLU5xWDFQMFd1bWpaMkFTSm54RQ&q=https%3A%2F%2Frelvl.co%2Fgc79&v=BmZnJehDzyU

bool isValidParenthesis(string expression)
{
  	 stack<char> s;
     for(int i=0; i<expression.length(); i++) {
         
         char ch = expression[i];
         
         //if opening bracket, stack push
         //if close bracket, stacktop check and pop
         
         if(ch == '(' || ch == '{' || ch == '['){
             s.push(ch);
         }
         else
         {
             //for closing bracket
             if(!s.empty()) {
                  char top = s.top();
                  if( (ch == ')' && top == '(') || 
                     ( ch == '}' && top == '{') || 
                     (ch == ']' && top == '[') ) {
                      s.pop();
                  }
                 else
                 {
                     return false;
                 }
             }
             else
             {
                 return false;
             } 
         }  
     }
    
    if(s.empty())
        return true;
    else
        return false;
}