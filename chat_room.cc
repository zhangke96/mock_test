#include "chat_room.h"

#include <iostream>
#include <sstream>

ChatRoom::ChatRoom(std::string name) 
  : chat_room_name_(name) {}

ChatRoom::~ChatRoom() {}

bool ChatRoom::AddMember(std::string member) {
  if (members.count(member)) {
    return false;
  }
  members.insert(member);
  std::string from("admin");
  std::stringstream message_ss;
  message_ss << "new member:" << member << " join";
  return SendMessage("admin", message_ss.str());
}

bool ChatRoom::RemoveMember(std::string member) {
  if (!members.count(member)) {
    return false;
  }
  members.erase(member);
  std::string from("admin");
  std::stringstream message_ss;
  message_ss << "member:" << member << " leave room";
  return SendMessage("admin", message_ss.str());
}

bool ChatRoom::SendMessage(std::string from, std::string new_message) {
  if (from != "admin" && !members.count(from)) {
    return false;
  }
  return HandleSendMessage(from, new_message);
}

bool ChatRoom::HandleSendMessage(std::string from, std::string new_message) {
  for (auto &member : members) {
    std::cout << "send message to:" << member << " room name:" << chat_room_name_
      << " msg:" << new_message;
  }
  return true;
}

