# CS50

I am planning to speedrun [CS50](https://www.youtube.com/playlist?list=PLhQjrBD2T381WAHyx1pq-sBfykqMBI7V4) over the weekend, this repository will contain all the code and notes that I create while watching the leactures

---

## What does a compiler actually do?

```C
#include <stdio.h>
int main(void){
  printf("Hello world!");
}
```

A compiler carries out the following steps

- **Pre-processing**: Pre-processing converts all of those "hash include - #include" lines to the respective prototypes that are inside those include files. As in, stdio.h file only contains the prototype of the `printf()`  function. The actual definition or code of that function lies somewhere else on the disk.

- **Compiling**: After the pre-processing step has happened, the code then gets converted to the assembly language during this `compiling` step.

- **Assembling**: This steps takes the assembly code and then converts it to the 0s and 1s.

- **Linking**: This steps combines the files associated with out code. For eg, in the above code example we are using atleast 3 files. One file if the code itself that we wrote, the other file is the stdio.h file that contains the function prototypes of the printf function, there's another file that is not mentioned in the code, the name of the file if `stdio.c` this file actually caries the funciton definition or the actual code for things like "printf" and "scanf". So, the linking step combines all the binary conversion of those 3 files.
