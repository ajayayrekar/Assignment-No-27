class mystring {
    char str[100];
public:
    // methods
    mystring operator! () {
        mystring result;
        int i = 0;
        while (str[i]) {
            if (isupper(str[i])) {
                result.str[i] = tolower(str[i]);
            }
            else if (islower(str[i])) {
                result.str[i] = toupper(str[i]);
            }
            else {
                result.str[i] = str[i];
            }
            i++;
        }
        result.str[i] = '\0';
        return result;
    }
};
