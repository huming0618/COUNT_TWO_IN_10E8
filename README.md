## Note:

### Convert the number to string
```
char num_text[9];
sprintf(num_text, "%d", i);
```

### Count the execution time
[Reference](https://stackoverflow.com/questions/5248915/execution-time-of-c-program)

```
include <time.h>

clock_t begin = clock();

/* here, do your time-consuming job */

clock_t end = clock();
double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
```

### Compile
`gcc -Wall main.c -o output/main`