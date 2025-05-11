class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> reversed;
        bool isPrefix = false;
        for (int i = 0; i < word.size(); i++)
        {
            reversed.push(word[i]);
            if (ch == word[i])
            {
                isPrefix = true;
                break;
            }
        }

        if (isPrefix)
        {
            int counter = 0;
            while (!reversed.empty())
            {
                word[counter++] = reversed.top();
                reversed.pop();
            }
        }

        return word;
    }
};
