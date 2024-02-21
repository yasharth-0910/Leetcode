So for following question, I first returned false whenever x was a negative integer, and used long datatype considing large number used in testcased, now to check whether the following number was a palindrome, i made three variable, named `original` which was inialized to `long original =x;`, a `long reverse =0;` variable and follwoed by a `long remiander` variable.

Now i used a while loop, where i reversed the number:
```
      while (x != 0) {
            remainder = x % 10;
            reverse = reverse * 10 + remainder;
            x /= 10;
        }```
and if `original == reverse` then we return `true`
  
