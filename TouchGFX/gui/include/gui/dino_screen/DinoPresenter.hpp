#ifndef DINOPRESENTER_HPP
#define DINOPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class DinoView;

class DinoPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    DinoPresenter(DinoView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~DinoPresenter() {};

private:
    DinoPresenter();

    DinoView& view;
};

#endif // DINOPRESENTER_HPP
