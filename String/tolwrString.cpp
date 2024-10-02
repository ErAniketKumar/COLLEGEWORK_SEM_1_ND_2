#include<iostream>
#include<string.h>
using namespace std;
void toLower(char *str) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            *str += 32;  // Convert uppercase to lowercase by adding 32 to ASCII value
        }
        str++;
    }
  
}

int main() {
    char str[10];
    cin>>str;

    printf("Original string: %s\n", str);

    toLower(str);
    printf("Lowercase string: %s\n", str);

    return 0;
}
