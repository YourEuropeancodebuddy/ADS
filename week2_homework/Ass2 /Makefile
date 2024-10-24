CC = g++
CFLAGS = -Wall
#write targets here for the 5 questions like this
TARGET = prob1
SRCS = prob1.cpp


TARGET2 = prob2
SRCS2 = prob2.cpp


TARGET3 = prob3
SRCS31 = prob3.cpp
SRCS32 = testprob3.cpp

TARGET4 = prob4
SRCS4= prob4.cpp

TARGET5 = prob5
SRCS5 = prob5.cpp

TARGET2 = prob6
SRCS2 = prob6.cpp

#Add all targets
all:  $(TARGET) $(TARGET2) $(TARGET3) $(TARGET4) $(TARGET5) $(TARGET6)


#Follow the same pattern here
$(TARGET): $(SRCS)
    $(CC) $(CFLAGS) -o $(TARGET) $(SRCS)


$(TARGET2): $(SRCS2)
    $(CC) $(CFLAGS) -o $(TARGET2) $(SRCS2)

$(TARGET3): $(SRCS31) $(SRCS32)
    $(CC) $(CFLAGS) -o $(TARGET3) $(SRCS31) $(SRCS32)

$(TARGET4): $(SRCS4)
    $(CC) $(CFLAGS) -o $(TARGET4) $(SRCS4)


$(TARGET5): $(SRCS5)
    $(CC) $(CFLAGS) -o $(TARGET5) $(SRCS5)

	$(TARGET6): $(SRCS6)
    $(CC) $(CFLAGS) -o $(TARGET6) $(SRCS6)


#add the targets here as well
clean:
    rm -f $(TARGET) $(TARGET2)  $(TARGET3) $(TARGET4) $(TARGET5) $(TARGET6)
