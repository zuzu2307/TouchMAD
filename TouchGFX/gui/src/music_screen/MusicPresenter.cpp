#include <gui/music_screen/MusicView.hpp>
#include <gui/music_screen/MusicPresenter.hpp>

MusicPresenter::MusicPresenter(MusicView& v)
    : view(v)
{

}

void MusicPresenter::activate()
{
	view.updateFileName();
}

void MusicPresenter::deactivate()
{

}
