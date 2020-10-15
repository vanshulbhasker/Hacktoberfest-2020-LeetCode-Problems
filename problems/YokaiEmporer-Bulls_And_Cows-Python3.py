/**
 * Solution to <problem-name> at LeetCode in <language>
 *
 * author: YokaiEmporer
 * ref: https://leetcode.com/problems/bulls-and-cows/
 */
class Solution:
    def getHint(self, secret: str, guess: str) -> str:
        B=0
        C=0
        d=[0 for i in range(10)]
        for i in secret:
            d[int(i)]+=1
        
        for i in range(len(guess)):
            if guess[i]==secret[i]:
                B+=1
                d[int(guess[i])]-=1
       
        for i in range(len(guess)):
            if d[int(guess[i])]!=0 and guess[i]!=secret[i] :
                C+=1
                d[int(guess[i])]-=1
                
        return str(B)+"A"+str(C)+"B"