#ifndef HAS_ERRNO_H
#define HAS_ERRNO_H

typedef enum {
  FILE_GETPOS_ERROR = -31,
  FILE_SETPOS_ERROR = -30,
  FILE_WRITE_ERROR = -29,
  FILE_READ_ERROR = -28,
  FILE_EOF = -27,
  FILE_CLOSE_ERROR = -26,
  CLOSEDIR_ERROR = -25,
  RMDIR_ERROR = -24,
  MKDIR_ERROR = -23,
  OPEN_ERROR = -22,
  FSTAT_ERROR = -21,
  REMOVE_ERROR = -20,
  FILE_FLUSH_ERROR = -19,
  FSYNC_ERROR = -18,
  THREAD_STOP_ERROR = -17,
  THREAD_START_ERROR = -16,
  MUTEX_DESTROY_ERROR = -15,
  MUTEX_UNLOCK_ERROR = -14,
  MUTEX_LOCK_ERROR = -13,
  MUTEX_INIT_ERROR = -12,
  MQ_GETATTR_ERROR = -11,
  MQ_TIMED_RECEIVE_ERROR = -10,
  MQ_RECEIVE_ERROR = -9,
  MQ_TIMED_SEND_ERROR = -8,
  MQ_SEND_ERROR = -7,
  MQ_CLOSE_ERROR = -6,
  MQ_OPEN_ERROR = -5,
  MQ_DELETE_ERROR = -4,
  MQ_CREATE_ERROR = -3,
  NULL_VALUE_ERROR = -2,
  FAILURE = -1,
  SUCCESS = 0,
} has_error_t;

#endif /* HAS_ERRNO_H */



