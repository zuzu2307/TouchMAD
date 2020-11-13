#ifndef DINOVIEW_HPP
#define DINOVIEW_HPP

#include <gui_generated/dino_screen/DinoViewBase.hpp>
#include <gui/dino_screen/DinoPresenter.hpp>

class DinoView : public DinoViewBase
{
public:
    DinoView();
    virtual ~DinoView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // DINOVIEW_HPP
