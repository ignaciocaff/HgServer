// winmain.h

//void OnBotAccept();
void PutXSocketLogList(char * cMsg);
void PutXSocketLogFileList(char * cMsg);
BOOL InitApplication( HINSTANCE hInstance);
BOOL InitInstance( HINSTANCE hInstance, int nCmdShow );
LRESULT CALLBACK WndProc( HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam );
void OnAccept();
void PutLogList(char * cMsg);
void OnKeyUp(WPARAM wParam, LPARAM lParam);
void UpdateScreen();
int  EventLoop();
void OnPaint();
void OnDestroy();
void Initialize();
void TextOut2();
void CALLBACK _TimerFunc(UINT wID, UINT wUser, DWORD dwUSer, DWORD dw1, DWORD dw2);
MMRESULT _StartTimer(DWORD dwTime);
void _StopTimer(MMRESULT timerid);

//void PutLogList(char * cMsg, BYTE MsgLvl = NULL, BOOL PutOnFile = FALSE, char *FileName = NULL);
void SafeCopy(char *c1, char *c2, DWORD lenght);
bool IsSame(char *c1, char *c2);
BYTE bGetOffsetValue(char * cp, DWORD offset);
WORD wGetOffsetValue(char * cp, DWORD offset);
DWORD dwGetOffsetValue(char * cp, DWORD offset);
void PutOffsetValue(char * cp, DWORD offset, BYTE size, int value);

