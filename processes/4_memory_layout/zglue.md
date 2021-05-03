
### Change from `bss` to `data`
```c
int global_buff[65536] = {0}; /* bss - uninitialized data */
// from bss to data
int global_buff[65536] = {1}; /*data - initialized data */

/*
 int =  4 bytes
 65356*4 = 262144 bytes
*/

```
### Change from `data` to `bss`
```c
int mango[65536] = {1}; /*data - initialized data */
// from bss to data
int mango[65536] = {0}; /* bss - uninitialized data */

/*
 int =  4 bytes
 65356*4 = 262144 bytes
*/

```

### Change in `stack` does not change `bss` and `data`
```c
int peachs [1] = {1}; /* stack frame for fruits()*/
// to
int peachs [65536] = {1}; /* stack frame for fruits()*/

```


### `readelf`
```c
readelf -a main

```

