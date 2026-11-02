// rea decompile_all
// name: FUN_004fd1ff
// address: 0x4fd1ff
// body: available
// range: 0x4fd1ff-0x4fd22c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fd1ff(void)

{
  int *in_EAX;
  HWND hWnd;
  int in_ECX;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  
  if (*(int **)(in_ECX + 4) != (int *)0x0) {
    cy = in_EAX[3];
    cx = in_EAX[2];
    Y = in_EAX[1];
    X = *in_EAX;
    uFlags = 0x214;
    hWndInsertAfter = (HWND)0x0;
    hWnd = (HWND)(**(code **)(**(int **)(in_ECX + 4) + 4))();
    SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
  }
  return;
}

