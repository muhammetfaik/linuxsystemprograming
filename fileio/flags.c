int flags, accessMode;

accessMode = flags & O_ACCMODE;
if (accessMode == O_WRONLY || accessMode == O_RDWR)
    printf("file is writable\n");
flags = fcntl(fd, F_GETFL);
if(flags == -1)
    errExit("fcntl");
if(flags & O_SYNC)
    printf("writes are synchronized\n");
    