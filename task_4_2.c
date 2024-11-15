#include <stdio.h>
#include <string.h>

//find the first occurrence of a substring
int find_first_occurrence(char *str, char *sub) {
    int str_len = strlen(str);
    int sub_len = strlen(sub);

    //Iterate through the original string
    for (int i = 0; i <= str_len - sub_len; i++) {
        int j;
        // Check if matches
        for (j = 0; j < sub_len; j++) {
            if (str[i + j] != sub[j]) {
                break;
            }
        }
        //If the entire substring matched, return the starting index
        if (j == sub_len) {
            return i;
        }
    }
    // If no match is found, return -1
    return -1;
}

int main() {
    char str[100], sub[100];

    //original string
    printf("Enter original string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    //substring
    printf("Enter substring: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0';

    int index = find_first_occurrence(str, sub);

    //result
    if (index != -1) {
        printf("Substring found at index: %d\n", index);
    } else {
        printf("Substring not found\n");
    }

    return 0;
}
