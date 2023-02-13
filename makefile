CC= g++

TARGET = testcpp

OBJ = testcpp.o

DEP = 

CFLAGS = 

%.o : %.cpp $(DEP)
	$(CC) -c -o $@ $< $(CFLAGS)

goal: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY : clean

clean:
	rm *.o goal

