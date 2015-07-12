#define PRINT(int) printf("%d\n", int)

main()
{
    int a, b;

    b = 2;
    a = b++ + b;
    PRINT(a);
    PRINT(b);
}
