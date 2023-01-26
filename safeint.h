struct SafeResult
{
    int value;
    char errorflag;
};

struct SafeResult safeadd();
struct SafeResult safesubtract();
struct SafeResult safemultiply();
struct SafeResult safedivide();
int safestrtoint();
