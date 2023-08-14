# leetcode
**力扣每日一题**，采用工程思维。
***
01_mergeAlternately:替合并字符串<br />
02_moveZeroes:移动零<br />
03_findMaxAverage:子数组最大平均数<br />
04_largestAltitude:找到最高海拔<br />
05_findDifference：找出两数组的不同<br />
06_removeStars：从字符串中移动星号<br />

我个人建议的编译环境是linux+gcc<br />

当然你可以放到ARM上实现，这时候你需要配置编译工具链，它由芯片厂家的SDK提供，每一款芯片都是不一样的;<br />

我并没有再将代码进行分类分层放到各个不同的子目录。如果想实现这可能就要使用中型的makefile框架进行编译了；<br />
这个的目的还是去熟悉常用的算法<br />
(-_-)
你可以使用的下面的makefile文件去实现上面的功能：<br />
makefile<br />
```shell

CROSS_COMPILE = arm-linux-gnueabihf-
AS		= $(CROSS_COMPILE)as
LD		= $(CROSS_COMPILE)ld
CC		= $(CROSS_COMPILE)gcc
CPP		= $(CC) -E
AR		= $(CROSS_COMPILE)ar
NM		= $(CROSS_COMPILE)nm

STRIP		= $(CROSS_COMPILE)strip
OBJCOPY		= $(CROSS_COMPILE)objcopy
OBJDUMP		= $(CROSS_COMPILE)objdump

export AS LD CC CPP AR NM
export STRIP OBJCOPY OBJDUMP

CFLAGS := -Wall -O2 -g
CFLAGS += -I $(shell pwd)/inc 
CFLAGS += -I $(shell pwd)/src/
LDFLAGS := -lpthread

export CFLAGS LDFLAGS

TOPDIR := $(shell pwd)
export TOPDIR

TARGET := main


obj-y += main.o
obj-y += src/

all : start_recursive_build $(TARGET)
	@echo $(TARGET) has been built!

start_recursive_build:
	make -C ./ -f $(TOPDIR)/Makefile.build #这一行不太懂

$(TARGET) : built-in.o
	$(CC) -o $(TARGET) built-in.o $(LDFLAGS)

clean:
	rm -f $(shell find -name "*.o")
	rm -f $(TARGET)

distclean:
	rm -f $(shell find -name "*.o")
	rm -f $(shell find -name "*.d")
	rm -f $(TARGET)
```
makefile.build<br />
```shell
PHONY := __build
__build:


obj-y :=
subdir-y :=
EXTRA_CFLAGS :=

include Makefile

# obj-y := a.o b.o c/ d/
# $(filter %/, $(obj-y))   : c/ d/
# __subdir-y  : c d
# subdir-y    : c d
__subdir-y	:= $(patsubst %/,%,$(filter %/, $(obj-y)))
subdir-y	+= $(__subdir-y)

# c/built-in.o d/built-in.o
subdir_objs := $(foreach f,$(subdir-y),$(f)/built-in.o)

# a.o b.o
cur_objs := $(filter-out %/, $(obj-y))
dep_files := $(foreach f,$(cur_objs),.$(f).d)
dep_files := $(wildcard $(dep_files))

ifneq ($(dep_files),)
  include $(dep_files)
endif


PHONY += $(subdir-y)


__build : $(subdir-y) built-in.o

$(subdir-y):
	make -C $@ -f $(TOPDIR)/Makefile.build

built-in.o : $(cur_objs) $(subdir_objs)
	$(LD) -r -o $@ $^

dep_file = .$@.d

%.o : %.c
	$(CC) $(CFLAGS) $(EXTRA_CFLAGS) $(CFLAGS_$@) -Wp,-MD,$(dep_file) -c -o $@ $<
	
.PHONY : $(PHONY)
```