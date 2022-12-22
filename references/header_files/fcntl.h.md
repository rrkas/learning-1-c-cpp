# fcntl.h

Defines file control options.

## Flag Values for open Subroutine

The following flag values are accessible only to the open subroutine:
| Item | Description |
| - | - |
| `O_RDONLY` | Read-only |
| `O_WRONLY` | Write-only |
| `O_RDWR` | Read and write |
| `O_CREAT` | Open with file create (uses the third open argument) |
| `O_TRUNC` | Open with truncation |
| `O_DIRECT` | Open for Direct I/O |
| `O_EXCL` | Exclusive open <br> Note:<br> The `O_EXCL` flag is not fully supported for Network File Systems (NFS).<br> The NFS protocol does not guarantee the designed function of the `O_EXCL` flag. |
| `O_NOCTTY` | Do not assign a controlling terminal |
| `O_RSHARE` | Read shared open |
| `O_NSHARE` | Read shared open |

## File Access Mode Mask

The `O_ACCMODE` mask is used to determine the file access mode.

## File Status Flags for open and fcntl Subroutines

The following file status flags are accessible to both the open and fcntl subroutines:

| Item | Description |
| - | - |
| `O_NONBLOCK` | POSIX nonblocking I/O |
| `FNONBLOCK` | POSIX nonblocking I/O |
| `O_APPEND` | An append with writes guaranteed at the end |
| `FAPPEND` | An append with writes guaranteed at the end |
| `O_SYNC` | Synchronous write option |
| `FSYNC` | Synchronous write option |
| `O_DSYNC` | Synchronous write option (file data only). |
| `FDATASYNC` | Synchronous write option (file data only). |
| `O_RSYNC` | Synchronous file attributes on read. |
| `FREADSYNC` | Synchronous file attributes on read. |
| `FASYNC` | Asynchronous I/O |
| `O_NDELAY` | Nonblocking I/O |
| `FNDELAY` | Nonblocking I/O |
| `O_LARGEFILE` | Access to large files enabled . |

## File Status Flags for open Subroutine

The following file status flags are accessible to the open subroutine:

| Item | Description |
| - | - |
| `O_DEFER` | Deferred update |
| `O_DELAY` | Open with delay |
| `O_DIRECT` | Open for Direct I/O |

## File Descriptor Flags for fcntl Subroutine

The following file descriptor flag is accessible to the fcntl subroutine:

| Item | Description |
| - | - |
| `FD_CLOEXEC` | Close this file during an exec. |

File flag values corresponding to file access modes are as follows:

| Item | Description |
| - | - |
| `FREAD` | File is open for read. |
| `FWRITE` | File is open for write. |

Note:
- The `FREAD` and `FWRITE` flags cannot be used unless the `_KERNEL` flag has been defined.
- The `ldfcn.h` file also assigns values to the `FREAD` and `FWRITE` options.<br> If you use the `ldfcn.h` and `fcntl.h` files together, directly or indirectly, you should use the `#undef` statement on the `FREAD` and `FWRITE` options of one of the header files.<br> If you do not, the compiler will return a warning about using duplicate definitions.

## Command Values for fcntl Subroutine

The Command values for the fcntl subroutine (that is, for fcntl subroutine requests) are:

| Item | Description |
| - | - |
| `F_DUPFD` | Duplicate the file description. |
| `F_GETFD` | Get the file description flags. |
| `F_SETFD` | Set the file description flags. |
| `F_GETFL` | Get the file status flags and file access modes. |
| `F_SETFL` | Set the file flags. |
| `F_GETLK` | Return information about an existing file lock. |
| `F_GETLK64` | Return information about an existing file lock. |
| `F_SETLK` | Set or clear a file lock. |
| `F_SETLK64` | Set or clear a file lock. |
| `F_SETLKW` | Set or clear a file lock and wait if blocked. |
| `F_SETLKW64` | Set or clear a file lock and wait if blocked. |
| `F_GETOWN` | Get the descriptor owner. |
| `F_SETOWN` | Set the descriptor owner. |


## Socket Restrictions

The following Command values return EINVAL for sockets:
- `F_SETLK`
- `F_SETLKW`
- `F_SETLK64`
- `F_SETLKW64`
- `F_GETLK`
- `F_GETLK64`
