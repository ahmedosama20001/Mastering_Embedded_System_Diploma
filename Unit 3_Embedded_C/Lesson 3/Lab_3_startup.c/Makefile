#@copyright: Ahmed Osama 

CC= arm-none-eabi-
CFLAGS= -g -mthumb -mcpu=cortex-m3 -gdwarf-2
INCS= -I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
As= $(wildcard *.s)
AsOBJ= $(As:.s=.o)
Project_name= learn-in-depth_cortexM3

all: $(Project_name).bin
	@echo "======> Build is Done <====="

%.o: %.s
	$(CC)as.exe  $(CFLAGS) $< -o $@ 2> log

%.o: %.c
	$(CC)gcc.exe $(CFLAGS) $(INCS) -c $< -o $@

$(Project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map


$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm *.o *.elf *.bin 
	@echo "Everything clear"

clean:
	rm *.elf *.bin 