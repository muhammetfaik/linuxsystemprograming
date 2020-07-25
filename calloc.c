struct {/* Some field definitions */} myStruct;
struct myStruct *p;
p = calloc(1000, sizeof(struct myStruct));
if (p == NULL)
    errExit("calloc");