First surprise of the book.

```C
    x *= 3 + 2; PRINTX;     /* line 1 */
    x *= y = z = 4; PRINTX; /* line 2 */
    x = y == z; PRINTX;     /* line 3 */
    x == ( y = z ); PRINTX; /* line 4 */
```

I expected line 1 to be equivalent to

```C
    x = x * 3; x = x + 2;
```

thus setting `x` (which begins at 2) equal to 8.  Turns out it is actually equivalent to

```C
    x = x * ( 3 + 2 );
```

thus setting `x` equal to 10.  The implicit parens around everything
to the right of the shortcut arithmetic/assignment operator `*=` are
not intuitive.  I guess the lesson is that those type of operators are
assignment first, arithmetic second. (Except that that's not really
the way they work, is it?)

On line 4, note that the comparison operator has no side effect, so
the value of `x` is unchanged from the previous line; `y = z` would
have a side effect, even though it's nested inside a comparison,
although since we already know that `y == z` the compiler will
probably trivially optimize it out.  Regardless, the `PRINTX` macro
still prints the same thing on line 4 as on line 3.
