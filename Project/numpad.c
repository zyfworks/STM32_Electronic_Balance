/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.26                          *
*        Compiled Aug  8 2014, 14:49:54                              *
*        (c) 2013 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
// USER END

#include "DIALOG.h"
#include "function.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define OFFSET 			20
#define ID_FRAMEWIN_0    (GUI_ID_USER + OFFSET + 0x04)
#define ID_BUTTON_ESC    (GUI_ID_USER + OFFSET + 0x05)
#define ID_EDIT_0    (GUI_ID_USER + OFFSET + 0x06)
#define ID_BUTTON_NUM1    (GUI_ID_USER + OFFSET + 0x07)
#define ID_BUTTON_NUM4    (GUI_ID_USER + OFFSET + 0x08)
#define ID_BUTTON_NUM7    (GUI_ID_USER + OFFSET + 0x09)
#define ID_BUTTON_NUM2    (GUI_ID_USER + OFFSET + 0x0A)
#define ID_BUTTON_NUM5    (GUI_ID_USER + OFFSET + 0x0B)
#define ID_BUTTON_NUM8    (GUI_ID_USER + OFFSET + 0x0C)
#define ID_BUTTON_NUM3    (GUI_ID_USER + OFFSET + 0x0D)
#define ID_BUTTON_NUM6    (GUI_ID_USER + OFFSET + 0x0E)
#define ID_BUTTON_NUM9    (GUI_ID_USER + OFFSET + 0x0F)
#define ID_BUTTON_NUM0    (GUI_ID_USER + OFFSET + 0x10)
#define ID_BUTTON_DOT    (GUI_ID_USER + OFFSET + 0x11)
#define ID_BUTTON_BACK    (GUI_ID_USER + OFFSET + 0x12)
#define ID_BUTTON_CLR    (GUI_ID_USER + OFFSET + 0x13)
#define ID_BUTTON_OK    (GUI_ID_USER + OFFSET +0x14)


// USER START (Optionally insert additional defines)
#define STA_NOTSET 0
#define STA_SET 2
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

// USER START (Optionally insert additional static data)
extern int priceStatus;
extern double curPrice;
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { FRAMEWIN_CreateIndirect, "Framewin_Numpad", ID_FRAMEWIN_0, 21, 26, 280, 175, 0, 0x64, 0 },
  { BUTTON_CreateIndirect, "Button_Escape", ID_BUTTON_ESC, 166, 103, 46, 29, 0, 0x0, 0 },
  { EDIT_CreateIndirect, "Edit_Textbox", ID_EDIT_0, 13, 3, 250, 23, 0, 0x64, 0 },
  { BUTTON_CreateIndirect, "Button_Num1", ID_BUTTON_NUM1, 13, 33, 46, 29, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Button_Num4", ID_BUTTON_NUM4, 12, 68, 46, 29, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Button_Num7", ID_BUTTON_NUM7, 13, 103, 46, 29, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Button_Num2", ID_BUTTON_NUM2, 64, 33, 46, 29, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Button_Num5", ID_BUTTON_NUM5, 64, 68, 46, 29, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Button_Num8", ID_BUTTON_NUM8, 64, 103, 46, 29, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Button_Num3", ID_BUTTON_NUM3, 115, 33, 46, 29, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Button_Num6", ID_BUTTON_NUM6, 115, 68, 46, 29, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Button_Num9", ID_BUTTON_NUM9, 115, 103, 46, 29, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Button_Num0", ID_BUTTON_NUM0, 165, 33, 46, 29, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Button_Dot", ID_BUTTON_DOT, 166, 68, 46, 29, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Button_Back", ID_BUTTON_BACK, 217, 33, 46, 29, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Button_Clear", ID_BUTTON_CLR, 217, 68, 46, 29, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Button_OK", ID_BUTTON_OK, 217, 103, 46, 29, 0, 0x0, 0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

// USER START (Optionally insert additional static code)
// USER END

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem;
  int     NCode;
  int     Id;
  // USER START (Optionally insert additional variables)
  WM_HWIN hEdit;
  // USER END

  hEdit = WM_GetDialogItem(pMsg->hWin, ID_EDIT_0);

  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    //
    // Initialization of 'Framewin_Numpad'
    //
    hItem = pMsg->hWin;
    FRAMEWIN_SetTitleHeight(hItem, 20);
    FRAMEWIN_SetText(hItem, "Input Price");
    FRAMEWIN_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    FRAMEWIN_SetFont(hItem, GUI_FONT_20_1);
    //
    // Initialization of 'Button_Escape'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_ESC);
    BUTTON_SetFont(hItem, GUI_FONT_20_1);
    BUTTON_SetText(hItem, "ESC");
    //
    // Initialization of 'Edit_Textbox'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_0);
    EDIT_SetText(hItem, "0");
    EDIT_SetFont(hItem, GUI_FONT_20_1);
    EDIT_SetTextAlign(hItem, GUI_TA_RIGHT | GUI_TA_VCENTER);
    //
    // Initialization of 'Button_Num1'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_NUM1);
    BUTTON_SetText(hItem, "1");
    BUTTON_SetFont(hItem, GUI_FONT_20_1);
    //
    // Initialization of 'Button_Num4'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_NUM4);
    BUTTON_SetFont(hItem, GUI_FONT_20_1);
    BUTTON_SetText(hItem, "4");
    //
    // Initialization of 'Button_Num7'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_NUM7);
    BUTTON_SetText(hItem, "7");
    BUTTON_SetFont(hItem, GUI_FONT_20_1);
    //
    // Initialization of 'Button_Num2'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_NUM2);
    BUTTON_SetFont(hItem, GUI_FONT_20_1);
    BUTTON_SetText(hItem, "2");
    //
    // Initialization of 'Button_Num5'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_NUM5);
    BUTTON_SetFont(hItem, GUI_FONT_20_1);
    BUTTON_SetText(hItem, "5");
    //
    // Initialization of 'Button_Num8'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_NUM8);
    BUTTON_SetFont(hItem, GUI_FONT_20_1);
    BUTTON_SetText(hItem, "8");
    //
    // Initialization of 'Button_Num3'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_NUM3);
    BUTTON_SetFont(hItem, GUI_FONT_20_1);
    BUTTON_SetText(hItem, "3");
    //
    // Initialization of 'Button_Num6'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_NUM6);
    BUTTON_SetFont(hItem, GUI_FONT_20_1);
    BUTTON_SetText(hItem, "6");
    //
    // Initialization of 'Button_Num9'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_NUM9);
    BUTTON_SetFont(hItem, GUI_FONT_20_1);
    BUTTON_SetText(hItem, "9");
    //
    // Initialization of 'Button_Num0'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_NUM0);
    BUTTON_SetFont(hItem, GUI_FONT_20_1);
    BUTTON_SetText(hItem, "0");
    //
    // Initialization of 'Button_Dot'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_DOT);
    BUTTON_SetFont(hItem, GUI_FONT_20_1);
    BUTTON_SetText(hItem, ".");
    //
    // Initialization of 'Button_Back'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_BACK);
    BUTTON_SetFont(hItem, GUI_FONT_20_1);
    BUTTON_SetText(hItem, "<--");
    //
    // Initialization of 'Button_Clear'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_CLR);
    BUTTON_SetFont(hItem, GUI_FONT_20_1);
    BUTTON_SetText(hItem, "CLR");
    //
    // Initialization of 'Button_OK'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_OK);
    BUTTON_SetFont(hItem, GUI_FONT_20_1);
    BUTTON_SetText(hItem, "OK");
    // USER START (Optionally insert additional code for further widget initialization)
    // USER END
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {
    case ID_BUTTON_ESC: // Notifications sent by 'Button_Escape'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        GUI_EndDialog(pMsg->hWin, 0);
		priceStatus = curPrice > 0 ? STA_SET : STA_NOTSET;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_0: // Notifications sent by 'Edit_Textbox'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_NUM1: // Notifications sent by 'Button_Num0'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        EditAddKey('1');
        ShowInputPrice(hEdit);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_NUM4: // Notifications sent by 'Button_Num4'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        EditAddKey('4');
        ShowInputPrice(hEdit);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_NUM7: // Notifications sent by 'Button_Num8'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        EditAddKey('7');
        ShowInputPrice(hEdit);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_NUM2: // Notifications sent by 'Button_Num1'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        EditAddKey('2');
        ShowInputPrice(hEdit);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_NUM5: // Notifications sent by 'Button_Num5'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        EditAddKey('5');
        ShowInputPrice(hEdit);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_NUM8: // Notifications sent by 'Button_Num9'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        EditAddKey('8');
        ShowInputPrice(hEdit);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_NUM3: // Notifications sent by 'Button_Num2'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        EditAddKey('3');
        ShowInputPrice(hEdit);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_NUM6: // Notifications sent by 'Button_Num6'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        EditAddKey('6');
        ShowInputPrice(hEdit);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_NUM9: // Notifications sent by 'Button_Dot'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        EditAddKey('9');
        ShowInputPrice(hEdit);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_NUM0: // Notifications sent by 'Button_Num3'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        EditAddKey('0');
        ShowInputPrice(hEdit);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_DOT: // Notifications sent by 'Button_Num7'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        EditAddKey('.');
        ShowInputPrice(hEdit);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_BACK: // Notifications sent by 'Button_Back'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        EditDelKey();
        ShowInputPrice(hEdit);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_CLR: // Notifications sent by 'Button_Clear'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        InputInit();
        ShowInputPrice(hEdit);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_OK: // Notifications sent by 'Button_OK'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        StringToDouble();
        priceStatus = STA_SET;
        GUI_EndDialog(pMsg->hWin, 1);
        UIDisplayValue();
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    // USER START (Optionally insert additional code for further Ids)
    // USER END
    }
    break;
  // USER START (Optionally insert additional message handling)
  // USER END
  default:
    WM_DefaultProc(pMsg);
    break;
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       CreateFramewin
*/
WM_HWIN CreateFrameNumpad(GUI_HWIN hParent);
WM_HWIN CreateFrameNumpad(GUI_HWIN hParent) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, hParent, 0, 0);
  WM_MakeModal(hWin);

  InputInit();
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
