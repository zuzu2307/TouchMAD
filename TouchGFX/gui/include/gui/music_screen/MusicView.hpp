#ifndef MUSICVIEW_HPP
#define MUSICVIEW_HPP

#include <gui_generated/music_screen/MusicViewBase.hpp>
#include <gui/music_screen/MusicPresenter.hpp>

class MusicView : public MusicViewBase
{
public:
    MusicView();
    virtual ~MusicView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void handleTickEvent();
    virtual void updateFileName();

    virtual void sendControlQ(uint8_t signal);
    virtual void controlPlay();
    virtual void controlStop();
    virtual void controlPrev();
    virtual void controlNext();
    virtual void controlVolumeDown();
    virtual void controlVolumeUp();



protected:
};

#endif // MUSICVIEW_HPP
