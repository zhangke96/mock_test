cmake_minimum_required(VERSION 3.10)

project(Mock_Test)

include_directories("/home/zhangke/code/googletest/googletest/include" "/home/zhangke/code/googletest/googlemock/include")
link_directories("/home/zhangke/code/googletest/build/lib")

add_executable(ChatRoom_Test chat_room.cc testing/mock_chat_room.cc)
target_link_libraries(ChatRoom_Test -lgmock -lgtest -lpthread)
