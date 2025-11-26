#include <stdio.h>
#include <time.h>

int main() {
    
    // Structure to store local time
    struct tm* ptr;
    
    // Variable to store current time
    time_t t;
    
    // Get current time
    t = time(NULL);
    
    // Convert it to local time
    ptr = localtime(&t);
    
    // Get the string of local time
    printf("%s", asctime(ptr));
    return 0;
}
