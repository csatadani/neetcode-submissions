public class Solution {
    public bool IsPalindrome(string s) {
      string n = Regex.Replace(s, "[^a-zA-Z0-9]", "");
      n = n.ToLower();
      for(int i=0; i<(n.Length/2); i++){
        if(n[i] != n[n.Length-i-1]){
            return false;
        }
      }
      
      return true;  
    }
}
