UTIL_OBJS := util/FileUtil.o util/GeneralUtil.o util/RegexUtil.o
LEXAN_OBJS := lexan/DFA.o
OBJS := $(UTIL_OBJS) $(LEXAN_OBJS) main.o

OUTPUT := tbox

GPP := g++
LIBS :=
INCLUDES :=
GPP_FLAGS := -std=c++17

$(OUTPUT) : $(OBJS)
	$(GPP) $(GPP_FLAGS) $^ $(LIBS) -o $@

%.o : %.cpp
	$(GPP) $(GPP_FLAGS) $(INCLUDES) $^ -c -o $@