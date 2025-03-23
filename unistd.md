
# **#Include<unistd.h>**

## sleep(seconds)
> Pauses the program for the specified number of **seconds**.

## usleep(microseconds)
> Pauses execution for the given **microseconds**

### ---using in c programming ---

```
#include<stdio.h>
#include<unistd.h>

int main() {

    printf("Waiting for 5 seconds...\n");
    sleep(5);
    printf("Done!\n");
    return 0;
}
```
> output
```
Waiting for 5 seconds...
(Waits 5 seconds)
Done
```

### **---- Using sleep() in a Loop ---**

```
#include <stdio.h>
#include <unistd.h>

int main() {
    for (int i = 5; i > 0; i--) {
        printf("Countdown: %d\n", i);
        sleep(1);  // Pause for 1 second
    }
    printf("Blast off!\n");
    return 0;
}
```
> output 
```
Countdown: 5
Countdown: 4
Countdown: 3
Countdown: 2
Countdown: 1
Blast off!
```
***


