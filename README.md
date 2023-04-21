
  <body>
    <h1>Project 0x11 - C Printf</h1>
    <p>
      This project is an implementation of the C standard library function
      <code>printf</code>. The <code>printf</code> function is used to format
      and print text and other data types to the standard output stream.
    </p>
	<p>
      This implementation supports the following format specifiers:
    </p>
	    <table>
      <tr>
        <th>Specifier</th>
        <th>Output</th>
      </tr>
      <tr>
        <td><code>%c</code></td>
        <td>character</td>
      </tr>
      <tr>
        <td><code>%s</code></td>
        <td>string</td>
      </tr>
      <tr>
        <td><code>%%</code></td>
        <td>percent sign</td>
      </tr>
    </table>
	<h2>Requirements</h2>
	<p>
      This implementation of <code>printf</code> was written and tested using
      the C programming language and should be compiled with a C compiler that
      supports the C99 standard or later.
	</p>
	<h2>Usage</h2>
	<p>
      To use the <code>printf</code> function, include the <code>printf.h</code> header in your source file and call the function with a format string and any additional arguments as needed:
	  <code>
	  #include "printf.h"
        int main(void) {
            int x = 42;
            char* s = "hello";
            printf("%d %s\n", x, s);
            return 0;
        }
		</code>
	  This will print 42 hello to the standard output stream.
	</p>
	<h2>Testing</h2>
	<p>
      To run the test suite for this implementation, compile the test file <code>test_printf.c</code> and run the resulting executable:
	  <code>gcc -Wall -Werror -Wextra -pedantic test_printf.c printf.c -o test_printf
./test_printf</code>
	</p>
