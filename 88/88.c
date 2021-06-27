// C17 Standard

#include <stdio.h>


void swap(char * u, char * v);


int main(void)
{

    char x = 'K';
    char y = 'J';

    printf("Before swapping, x = %c and y = %c\n", x, y);
    swap(&x, &y);
    printf("After swapping, x = %c and y = %c\n", x, y);

    return 0;

}


void swap(char * u, char * v)
{

    char temp;

    temp = *u;
    *u = *v;
    *v = temp;

}





/* Trivia

 * The & operator (unary) gives the address where a variable is stored.
   An address can be thought of as a location in the computer's memory.
   [Addresses are often given as hexadecimal values.
    Each hexadecimal digit corresponds to 4 bits, so a 12-digit address, such as
    0x7fff5fbff8e8, corresponds to 48 bits.]
 * Any C function that modifies a value in the calling function without using a
   return value uses addresses (for eg., scanf() - returns the no. of items
   successfully read, but modifies values in the calling function without using
   return for this purpose).

 * In C, each function uses its own variables. This is preferable because it
   prevents the original variable of the calling function from being altered
   mysteriously by some side effect of the called function.
   However, it can make for some difficulties too, such as when multiple values
   need to be returned to the calling function by the called function (or
   multiple values in the calling function need to be altered by the called
   function).
   One way to achieve this is by using pointers (and by extension, addresses),
   which is illustrated in this program.

 * A pointer is a variable (or, more generally, a data object) whose value is an
   address. Just as a char variable has a character as a value, a pointer has an
   address as a value.
   Pointers provide a symbolic way to use addresses. Because the hardware
   instructions of computing machines rely heavily on addresses, pointers enable
   users to express themselves in a way that is close to how the machine
   itself.
   Many systems, such as this one, are byte addressable, meaning that each byte
   in memory is numbered sequentially.
   [A pointer's data type is described as 'pointer to <data type>'.
    A pointer is represented internally as an unsigned integer on most systems,
    but a pointer shouldn't be thought of as an integer, as there are things
    that can be done with integers but not with pointers, and vice versa.]
   [Generally, pointers are of size 4 bytes on a 32-bit system, and 8 bytes on a
    64-bit one]
 * If ptr is a pointer variable, then ptr = &foo assigns foo's address to ptr.
   It is said that ptr points to foo. The difference between ptr and &foo is
   that ptr is a variable (modifiable lvalue) and &foo is a constant (rvalue).
 * The indirection operator * (unary) (also known as the dereferencing operator)
   can be used to find the value stored in foo, like val = *ptr (finding the
   value ptr points to).
   The statements ptr = &foo; and val = *ptr; taken together amount to the
   statement val = foo;.
   Expressions like *&foo are valid as well.
   [When followed by a pointer name or an address, * gives the value stored at
    the pointed-to address]

 * When declaring a pointer, the kind of variable to which the pointer would
   point needs to be specified as well, because different variable types take up
   different amounts of storage, and some pointer operations require knowledge
   of those storage sizes. Also, the program has to know what kind of data is
   stored at the addresses, when different data types take up the same amount of
   storage (such as int and float on this system).
 * int * ptr; (ptr is declared to be a pointer to an integer variable)
   float * p1, * p2;
   [Similarly for other data types]
   [The asterisk identifies the variable as a pointer]
   [The declaration int * ptr; says that ptr is a pointer and that *ptr is of
    type int]
   [The space between the * and the pointer name is optional. Often, the space
    is used in a declaration and is omitted when dereferencing.]

 * %p is the format specifier for addresses (and by extension, pointers).
   [For eg., printf("%p\n", &foo);
             printf("%p\n", ptr);]

 * A pointer points to the address of the first byte of multi-byte variables
   (such as int, float, etc.). Similarly, &foo gives the address of the first
   byte of foo.
   If a pointer pointing to any other byte instead of the first one is read,
   then at the very least the user would get a different value (as it would read
   the remains of that variable and the additional bytes that follow, according
   to the type of the pointer), and on some architectures, the program could
   crash.
   The C standard implies indirectly that multi-byte variables must be stored
   contiguously in the memory (i.e., the remaining bytes are understood to
   immediately follow the first one in a contiguous manner), making a pointer
   pointing to the first byte of multi-byte variables sufficient.

 * In this program,
   (a) swap() is prototyped as void swap(char * u, char * v); because the
       function call to swap() is swap(&x, &y);, which means that instead of
       transmitting the values of x and y, the function transmits their
       addresses.
       [u and v are pointers to characters]
   (b) temp = *u; is used to make temp store the value of x, as u is a pointer
       pointing to x (i.e., u has the value &x).
   (c) *u = *v; is used to assign the value of y to x, and *v = temp; is used to
       assign the value of the original x to y.

 */
