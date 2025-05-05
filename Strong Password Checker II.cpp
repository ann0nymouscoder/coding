class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        bool lower = 0, upper = 0, digit = 0, special = 0;
        string special_chars = "!@#$%^&*()-+";

        if (password.size() < 8) return false;

        for (int i = 0; i < password.size(); i++) {
            if (i > 0 && password[i] == password[i-1]) return false;
            if (islower(password[i])) lower = true;
            else if (isupper(password[i])) upper = true;
            else if (isdigit(password[i])) digit = true;
            else if (special_chars.find(password[i]) != string::npos) special = true;
        }

        return lower && upper && digit && special;
    }
};
