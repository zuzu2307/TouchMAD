#ifndef GALLERYVIEW_HPP
#define GALLERYVIEW_HPP

#include <gui_generated/gallery_screen/galleryViewBase.hpp>
#include <gui/gallery_screen/galleryPresenter.hpp>

class galleryView : public galleryViewBase
{
public:
    galleryView();
    virtual ~galleryView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // GALLERYVIEW_HPP
