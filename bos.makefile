
# ----------------------------
# Program Options
# ----------------------------

NAME         ?= CEDIT
ICON         ?= icon.png
DESCRIPTION  ?= "CEdit editor"
COMPRESSED   ?= NO
ARCHIVED     ?= YES

# ----------------------------
# Compile Options
# ----------------------------

CFLAGS   ?= -Oz -W -Wall -Wextra -Wwrite-strings -DBOS_BUILD
CXXFLAGS ?= -Oz -W -Wall -Wextra -Wwrite-strings

# ----------------------------
# Debug Options
# ----------------------------

# ----------------------------

ifndef CEDEV
$(error CEDEV environment path variable is not set)
endif

include $(CEDEV)/bos/meta/makefile.mk

