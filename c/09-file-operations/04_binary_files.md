# Text Files and Binary Files

- A **text file** contains only textual information like alphabets, digits and special symbols.<br> In actuality the ASCII codes of these characters are stored in text files.<br> A good example of a text file is any C program.

- A **binary file** is merely a collection of bytes.<br> This collection might be a compiled version of a C program, or music data stored in a wave file or a picture stored in a graphic file.

- A very easy way to find out whether a file is a text file or a binary file is to open that file in any text editor.<br> If on opening the file you can make out what is displayed then it is a text file, otherwise it is a binary file.

## text and binary mode files are different

1. Newlines
    - in text mode, a newline character is converted into the carriage return-linefeed combination before being written to the disk. Likewise, the carriage return-linefeed combination on the disk is converted back into a newline when the file is read by a C program.
    
    - if a file is opened in binary mode, as opposed to text mode, these conversions will **not** take place.

1. End of File
    - In text mode, a special character, whose ASCII value is 26, is inserted after the last character in the file to mark the end of file. If this character is detected at any point in the file, the read function would return the EOF signal to the program.

    - there is no such special character present in the binary mode files to mark the end of file. The binary mode files keep track of the end of file from the number of characters present in the directory entry of the file.

1. Storage of Numbers
    - Numbers are stored as strings of characters. Thus, `1234`, even though it occupies two bytes in memory, when transferred to the disk using `fprintf( )`, would occupy four bytes, one byte per character.
    - numbers with more digits would require more disk space.
    


- the two modes are not compatible.<br> the file that has been written in text mode is read back only in text mode.<br> the file that has been written in binary mode must be read back only in binary mode.
