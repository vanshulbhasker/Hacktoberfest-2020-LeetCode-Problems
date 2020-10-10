/**
 * Solution to String to Integer (atoi) at LeetCode in CPP
 *
 * author: ashima0699
 * ref:https:https://leetcode.com/problems/string-to-integer-atoi/
 */
 /**
 class Solution {
public:
    int myAtoi(string str) {
       int index;
        long result = 0;
        for(int i = 0; i<str.length(); i++)
        {
            if((str[i] >= '0' && str[i] <='9') || str[i] == '-' || str[i] == '+')
            {
                index = i;
                break;
             }
            else if(str[i] != ' ')
                return 0;
            
        }
        bool isNegative = (str[index] == '-');
        if(index > str.length()-1) // if the string contains only spaces
            return 0;
        if(index != str.length()-1) 
            // to check if there is +- case,where signs come consecuetively
           if(str[index+1] == '+' || str[index+1] == '-' )
            return 0;
        
        if(str[index] == '+' || str[index] == '-') 
            // if first symbol is sign then we start from next 
            index++;
        for(int i = index; i< str.length(); i++)
        {
            if((str[i] >= '0' && str[i] <='9'))
            {
               result = result * 10 - (str[i] - '0'); 
                if(result >= INT_MAX || result <= INT_MIN)
                    // if the result is greater or smaller than int range
                    return isNegative? INT_MIN : INT_MAX;
            }
            else
                return isNegative ? result : -result;
        }
      
        return  isNegative ? result : -result;
    }
};
