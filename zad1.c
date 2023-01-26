#include <stdio.h>
#include <limits.h>

int main()
{
    printf("%-25s%-25s%-25s%-25s%-25s%-3s\n", "Type", "Int", "Long", "Short", "Long long", "Char");
    printf("%-25s%-25s%-25s%-25s%-25s%-3s\n", "Signed format", "%d", "%ld", "%hd", "%lld", "%c");
    printf("%-25s%-25s%-25s%-25s%-25s%-3s\n", "Unsigned format", "%u", "%lu", "%hu", "%llu", "%c");
    printf("%-25s%-25d%-25ld%-25hd%-25lld%-3d\n", "Signed max size", INT_MAX, LONG_MAX, SHRT_MAX, LLONG_MAX, CHAR_MAX);
    printf("%-25s%-25d%-25ld%-25hd%-25lld%-3d\n", "Signed min size", INT_MIN, LONG_MIN, SHRT_MIN, LLONG_MIN, CHAR_MIN);
    printf("%-25s%-25u%-25lu%-25hu%-25llu%-3d", "Unsigned max size", UINT_MAX, ULONG_MAX, USHRT_MAX, ULLONG_MAX, UCHAR_MAX);

    return 0;
}
