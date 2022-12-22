# stat.h

The stat data structure contains the following fields:

| Item | Description |
| - | - |
| `st_dev` | Device that contains a directory entry for this file. |
| `st_ino` | Index of this file on its device.<br> A file is uniquely identified by specifying the device on which it resides and its index on that device. |
| `st_mode` | File mode.<br> The possible file mode values are given in the description of the `/usr/include/sys/mode.h` file. |
| `st_nlink` | Number of hard links (alternate directory entries) to the file created using the link subroutine. |
| `st_access` | Field is not implemented.<br> All bits are returned as zero. |
| `st_size` | Number of bytes in a file (including any holes).<br> This field also defines the position of the end-of-file mark for the file.<br> The end-of-file mark is updated only by subroutines, for example the write subroutine.<br> If the file is mapped by the `shmat` subroutine and a value is stored into a page past the end-of-file mark, that mark will be updated to include this page when the file is closed or forced to permanent storage. |
| `st_rdev` | ID of the device.<br> This field is defined only for block or character special files. |
| `st_atime` | Time when file data was last accessed.<br> `st_atime` and `st_atime_n` taken together represent the last file access time in number of seconds and nanoseconds since the epoch. |
| `st_atime_n` | Time when file data was last accessed.<br> `st_atime` and `st_atime_n` taken together represent the last file access time in number of seconds and nanoseconds since the epoch. |
| `st_mtime` | Time when file data was last modified.<br> `st_mtime` and `st_mtime_n` taken together represent the last file modification time in number of seconds and nanoseconds since the epoch. |
| `st_mtime_n` | Time when file data was last modified.<br> `st_mtime` and `st_mtime_n` taken together represent the last file modification time in number of seconds and nanoseconds since the epoch. |
| `st_ctime` | Time when the file status was last changed.<br> `st_ctime` and `st_ctime_n` taken together represent the last file status change in number of seconds and nanoseconds since the epoch. |
| `st_ctime_n` | Time when the file status was last changed.<br> `st_ctime` and `st_ctime_n` taken together represent the last file status change in number of seconds and nanoseconds since the epoch. |
| `st_blksize` | Size, in bytes of each block of the file. |
| `st_blocks` | Number of blocks actually used by the file (measured in the units specified by the `DEV_BSIZE` constant). |
| `st_gen` | Generation number of this i-node. |
| `st_type` | Type of the v-node for the object. This is one of the following values, which are defined in the `/usr/include/sys/vnode.h` file:<br> `VNON` - Unallocated object; this should not occur<br> `VBAD` - Unknown type of object<br> `VREG` - Regular file<br> `VDIR` - Directory file<br> `VBLK` - Block device<br> `VCHR` - Character device<br> `VLNK` - Symbolic link<br> `VSOCK` - Socket<br> `VFIFO` - FIFO<br> `VMPC` - Multiplexed character device. |
| `st_vfs` | Virtual file system (VFS) ID, which identifies the VFS that contains the file.<br> By comparing this value with the VFS numbers returned by the mntctl subroutine, the name of the host where the file resides can be identified. |
| `st_vfstype` | File-system type, as defined in the /usr/include/sys/vmount.h file. |
| `st_flag` | Flag indicating whether the file or the directory is a virtual mount point.<br> This flag can have the following values:<br> `FS_VMP` - Indicates that the file is a virtual mount point.<br> `FS_MOUNT` - Indicates that the file is a virtual mount point.<br> `FS_REMOTE` - Indicates that the file resides on another machine. |
| `st_uid` | File owner ID. |
| `st_gid` | File group ID. |


The stat64 data structure in the `/usr/include/sys/stat.h` file returns information for the stat64, fstat64, and lstat64 subroutines. The stat64 structure contains the same fields as the stat structure, with the exception of the following field:

| Item | Description |
| - | - |
| `st_size` | Number of bytes in a file.<br> The `st_size` field is a 64-bit quantity, allowing file sizes greater than `OFF_MAX`.<br> The `st_size` field of the stat64 structure is of the type `off64_t`. |

For remote files, the `st_atime`, `st_mtime`, and `st_ctime` fields contain the time at the server.

The value of the st_atime field can be changed by the following subroutines:

- `read`, `readx`, `readv`, `readvx`
- `readlink`
- `shmdt`
- `utime`, `utimes`


The values of the `st_ctime` and `st_mtime` fields can be set by the following subroutines:

- `write`, `writex`, `writev`, `writevx`
- `open`, `openx`, `creat`
- `link`
- `symlink`
- `unlink`
- `mknod`
- `mkdir`
- `rmdir`
- `rename`
- `truncate`, `ftruncate`
- `utime`, `utimes`

In addition, the `shmdt` subroutine can change the `st_mtime` field, and the `chmod`, `fchmod`, `chown`, `chownx`, `fchown`, and `fchownx` subroutines can change the `st_ctime` field.

Because they can create a new object, the `open`, `openx`, `creat`, `symlink`, `mknod`, `mkdir`, and `pipe` subroutines can set the `st_atime`, `st_ctime`, and `st_mtime` fields.
