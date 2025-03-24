
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
***

## access(path, mode)
> The access() function is used to check whether 
a file or directory exists and whether 
the program has specific permissions for it.

`int access(const char *path, int mode);`
```
#include <stdio.h>
#include <unistd.h>

int main() {
    const char *file = "example.txt";

    if (access(file, F_OK) == 0) {
        printf("File '%s' exists.\n", file);
    } else {
        printf("File '%s' does not exist.\n", file);
    }

    return 0;
}

output

File 'example.txt' exists.

File 'example.txt' does not exist.


** Check a Directory **

*code*

#include <stdio.h>
#include <unistd.h>

int main() {
    const char *dir = "/home/user";

    if (access(dir, F_OK) == 0) {
        printf("Directory exists.\n");
    } else {
        printf("Directory does not exist.\n");
    }

    return 0;
}
```
**Parametersh**

Path : `The file or directory path to check.`

mode : `The permission mode to check (see table below)`

**Mode Constant**       &      **Description**          
`F_OK`  > Check if the file exists

`R_OK` > Check if the file has read permission

`W_OK` > Check if the file has write permission

`X_OK` > Check if the file has write permission

---

**Return Value**

`Returns 0` → If the requested permission is granted.

`Returns -1` → If the file does not exist or the permission is denied.