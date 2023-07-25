CC  = g++
CFLAGS = -fPIC -Wall -Wextra
LDFLAGS = -lSDL2
OPTIMIZE_LEVEL = -O2

SRCDIR = src
INCDIR = include
BUILDDIR = build

SRC = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%.o, $(SRC))
INC = -I $(INCDIR)

TARGET = sdl.out

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OPTIMIZE_LEVEL) $(CFLAGS) -o $@ $(OBJ) $(LDFLAGS)

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	@rm -rf $(BUILDDIR) $(TARGET)
