#include <gui/music_screen/MusicView.hpp>

//--------- RTOS ---------------------------
#include "string.h"
#include "cmsis_os.h"
#include "PollingRoutines.h"

extern osSemaphoreId binarySemMsgUartHandle;
extern uint8_t uartMsgBuffer[UART_BUFF_SIZE];

//------------------------------------------

//--------- Control Music ------------------------
#include "stm32746g_discovery.h"
#include "queue.h"
#include "task.h"
#include "ControlMusic.h"

extern xQueueHandle music_msg_q;

//----------------------------------------------


MusicView::MusicView()
{

}

void MusicView::setupScreen()
{
    MusicViewBase::setupScreen();
}

void MusicView::tearDownScreen()
{
    MusicViewBase::tearDownScreen();
}


//------------- Custom function ------------
void MusicView::controlPlay()
{
	sendControlQ(2);
}

void MusicView::controlStop()
{
	sendControlQ(3);
}
void MusicView::controlPrev()
{
	sendControlQ(4);
}
void MusicView::controlNext()
{
	sendControlQ(5);
}
void MusicView::controlVolumeDown()
{
	sendControlQ(6);
}
void MusicView::controlVolumeUp()
{
	sendControlQ(7);
}

void MusicView::sendControlQ(uint8_t signal){
	xQueueSend(music_msg_q, &signal, 0);
}

void MusicView::updateFileName(){
	if (uartMsgBuffer[0] == 0)
		return; // array empty so return

	memset(&MusicTextAreaBuffer, 0, MUSICTEXTAREA_SIZE);

	Unicode::strncpy(MusicTextAreaBuffer, (char *)uartMsgBuffer, MUSICTEXTAREA_SIZE - 1);
	MusicTextAreaBuffer[16] = '\0'; // last index must be NULL
	MusicTextArea.invalidate();
}

// ------------ Tick ---------------
void MusicView::handleTickEvent(){
	if (binarySemMsgUartHandle != NULL)
		{
			if (xSemaphoreTake(binarySemMsgUartHandle, (TickType_t)10) == pdTRUE)
			{
				updateFileName();
			}
		}
}
