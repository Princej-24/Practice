class Solution {
public:
    bool isValid(string str) { // creating a function named isValid
        stack<char> st;

        for (int i = 0; i < str.size(); i++) {

            if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
                st.push(str[i]);
            }
            else {

                if (st.size() == 0) { //Suppose our string starts with ),},] so there is no opening bracket before )
                    return false;
                }

                if ((st.top() == '(' && str[i] == ')') ||
                    (st.top() == '{' && str[i] == '}') ||
                    (st.top() == '[' && str[i] == ']')) {

                    st.pop();
                }
                else {
                    return false; // if brackets doesn't match return false
                }
            }
        }

        return st.size() == 0; // this checks whether the stack is empty if empty then returns true otherwise return false
    }
};


//---------------------OR------------------------


#include <bits/stdc++.h>
using namespace std;

bool isValid(string str) {
    stack<char> st;

    for (int i = 0; i < str.size(); i++) {

        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            st.push(str[i]);
        }
        else {

            if (st.size() == 0) {
                return false;
            }

            if ((st.top() == '(' && str[i] == ')') ||
                (st.top() == '{' && str[i] == '}') ||
                (st.top() == '[' && str[i] == ']')) {

                st.pop();
            }
            else {
                return false;
            }
        }
    }

    return st.size() == 0;
}

int main() {

    string str;
    cin >> str;

    if (isValid(str)) {
        cout << "Valid" << endl;
    }
    else {
        cout << "Invalid" << endl;
    }

    return 0;
}