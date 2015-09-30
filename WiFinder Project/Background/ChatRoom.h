/* Project:  WiFinder
 * File:  ChatRoom.h
 * Author:  Andrew Sytsma
 *
 * ChatRoom.h is used to abstract the methods that
 * are coded in ChatRoom.cpp.
 */

#ifndef ChatRoom_H
#define ChatRoom_H

#include <String>
#include <vector>
#include "Message.h"
#include "P2PManager"
#include "ChatView"

using std::string;
using std::vector;

class ChatRoom
{
public:
	ChatRoom(P2PManager manager);
	virtual vector<Message> getMessages();
	virtual void sendMessage(Message msg);
	virtual void addMessage(Message msg);
	virtual void setRoomName(string username);
	virtual bool failedConnect();
	virtual void close();
	virtual void setChatView(ChatView view);

private:
	P2PManager manager;
	string roomName;
	ChatView view;
	vector<Message> msgs;
};

#endif