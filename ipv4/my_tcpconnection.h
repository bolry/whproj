/*
 * my_tcpconnection.h
 *
 *  Created on: Mar 29, 2018
 *      Author: bo
 */

#ifndef IPV4_MY_TCPCONNECTION_H_
#define IPV4_MY_TCPCONNECTION_H_

#include "my_socket.h"

namespace my {

class TcpConnection {
public:
	explicit TcpConnection(Socket& a_socket);
	~TcpConnection();
private:
	Socket* m_socket;
};

} /* namespace my */

#endif /* IPV4_MY_TCPCONNECTION_H_ */
