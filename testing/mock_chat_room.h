#ifndef MOCK_CHAT_ROOM_H_
#define MOCK_CHAT_ROOM_H_

#include <gmock/gmock.h>
#include "../chat_room.h"

class MockChatRoom {
 public:
  MOCK_METHOD(bool, AddMember, (std::string));
  MOCK_METHOD(bool, RemoveMember, (std::string));
  MOCK_METHOD(bool, SendMessage, (std::string, std::string));
  MOCK_METHOD(bool, HandleSendMessage, (std::string, std::string));
};

#endif // MOCK_CHAT_ROOM_H_
