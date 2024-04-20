#include <windows.h>
#include <bits/stdc++.h>
#define MFISH   0000
#define PICK    0001
#define INNUM   0002
#define ALLNUM  0003
#define GD      0004
#define WHITEB  0005
#define CHTH    0006
#define CHGN    0007
#define ALLPICK 0008
#define NUMADD  0010
#define INPUT   0011
#define ADD     0012
char* numm="";
void printlog(char * L) {
	OutputDebugStringA(L);
}
/* This is where all the input to the window goes to */
LRESULT CALLBACK WndProc(HWND hWnd, UINT Message, WPARAM wParam, LPARAM lParam) {
	HWND     hCtrl;
	MSG      msg;
	WNDCLASS wndclass;
	switch(Message) {
		case WM_CREATE: {
			CreateWindow(TEXT("BUTTON"), TEXT(""), WS_CHILD|WS_VISIBLE|BS_GROUPBOX, 5, 0, 300, 200, hWnd, (HMENU)MFISH, NULL, NULL);
			CreateWindow(TEXT("STATIC"), TEXT("快速点击："), WS_CHILD|WS_VISIBLE, 20, 25, 90, 20, hWnd, (HMENU)PICK, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("功德"), WS_CHILD|WS_VISIBLE, 20, 50, 100, 100, hWnd, (HMENU)GD, NULL, NULL);
			CreateWindow(TEXT("STATIC"), TEXT(" "), WS_CHILD|WS_VISIBLE, 130, 50, 9, 20, hWnd, (HMENU)ADD, NULL, NULL);
			CreateWindow(TEXT("STATIC"), TEXT(" "), WS_CHILD|WS_VISIBLE, 139, 50, 80, 20, hWnd, (HMENU)WHITEB, NULL, NULL);
			CreateWindow(TEXT("STATIC"), TEXT("1"), WS_CHILD|WS_VISIBLE, 0, 0, 0, 0, hWnd, (HMENU)NUMADD, NULL, NULL);
			CreateWindow(TEXT("STATIC"), TEXT("数量/次："), WS_CHILD|WS_VISIBLE, 130, 80, 90, 20, hWnd, (HMENU)WHITEB, NULL, NULL);
			CreateWindowEx(WS_EX_CLIENTEDGE, TEXT("EDIT"), NULL, WS_CHILD|WS_VISIBLE|WS_BORDER, 190, 80, 60, 20, hWnd, (HMENU)INNUM, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("Input"), WS_CHILD|WS_VISIBLE, 250, 80, 40, 20, hWnd, (HMENU)INPUT, NULL, NULL);
			CreateWindow(TEXT("STATIC"), TEXT("选择内容:"), WS_CHILD|WS_VISIBLE, 20, 160, 75, 22, hWnd, (HMENU)CHTH, NULL, NULL);
			hCtrl=CreateWindow(TEXT("COMBOBOX"), NULL, WS_CHILD|WS_VISIBLE|WS_VSCROLL|CBS_AUTOHSCROLL|CBS_DROPDOWNLIST, 90, 160, 150, 90, hWnd, (HMENU)CHGN, NULL, NULL);
			SendMessage(hCtrl, CB_ADDSTRING, 0, (LPARAM)TEXT("功德"));
			SendMessage(hCtrl, CB_ADDSTRING, 0, (LPARAM)TEXT("情商"));
			SendMessage(hCtrl, CB_ADDSTRING, 0, (LPARAM)TEXT("智商"));
			SendMessage(hCtrl, CB_ADDSTRING, 0, (LPARAM)TEXT("体力"));
			SendMessage(hCtrl, CB_ADDSTRING, 0, (LPARAM)TEXT("武力"));
			SendMessage(hCtrl, CB_ADDSTRING, 0, (LPARAM)TEXT("人民币"));
			break;
		}
		case WM_COMMAND: {
			int wmId = LOWORD(wParam);
			HWND hwndTmp,hwndTmp1,hwndTmp2;
			switch (wmId) {
				case CHGN: {
					hwndTmp1 = GetDlgItem(hWnd, CHGN);
					hwndTmp2 = GetDlgItem(hWnd, GD);
					char ch1[2048];
					GetWindowText(hwndTmp1,ch1,2048);
					printlog(ch1);
					SetWindowText(hwndTmp2, TEXT(ch1));
					break;
				}
				case  GD : {
					hwndTmp1 = GetDlgItem(hWnd, NUMADD);
					hwndTmp2 = GetDlgItem(hWnd, WHITEB);
					hwndTmp = GetDlgItem(hWnd, ADD);
					char ch1[2048];
					GetWindowText(hwndTmp1,ch1,2048);
					SetWindowText(hwndTmp2,ch1);
					SetWindowText(hwndTmp,"+");
					Sleep(100);
					hwndTmp2 = GetDlgItem(hWnd, WHITEB);
					SetWindowText(hwndTmp2," ");
					SetWindowText(hwndTmp," ");
					Sleep(100);
					SetWindowText(GetDlgItem(hWnd, ALLNUM)," ");
					break;
				}
				case  INPUT:{
					hwndTmp1=GetDlgItem(hWnd,NUMADD);
					hwndTmp2=GetDlgItem(hWnd,INNUM);
					char ch1[2048];
					GetWindowText(hwndTmp2,ch1,2048);
					SetWindowText(hwndTmp1,ch1);
					break;
				} 
			}
		}
//
		return 0;
		/* Upon destruction, tell the main thread to stop */
		case WM_DESTROY: {
			PostQuitMessage(0);
			break;
		}

		/* All other messages (a lot of them) are processed using default procedures */
		default:
			return DefWindowProc(hWnd, Message, wParam, lParam);
	}
	return 0;
}

/* The 'main' function of Win32 GUI programs: this is where execution starts */
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	WNDCLASSEX wc; /* A properties struct of our window */
	HWND hwnd; /* A 'HANDLE', hence the H, or a pointer to our window */
	MSG msg; /* A temporary location for all messages */

	/* zero out the struct and set the stuff we want to modify */
	memset(&wc,0,sizeof(wc));
	wc.cbSize		 = sizeof(WNDCLASSEX);
	wc.lpfnWndProc	 = WndProc; /* This is where we will send messages to */
	wc.hInstance	 = hInstance;
	wc.hCursor		 = LoadCursor(NULL, IDC_ARROW);

	/* White, COLOR_WINDOW is just a #define for a system color, try Ctrl+Clicking it */
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wc.lpszClassName = "电子木鱼";
	wc.hIcon		 = LoadIcon(NULL, IDI_APPLICATION); /* Load a standard icon */
	wc.hIconSm		 = LoadIcon(NULL, IDI_APPLICATION); /* use the name "A" to use the project icon */

	if(!RegisterClassEx(&wc)) {
		MessageBox(NULL, "电子木鱼","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,"电子木鱼","电子木鱼",WS_VISIBLE|WS_OVERLAPPEDWINDOW,
	                      CW_USEDEFAULT, /* x */
	                      CW_USEDEFAULT, /* y */
	                      320, /* width */
	                      235, /* height */
	                      NULL,NULL,hInstance,NULL);

	if(hwnd == NULL) {
		MessageBox(NULL, "电子木鱼","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	/*
		This is the heart of our program where all input is processed and
		sent to WndProc. Note that GetMessage blocks code flow until it receives something, so
		this loop will not produce unreasonably high CPU usage
	*/
	while(GetMessage(&msg, NULL, 0, 0) > 0) { /* If no error is received... */
		TranslateMessage(&msg); /* Translate key codes to chars if present */
		DispatchMessage(&msg); /* Send it to WndProc */
	}
	return msg.wParam;
}
