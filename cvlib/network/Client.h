#ifndef CLIENT_H
#define CLIENT_H

#include "PracticalSocket.h" // For UDPSocket and SocketException
#include <iostream>          // For cout and cerr
#include <cstdlib>           // For atoi()

#define BUF_LEN 65540 // Larger than maximum UDP packet size
#define BUF_LEN_TCP 500

#include "opencv2/opencv.hpp"
#include "config.h"
#include <errno.h>
#include "library.h"
#include <thread>
#include <stdio.h>
#include <string.h>

using namespace std;
using namespace cv;


class Client
{
private:

public:
    //TCPStream tcpStream;
    //UDPStream udpStream;
};


class UDPStream
{
private:
    Mat lastFrame;
    
public:
    UDPStream();
    ~UDPStream();
    void connect(string address, unsigned short port);
    Mat getLastFrame(){ return lastFrame; }
};

class TCPStream
{
private:
    int connected;
public:
    TCPStream();
    ~TCPStream();
    void connect(string ip, unsigned short port, UDPStream *vidStream);
    int isConnected(){ return connected; }
};

#endif // CLIENT_H
