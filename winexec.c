#include <stdio.h>
#include <Windows.h>
#include <memoryapi.h>
#include <Winbase.h>

/* Charles Truscott, github.com/r0ss1n1 */
/* Visual Studio 2019 Enterprise, Windows 10 */
/* Compiled with cl.exe not masm.exe */
/* Byron Bay, NSW 2481 */
/* Please hire me, OSCP certified */
/* Shout out to ASIO */
/* Immunity Debugger x86 */
/* Thanks Mati Aharoni, c0relanc0d3r */
/* Following along from my OSCP (certified), OSCE, OSEE (self-study) and ROP tutorials */

char command[] = "C:\\Windows\\System32\\calc.exe";
int main(void) {
	__asm {
		int 3
		push offset command
		push 0
		pop ebx
		push WinExec
		pop ebp
		push esp
		pop edi
		call WinExec

	}
	return 0;
}