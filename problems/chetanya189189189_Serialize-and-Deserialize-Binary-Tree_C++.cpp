/*
  Solution to Serialize and Deserialize Binary Tree at LeetCode in <language>
  author: chetanya189189189
  ref: https://leetcode.com/explore/challenge/card/october-leetcoding-challenge/560/week-2-october-8th-october-14th/3489/
 */
class Codec {

   // preorder implementaion 
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        ostringstream os; // altervatively, stringstream os;
        serialize(root, os);
        return os.str();
    }

    void serialize(TreeNode * root, ostringstream & os){
        if(root){

            os<< root->val << ' '; // altervatively, os<< root->val << ",";
            serialize(root->left, os);
            serialize(root->right, os);
        }
        else{
            os << "# "; //stop token // altervatively, stringstream os << "#,";
        }
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream in(data); 
        return deserialize(in);    
    }

    TreeNode* deserialize(istringstream& in){
        string val;
        in >> val;                    // if serialize data as "," separated, do: getline(in, val, ",");
        if(val == "#") return nullptr;

        TreeNode * root = new TreeNode(stoi(val));
        //preorder traversal
        root-> left = deserialize(in);
        root-> right = deserialize(in);
        return root;
    }

};

