# types.h

Defines primitive system data types.

## Standard Type Definitions

The types.h file includes the following standard type definitions, which are defined with a typedef statement:

| Item | Description |
| - | - |
| `daddr_t` | Used for disk addresses, except in i-nodes on disk. The `/usr/include/sys/filsys.h` file format describes the format of disk addresses used in i-nodes. |
| `caddr_t` | Core (memory) address. |
| `clock_t` | Used for system times as specified in `CLK_TCK`s. |
| `ino_t` | File system i-node number. |
| `cnt_t` | File system reference count type. |
| `dev_t` | Major and minor parts of a device code specify the kind of device and unit number of the device and depend on how the system is customized. |
| `chan_t` | Channel number (the minor's minor). |
| `off_t` | File offset, measured in bytes from the beginning of a file or device. off_t is normally defined as a signed, 32-bit integer. In the programming environment which enables large files, off_t is defined to be a signed, 64-bit integer. |
| `offset_t` | 64-bit file offset, measured in bytes from the beginning of a file or device. |
| `off64_t` | 64-bit file offset, measured in bytes from the beginning of a file or device. |
| `soff_t` | 32-bit file offset, measured in bytes from the beginning of a file or device. |
| `paddr_t` | Real address. |
| `key_t` | IPC key. |
| `time_t` | Timer ID. Times are encoded in seconds, since 00:00:00 UCT, January 1, 1970. |
| `nlink_t` | Number of file links. |
| `mode_t` | File mode. |
| `uid_t` | User ID. |
| `gid_t` | Group ID. |
| `mid_t` | Module ID. |
| `pid_t` | Process ID. |
| `slab_t` | Security label. |
| `mtyp_t` | Interprocess communication (IPC) message type. |
| `size_t` | Data type is used for sizes of objects. |
| `ssize_t` | Data type is used for a count of bytes or an error indication. |
| `uchar_t` | Unsigned char. |
| `ushort_t` | Unsigned short. |
| `uint_t` | Unsigned int. |
| `ulong_t` | Unsigned long.  |   |
| `trace_attr_t` | Trace attributes object. |
| `trace_id_t` | Trace stream identifier. |
| `trace_event_id_t` | Trace-event-type identifier. |
| `trace_event_set_t` | Trace-event-type set. |


## Unsigned Integers and Addresses

The types.h file also includes the following type definitions for unsigned integers and addresses:

```c
typedef  struct            _quad { long val[2]; } quad;
typedef  long              swblk_t;
typedef  unsigned long     size_t;
```

The following type definitions are for BSD compatibility only:

```c
typedef  unsigned char            u_char;
typedef  unsigned short           u_short;
typedef  unsigned int             u_int;
typedef  unsigned long            u_long;
```
