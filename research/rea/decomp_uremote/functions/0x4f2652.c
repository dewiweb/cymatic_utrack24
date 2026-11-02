// rea decompile_all
// name: FUN_004f2652
// address: 0x4f2652
// body: available
// range: 0x4f2652-0x4f273b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f2652(void)

{
  uint uVar1;
  HRGN hRgn;
  HDC pHVar2;
  undefined4 uVar3;
  int unaff_ESI;
  undefined1 auStack_70 [4];
  int local_6c;
  undefined1 *local_68;
  undefined1 local_64;
  tagPAINTSTRUCT local_60;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de384;
  local_14 = ExceptionList;
  local_1c = DAT_00955fd4 ^ (uint)auStack_70;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xffffff88;
  ExceptionList = &local_14;
  hRgn = CreateRectRgn(0,0,0,0);
  local_6c = GetUpdateRgn(*(HWND *)(unaff_ESI + 0x38),hRgn,0);
  pHVar2 = BeginPaint(*(HWND *)(unaff_ESI + 0x38),&local_60);
  if (DAT_0095dbe4 == '\0') {
    local_68 = &DAT_0095dbe4;
    local_64 = 0;
    DAT_0095dbe4 = 1;
    local_c = 0;
    if (*(char *)(unaff_ESI + 0x34) == '\0') {
      FUN_004f273c(pHVar2,hRgn,local_6c,&local_60);
    }
    else {
      (**(code **)(**(int **)(unaff_ESI + 4) + 0x98))(0,uVar1);
    }
    DAT_0095dbe4 = '\0';
  }
  DeleteObject(hRgn);
  EndPaint(*(HWND *)(unaff_ESI + 0x38),&local_60);
  __fpreset();
  uVar3 = FUN_00467ec4();
  *(undefined4 *)(unaff_ESI + 0x48) = uVar3;
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_70);
  return;
}

