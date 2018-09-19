# 源文件列表
set(SRC_LIST main.c)

# 头文件列表
include_directories(${HELLO_SOURCE_DIR}/include)

# 设置生成的可执行文件的路径
set(EXECUTABLE_OUTPUT_PATH ${HELLO_SOURCE_DIR}/bin)

# 生成的可执行文件
add_executable(hello ${SRC_LIST})

# 所需要的库文件的目录
link_directories(${HELLO_SOURCE_DIR}/lib)

# 需要链接的库文件
target_link_libraries(hello sum)
