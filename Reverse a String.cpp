//User function Template for C++

string reverseWord(string str){
    
  int size = str.size();
  int s = 0;
  int e = size-1;
  while(s<=e){
      swap(str[s], str[e]);
      s++;
      e--;
  }
  return str;
}