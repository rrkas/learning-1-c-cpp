# stdio.h

| Variable | Description |
| - | - |
| `size_t` | This is the unsigned integral type and is the result of the sizeof keyword. |
| `FILE` | This is an object type suitable for storing information for a file stream. |
| `fpos_t` | This is an object type suitable for storing any position in a file. |

| Macro | Description |
| - | - |
| `NULL` | This macro is the value of a null pointer constant. |
| `_IOFBF`, `_IOLBF` and `_IONBF`  | These are the macros which expand to integral constant expressions with distinct values and suitable for the use as third argument to the `setvbuf` function. |
| `BUFSIZ` | This macro is an integer, which represents the size of the buffer used by the `setbuf` function. |
| `EOF` | This macro is a negative integer, which indicates that the end-of-file has been reached. |
| `FOPEN_MAX` | This macro is an integer, which represents the maximum number of files that the system can guarantee to be opened simultaneously. |
| `FILENAME_MAX` | This macro is an integer, which represents the longest length of a char array suitable for holding the longest possible filename.<br> If the implementation imposes no limit, then this value should be the recommended maximum value. |
| `L_tmpnam` | This macro is an integer, which represents the longest length of a char array suitable for holding the longest possible temporary filename created by the `tmpnam` function. |
| `SEEK_CUR`, `SEEK_END`, and `SEEK_SET` | These macros are used in the `fseek` function to locate different positions in a file. |
| `TMP_MAX` | This macro is the maximum number of unique filenames that the function `tmpnam` can generate. |
| `stderr`, `stdin`, and `stdout` | These macros are pointers to FILE types which correspond to the standard error, standard input, and standard output streams. |


| Function | Description |
| - | - |
| `int fclose(FILE *stream)` | Closes the stream.<br> All buffers are flushed. |
| `void clearerr(FILE *stream)` | Clears the end-of-file and error indicators for the given stream. |
| `int feof(FILE *stream)` | Tests the end-of-file indicator for the given stream. |
| `int ferror(FILE *stream)` | Tests the error indicator for the given stream. |
| `int fflush(FILE *stream)` | Flushes the output buffer of a stream. |
| `int fgetpos(FILE *stream, fpos_t *pos)` | Gets the current file position of the stream and writes it to pos. |
| `FILE *fopen(const char *filename, const char *mode)` | Opens the filename pointed to by filename using the given mode. |
| `size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)` | Reads data from the given stream into the array pointed to by ptr. |
| `FILE *freopen(const char *filename, const char *mode, FILE *stream)` | Associates a new filename with the given open stream and same time closing the old file in stream. |
| `int fseek(FILE *stream, long int offset, int whence)` | Sets the file position of the stream to the given offset.<br> The argument offset signifies the number of bytes to seek from the given whence position. |
| `int fsetpos(FILE *stream, const fpos_t *pos)` | Sets the file position of the given stream to the given position.<br> The argument pos is a position given by the function `fgetpos`. |
| `long int ftell(FILE *stream)` | Returns the current file position of the given stream. |
| `size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)` | Writes data from the array pointed to by ptr to the given stream. |
| `int remove(const char *filename)` | Deletes the given filename so that it is no longer accessible. |
| `int rename(const char *old_filename, const char *new_filename)` |Causes the filename referred to, by old_filename to be changed to new_filename. |
| `void rewind(FILE *stream)` | Sets the file position to the beginning of the file of the given stream. |
| `void setbuf(FILE *stream, char *buffer)` | Defines how a stream should be buffered. |
| `int setvbuf(FILE *stream, char *buffer, int mode, size_t size)` | Another function to define how a stream should be buffered. |
| `FILE *tmpfile(void)` | Creates a temporary file in binary update mode (wb+). |
| `char *tmpnam(char *str)` | Generates and returns a valid temporary filename which does not exist. |
| `int fprintf(FILE *stream, const char *format, ...)` | Sends formatted output to a stream. |
| `int printf(const char *format, ...)` | Sends formatted output to stdout. |
| `int sprintf(char *str, const char *format, ...)` | Sends formatted output to a string. |
| `int vfprintf(FILE *stream, const char *format, va_list arg)` | Sends formatted output to a stream using an argument list. |
| `int vprintf(const char *format, va_list arg)` | Sends formatted output to stdout using an argument list. |
| `int vsprintf(char *str, const char *format, va_list arg)` | Sends formatted output to a string using an argument list. |
| `int fscanf(FILE *stream, const char *format, ...)` | Reads formatted input from a stream. |
| `int scanf(const char *format, ...)` | Reads formatted input from stdin. |
| `int sscanf(const char *str, const char *format, ...)` | Reads formatted input from a string. |
| `int fgetc(FILE *stream)` | Gets the next character (an unsigned char) from the specified stream and advances the position indicator for the stream. |
| `char *fgets(char *str, int n, FILE *stream)` | Reads a line from the specified stream and stores it into the string pointed to by str.<br> It stops when either (n-1) characters are read, the newline character is read, or the end-of-file is reached, whichever comes first. |
| `int fputc(int char, FILE *stream)` | Writes a character (an unsigned char) specified by the argument char to the specified stream and advances the position indicator for the stream. |
| `int fputs(const char *str, FILE *stream)` | Writes a string to the specified stream up to but not including the null character. |
| `int getc(FILE *stream)` | Gets the next character (an unsigned char) from the specified stream and advances the position indicator for the stream. |
| `int getchar(void)` | Gets a character (an unsigned char) from stdin. |
| `char *gets(char *str)` | Reads a line from stdin and stores it into the string pointed to by, str.<br> It stops when either the newline character is read or when the end-of-file is reached, whichever comes first. |
| `int putc(int char, FILE *stream)` | Writes a character (an unsigned char) specified by the argument char to the specified stream and advances the position indicator for the stream. |
| `int putchar(int char)` | Writes a character (an unsigned char) specified by the argument char to stdout. |
| `int puts(const char *str)` | Writes a string to stdout up to but not including the null character.<br> A newline character is appended to the output. |
| `int ungetc(int char, FILE *stream)` | Pushes the character char (an unsigned char) onto the specified stream so that the next character is read. |
| `void perror(const char *str)` | Prints a descriptive error message to stderr.<br> First the string str is printed followed by a colon and then a space. |


