void swap(char&ch1,char&ch2)
{
    char temp=ch1;
    ch1=ch2;
    ch2=temp;
    return;
}
string reverseWord(string str){
    
  int i=0;
  int j=str.length()-1;
  while(i<=j)
  {
      swap(str[i],str[j]);
      i++;
      j--;
  }
  return str;
  
}