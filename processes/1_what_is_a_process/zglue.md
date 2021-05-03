* Create main.c


```c
#include <stdio.h>
#include <unistd.h>

#define SLEEP_TIME 600

int main ()
{
        printf("I'm program!\n");
        printf("During runtime I'm a process!\n");

        for (int i = 0; i < SLEEP_TIME; i++){
                printf("%d seconds...\n", i);
                sleep(1);
        }

        printf("Process terminated!\n");

        return 0;
}
```

* Compile
```
gcc main.c -o main.out

gcc --version
apt-get install gcc

apt-cache policy libc6
apt-cache policy libc6-dev

apt-get install libc6-dev

```

* Show some content of main.out program

```
size main.out

readelf -a main.out

readelf --segments main.out

readelf --sections main.out

```


* time to introduce ps command

```
ps aux

```

* run main.out in one terminal

```
./main.out

ps aux

ps aux | grep ./main.out

```

* run multiple instances of main.out

```
ps aux | grep ./main.out

```

* stop main.out instance
```
ctrl+D
ps aux | grep ./main.out

```

* stop main.out instance
```
kill PID
ps aux | grep ./main.out

```

* Time to show */proc/PID/*
```
run main.out
ps aux | grep ./main.out
cd /proc
ls /proc/xxxx/comm
```
