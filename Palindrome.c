#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

//returns true if the string is palindrome
bool RecursivePalindrome(char str[], int left, int right) {
    // An empty string is considered as palindrome?
    if (strlen(str) == 0)
        return true;

    // In case of one character only
    if (left == right)
        return true;

    if (str[left] != str[right])
        return false;

    if (left < right + 1)
        return RecursivePalindrome(str, left + 1, right - 1);

    return true;
}


int main() {//assume the input is correct, only small letters
    int n = 0;
    printf("Enter the length of the array:\n");
    if(1 != scanf("%d", &n)){
        return 0;
    }
    if(n == 0){
        printf("A palindrome");
        return 0;
    }
    //char str[n];
    // assume that the string's length is n
    printf("Enter the array:\n");
    char *str = (char*)malloc(n);
    scanf(" %s", str);
    if(str == NULL) printf("error \n");



    int left = 0;
    int right = n-1;
    if (RecursivePalindrome(str, left, right))
        printf("A palindrome");
    else
        printf("Not a palindrome");

    free(str);
    return 0;
}

//test1
//5 abaaa pass

//test2
//5 abbba pass

//test3
//7 wieksha pass

//test4
//2 aa pass