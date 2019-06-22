//
// Created by 张东昌 on 2019-06-22.
//

#ifndef SERVERGUI_IMAGEFRAME_H
#define SERVERGUI_IMAGEFRAME_H

#include <wx/wx.h>
#include "ImagePanel.h"

class ImageFrame : public wxFrame {
public:
    ImagePanel *img;
    ImageFrame(const wxString& title, const wxPoint& pos, const wxSize& size, void* ptr);

    ~ImageFrame();
private:
    wxBoxSizer *sizer, *all_sizer;
    void *ptr = nullptr;
};


#endif //SERVERGUI_IMAGEFRAME_H
