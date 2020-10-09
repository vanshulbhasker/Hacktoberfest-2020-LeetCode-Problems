leetcode Problem link - https://leetcode.com/problems/shuffle-string/

CODE-

string restoreString(string s, vector<int>& indices) {
        int i=0;
        while(i!=indices.size()){
            if(indices[i]==i)i++;
            else {
                swap(s[i],s[indices[i]]);
                swap(indices[i],indices[indices[i]]);
            }
        }
        return s;
   }
   
   ---------------------------
   
 /*  Approch used -Change positions to place items correctly.If we could place one element in 
     its correct position and swap it with the element in that position, we would have 
     atleast one element that is in correct place.*/
