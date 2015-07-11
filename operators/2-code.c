#define PRINTX printf("%d\n", x)

main()
{
    int x=2, y, z;

    x *= 3 + 2; PRINTX;		/* line 1, result 10 */
    x *= y = z = 4; PRINTX;	/* line 2, result 40 */
    x = y == z;	PRINTX;		/* line 3, result 1 */
    x == ( y = z ); PRINTX;	/* line 4, result 1 */
}
