/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef PONGVIEWBASE_HPP
#define PONGVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/pong_screen/PongPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/canvas/Circle.hpp>
#include <touchgfx/widgets/canvas/PainterRGB888.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/mixins/Draggable.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/MoveAnimator.hpp>

class PongViewBase : public touchgfx::View<PongPresenter>
{
public:
    PongViewBase();
    virtual ~PongViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box background;
    touchgfx::MoveAnimator< touchgfx::Circle > ball;
    touchgfx::PainterRGB888 ballPainter;
    touchgfx::Draggable< touchgfx::Box > paddle1;
    touchgfx::ButtonWithLabel back_button;
    touchgfx::TextAreaWithOneWildcard score;

    /*
     * Wildcard Buffers
     */
    static const uint16_t SCORE_SIZE = 20;
    touchgfx::Unicode::UnicodeChar scoreBuffer[SCORE_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<PongViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // PONGVIEWBASE_HPP
