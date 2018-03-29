/*
 * my_socket.h
 *
 *  Created on: Mar 29, 2018
 *      Author: bo
 */

#ifndef IPV4_MY_SOCKET_H_
#define IPV4_MY_SOCKET_H_

namespace my {

class Socket {
public:
	Socket();
	virtual ~Socket();
	void open();
};

} /* namespace my */

#endif /* IPV4_MY_SOCKET_H_ */
