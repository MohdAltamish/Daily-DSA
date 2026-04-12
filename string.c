char** fizzBuzz(int n, int* returnSize) {

    char** result = (char**)malloc(n * sizeof(char*));
    *returnSize = n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            result[i - 1] = "FizzBuzz";
        } else if (i % 3 == 0) {
            result[i - 1] = "Fizz";
        } else if (i % 5 == 0) {
            result[i - 1] = "Buzz";
        } else {
            // Allocate enough space for the number as a string
            result[i - 1] = (char*)malloc(12 * sizeof(char)); // max length for int + null terminator
            sprintf(result[i - 1], "%d", i);
        }
    }

    return result;
    
    
}