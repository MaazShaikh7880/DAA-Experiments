#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

int max(int a, int b) {
    return (a > b) ? a : b;
}

// function to find the LCS of two strings
int LCS(char arr1[], char arr2[], int m, int n, char lcs_string[]) {
    int lcs[m+1][n+1];
    int i, j;

    // building the lcs array
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                lcs[i][j] = 0;
            else if (arr1[i-1] == arr2[j-1]) {
                lcs[i][j] = lcs[i-1][j-1] + 1;
                lcs_string[lcs[i][j]-1] = arr1[i-1];  // adding the character to LCS string
            }
            else
                lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
        }
    }

    // adding null terminator to the LCS string
    lcs_string[lcs[m][n]] = '\0';

    // returning the LCS length
    return lcs[m][n];
}

int main() {
    char str1[MAX_LEN], str2[MAX_LEN], lcs_string[MAX_LEN];
    int m, n, lcs_length;

    printf("Enter the first string: ");
    fgets(str1, MAX_LEN, stdin);
    m = strlen(str1) - 1;  // -1 to remove the newline character

    printf("Enter the second string: ");
    fgets(str2, MAX_LEN, stdin);
    n = strlen(str2) - 1;

    lcs_length = LCS(str1, str2, m, n, lcs_string);

    printf("The length of the LCS is: %d\n", lcs_length);
    printf("The LCS string is: %s\n", lcs_string);

    return 0;
}