# File Opening Modes

- there are several modes in which we can open a file.

| Mode | Description | Operations Possible |
| - | - | - |
| `"r"` | Searches file.<br> If the file is opened successfully `fopen( )` loads it into memory and sets up a pointer which points to the **first** character in it.<br> If the file cannot be opened `fopen( )` returns `NULL`. | read **only** |
| `"w"` | Searches file.<br> If the file exists, its contents are overwritten.<br> If the file doesn’t exist, a new file is created.<br> Returns `NULL`, if unable to open file. | write **only** |
| `"a"` | Searches file.<br> If the file is opened successfully `fopen( )` loads it into memory and sets up a pointer that points to the **last** character in it.<br> If the file doesn’t exist, a new file is created.<br> Returns `NULL`, if unable to open file. | write **only** <br><br> Cannot modify existing contents |
| `"r+"` | Searches file.<br> If is opened successfully `fopen( )` loads it into memory and sets up a pointer which points to the **first** character in it.<br> Returns `NULL`, if unable to open the file. | read, write |
| `"w+"` | Searches file.<br> If the file exists, its contents are overwritten.<br> If the file doesn’t exist a new file is created.<br> Returns `NULL`, if unable to open file. | write, read |
| `"a+"` | Searches file.<br> If the file is opened successfully `fopen( )` loads it into memory and sets up a pointer which points to the **first** character in it.<br> If the file doesn’t exist, a new file is created.<br> Returns `NULL`, if unable to open file. | read, write <br><br> Cannot modify existing contents |
