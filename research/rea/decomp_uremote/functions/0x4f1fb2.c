// rea decompile_all
// name: FUN_004f1fb2
// address: 0x4f1fb2
// body: available
// range: 0x4f1fb2-0x4f2116 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_004f1fb2(void)

{
  ATOM AVar1;
  undefined4 uVar2;
  HMODULE hModule;
  undefined4 *unaff_ESI;
  undefined8 uVar3;
  WNDCLASSEXW local_854;
  WORD local_81c [2];
  undefined1 local_818 [4];
  WCHAR local_814;
  undefined1 local_812 [2058];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x844;
  local_8 = 0x4f1fc1;
  FUN_00473961(unaff_ESI);
  local_8 = 0;
  *unaff_ESI = juce::HWNDComponentPeer::WindowClassHolder::vftable;
  FUN_0046537e(local_818);
  local_8._0_1_ = 1;
  uVar3 = FUN_00467e7a();
  uVar2 = FUN_004669a0(uVar3);
  local_8._0_1_ = 2;
  thunk_FUN_00465ac3(uVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004652d6();
  hModule = (HMODULE)FUN_0046d650();
  local_814 = L'\0';
  _memset(local_812,0,0x7fe);
  GetModuleFileNameW(hModule,&local_814,0x400);
  local_81c[0] = 0;
  local_81c[1] = 0;
  _memset(&local_854.style,0,0x2c);
  local_854.cbSize = 0x30;
  local_854.style = 0x20;
  local_854.lpfnWndProc = FUN_004f3c94;
  local_854.lpszClassName = (LPCWSTR)FUN_00466b89(local_818);
  local_854.cbWndExtra = 0x20;
  local_854.hInstance = hModule;
  local_854.hIcon = ExtractAssociatedIconW(hModule,&local_814,local_81c);
  local_81c[0] = 1;
  local_81c[1] = 0;
  local_854.hIconSm = ExtractAssociatedIconW(hModule,&local_814,local_81c);
  AVar1 = RegisterClassExW(&local_854);
  *(ATOM *)(unaff_ESI + 1) = AVar1;
  DAT_0095d688 = &LAB_004f2168;
  FUN_004652d6();
  FUN_005b9f18();
  return;
}

