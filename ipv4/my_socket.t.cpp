/*
 * my_socket.t.cpp
 *
 *  Created on: Mar 29, 2018
 *      Author: bo
 */

#include <gmock/gmock.h>
#include "my_socket.h"

using namespace my;
using namespace testing;

struct SocketTest : Test{
	Socket m_s;
};

TEST_F(SocketTest, Open){
	m_s.open();
	SUCCEED();
}
