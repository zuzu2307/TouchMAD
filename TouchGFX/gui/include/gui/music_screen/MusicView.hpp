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
protected:
};

#endif // MUSICVIEW_HPP
