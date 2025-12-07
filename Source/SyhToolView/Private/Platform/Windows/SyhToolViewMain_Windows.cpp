#include "SyhToolView.h"


// HINSTANCE HInstance		当前窗口实例的句柄
// HINSTANCE InPrevInstance 无用，兼容16位系统
// LPSTR					命令行参数，可以通过GetCommandLineW获取
// int32 nCmdShow			标志，初始显示方式
int WINAPI WinMain(
	_In_ HINSTANCE HInstance, 
	_In_opt_ HINSTANCE InPrevInstance,
	_In_ LPSTR,
	_In_ int nCmdShow)
{
	return RunSyhToolView(GetCommandLineW());
}