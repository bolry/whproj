/*
 * my_tcpconnection.t.cpp
 *
 *  Created on: Mar 29, 2018
 *      Author: bo
 */

#include <gmock/gmock.h>
#include "my_tcpconnection.h"

using namespace my ;
using namespace testing;

TEST(TcpConnTest, Create){
	Socket m_socket;
	TcpConnection m_tcp(m_socket);
	SUCCEED();
}
