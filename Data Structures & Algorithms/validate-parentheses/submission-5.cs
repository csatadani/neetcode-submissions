public class Solution {
public bool IsValid(string s) {
    Dictionary<char, char> set = new Dictionary<char, char>() {
        { ')', '(' },
        { ']', '[' },
        { '}', '{' }
    };

    Stack<char> seen = new Stack<char>();

    foreach(char c in s){
        if(set.ContainsKey(c)){ // closing bracket
            if(seen.Count == 0 || seen.Pop() != set[c]){
                return false;
            }
        } else { // opening bracket
            seen.Push(c);
        }
    }

    return seen.Count == 0;
    }
}
