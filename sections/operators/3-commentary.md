# 3.1

The book's explanation of problem 3-1 (p. 85 in the 1998
Addison-Wesley paperback printing) is a little bit misleading:

> Logical operators are evaluated from left to right.

Feuer is trying to explain
[short-circuit evaluation](https://en.wikipedia.org/wiki/Short-circuit_evaluation),
but in the context of an expression where there are both Boolean *and* and
*or* operators:

```C
    x = x && y || z
```

it would be easy to misunderstand him to be saying that Boolean
operators have left-to-right associativity and no difference in
precedence, which is incorrect.  It just happens to be the case that

```C
    x = x && y || z
```

is equivalent to

```C
    x = (x && y) || z
```

but this is true *not* because the `&&` comes first on the line, but
because `&&` has higher precedence than `||`.  You can check this for
yourself with a subset of the program given:

```C
    #define PRINTX printf("%d\n", x)

    main()
    {
        int x, y, z;        /* line 1 */

        x = 2; y = 1; z = 0;    /* line 2 */
        x = x && y || z; PRINT(x);  /* line 3 */
    }
```

Replace the assignment statement on line 3 in turn with

```C
    x = (x || y) && z
```

and

```C
    x = y || z && x
```

and

```C
    x = (y || z) && x
```

and observe the different results.

# 3.5

Feuer says that the output of Operators 3.5 is unpredictable because
it "is left to the compiler writer" to decide whether the postfix `++` is
applied to `x` before or after the infix binary `+` is evaluated.  I
find this unintuitive; since there is no ambiguity in the expression

```C
    a = b++ + c;
```

I would also not expect there to be any ambiguity in

```C
    a = b++ + b;
```

Also, note that behavior "left to the compiler writer" is *not* the
same as *undefined* behavior.  The latter, ironically, has a
well-defined meaning.  Undefined behavior contaminates the code it's
in, the way mold anywhere on a soft cheese makes the rest unsafe to
eat.  People are fond of saying that
