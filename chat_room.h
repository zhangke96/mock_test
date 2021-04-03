#ifndef CHAT_ROOM_H_
#define CHAT_ROOM_H_

#include <string>
#include <set>

class ChatRoom {
 public:
  ChatRoom(std::string name);
  virtual ~ChatRoom();
  bool AddMember(std::string member);
  bool RemoveMember(std::string member);
  bool SendMessage(std::string from, std::string new_message);
  bool HandleSendMessage(std::string from, std::string new_message);
 private:
  std::string chat_room_name_;
  std::set<std::string> members;
};

#endif  // CHAT_ROOM_H_
