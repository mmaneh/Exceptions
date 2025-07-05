CXX = g++
CXXFLAGS = -std=c++17 -Wall -I. 
GTEST_LIBS = -lgtest -lgtest_main -pthread

TARGET = test_runner
SRCS = test.cpp exception.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(GTEST_LIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)

