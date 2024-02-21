bool isPalindrome(int x) {
    
    long original =x;

    if(x<0){
        return false;
    }
    
    long reverse=0;
    long remainder;

    while (x != 0) {
    remainder = x % 10;
    reverse = reverse * 10 + remainder;
    x /= 10;
  }
  
  return original == reverse;
}