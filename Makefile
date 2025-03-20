TARGET = a.out
OBJS = test.o
CC = gcc
CFLAGS = -Wall -Werror -Wextra -c -g -std=c11

%.o : %.c
	$(CC) $(CFLAGS) $^

$(TARGET) : $(OBJS)
	$(CC) $^ -o $@

clean:
	rm -rf $(TARGET) $(OBJS)

install:
	@echo "Installing printutil.h, this will require sudo privelleges"
	@sleep 1
	@sudo mkdir -p /usr/local/include/utils
	@sudo cp printutil.h /usr/local/include/utils
	@echo "Done."
	@echo "You can now include this library anywhere using #include <utils/printutil.h> with no special compiler / linker flags"