#define PRINT(int) printf("%d\n", int)

main()
{
    int x, y, z;		/* line 1 */
    
    x = 2; y = 1; z = 0;	/* line 2 */
    x = x && y || z; PRINT(x);	/* line 3 */
    PRINT( x || ! y && z );

    x = y = 1;
    z = x ++ - 1; PRINT(x); PRINT(z);
    z += - x ++ + ++ y; PRINT(x); PRINT(z);
    z = x / ++ x; PRINT(z);
    PRINT(x);
}
