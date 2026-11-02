// rea decompile_all
// name: FUN_00474868
// address: 0x474868
// body: available
// range: 0x474868-0x474922 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00474868(void)

{
  ATOM AVar1;
  undefined4 uVar2;
  HINSTANCE hInstance;
  HWND pHVar3;
  ATOM *unaff_ESI;
  undefined8 uVar4;
  WNDCLASSEXW local_4c;
  undefined1 local_18 [16];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x474874;
  FUN_0046537e(local_18);
  local_8 = 0;
  uVar4 = FUN_0046d498();
  uVar2 = FUN_004669a0(uVar4);
  local_8._0_1_ = 1;
  thunk_FUN_00465ac3(uVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004652d6();
  hInstance = (HINSTANCE)FUN_0046d650();
  _memset(&local_4c.style,0,0x2c);
  local_4c.cbSize = 0x30;
  local_4c.lpfnWndProc = FUN_0047498a;
  local_4c.cbWndExtra = 4;
  local_4c.hInstance = hInstance;
  local_4c.lpszClassName = (LPCWSTR)FUN_00466b89(local_18);
  AVar1 = RegisterClassExW(&local_4c);
  *unaff_ESI = AVar1;
  pHVar3 = CreateWindowExW(0,(LPCWSTR)(uint)AVar1,L"JUCEWindow",0,0,0,0,0,(HWND)0x0,(HMENU)0x0,
                           hInstance,(LPVOID)0x0);
  *(HWND *)(unaff_ESI + 2) = pHVar3;
  FUN_004652d6();
  return;
}

