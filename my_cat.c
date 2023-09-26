#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int my_cat(const char *const filename) {
  int fd;

  // Open the file in read-only mode
  fd = open(filename, O_RDONLY);
  if (fd < 0) {
    // If the file could not be opened, return an error code
    return 1;
  }

  // Read the file in chunks of 1024 bytes
  char buffer[1024];
  ssize_t bytes_read;
  while ((bytes_read = read(fd, buffer, sizeof(buffer))) > 0) {
    // Write the data to the standard output
    write(1, buffer, (size_t) bytes_read);
  }

  // Close the file
  close(fd);

  // Return success
  return 0;
}



