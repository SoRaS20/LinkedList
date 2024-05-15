#include <iostream>
#include <cstring> // Include for strcpy
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    char str[20] = "Sohanur Rahman";
    char *str2;

    str2 = (char*)malloc(20 * sizeof(char)); // Cast to char* and multiply by sizeof(char)

    if (str2 == NULL) {
        cout << "Memory allocation failed" << endl; // Changed "not ok" to a more informative message
    } else {
        strcpy(str2, str); // Copy str to str2
    }
    cout << str << " " << str2 << endl;

    free(str2); // Free allocated memory

    return 0;
}
