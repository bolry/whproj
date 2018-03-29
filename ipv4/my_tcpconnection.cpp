/*
 * my_tcpconnection.cpp
 *
 *  Created on: Mar 29, 2018
 *      Author: bo
 */

#include "my_tcpconnection.h"

namespace my {


TcpConnection::TcpConnection(Socket& a_socket) : m_socket(&a_socket) {
	m_socket->open();
}

TcpConnection::~TcpConnection() {
}

} /* namespace my */

