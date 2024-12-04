#include <stdio.h>
#include <ctype.h>

char checking(char c);

int main() {
char i;
printf("enter a character: ");
scanf(" %c", &i);
char result = checking(i);

if (result == 'v') {
        printf("The character is: vowel");
        }
         else if (result == 'c') {
        printf("The character is: consonant");
    }
     else {
        printf("The character is neither");
    }


}

char checking(char c) {
        c = tolower(c); 
    if (c == 'a'|| c == 'e'|| c == 'i'|| c == 'o'|| c == 'u') {
        return 'v'; 
    
    }
     else if (c >= 'a' && c <= 'z') { 
        return 'c'; 
    }
    
     else {
        return 'neither'; 
    }
    
}
