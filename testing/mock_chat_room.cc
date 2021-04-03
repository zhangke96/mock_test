#include "mock_chat_room.h"
#include <gtest/gtest.h>

using ::testing::AtLeast;

// TEST(ChatRoomTest, AddMember) {
//   MockChatRoom chat_room;
//   EXPECT_CALL(chat_room, SendMessage()).Times(1);

//   AddMe
// }

using ::testing::Return;
using ::testing::_;

int main(int argc, char *argv[]) {
  ::testing::InitGoogleMock(&argc, argv);
  MockChatRoom mock_chatroom;
  EXPECT_CALL(mock_chatroom, HandleSendMessage(_, _)).Times(1).WillOnce(Return(true));
  mock_chatroom.AddMember("zhangke");
  return EXIT_SUCCESS;
}