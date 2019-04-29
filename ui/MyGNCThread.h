//
// Created by z on 19-4-29.
//

#ifndef SERVERGUI_MYGNCTHREAD_H
#define SERVERGUI_MYGNCTHREAD_H

#include <wx/wx.h>
#include "MyFrame.h"

class MyGNCThread : public wxThread {
public:
    MyGNCThread(MyFrame *_handler, std::string _ip, int _port);
    void *Entry() override;

    bool start_thread();
private:
    MyFrame *handler;
    std::string ip;
    int port;
    uchar buffer[BUFFER_SIZE];
};

#endif //SERVERGUI_MYGNCTHREAD_H