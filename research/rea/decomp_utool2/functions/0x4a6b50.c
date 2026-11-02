// rea decompile_all
// name: FUN_004a6b50
// address: 0x4a6b50
// body: available
// range: 0x4a6b50-0x4a6d7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a6b50(void)

{
  int iVar1;
  HMODULE hModule;
  ATOM AVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  int *piVar5;
  longlong lVar6;
  WNDCLASSEXW local_868;
  undefined4 *local_830;
  int local_82c;
  WORD local_828 [2];
  undefined4 local_824;
  undefined4 local_820;
  ushort local_81c;
  WCHAR local_814 [1024];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703921;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_830 = in_ECX;
  FUN_0063e930(local_14);
  local_8 = 0;
  *in_ECX = juce::HWNDComponentPeer::WindowClassHolder::vftable;
  FUN_0045c990("JUCE_");
  local_8._0_1_ = 1;
  FUN_004d0a43(&local_824);
  lVar6 = __allmul(local_824,local_820,1000,0);
  uVar3 = FUN_0062de00(lVar6 + (ulonglong)local_81c);
  local_8._0_1_ = 2;
  FUN_00636ec0(uVar3);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar5 = local_830 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (DAT_00c8a64c == (HMODULE)0x0) {
    DAT_00c8a64c = GetModuleHandleA((LPCSTR)0x0);
  }
  hModule = DAT_00c8a64c;
  _memset(local_814,0,0x800);
  GetModuleFileNameW(hModule,local_814,0x400);
  local_828[0] = 0;
  local_828[1] = 0;
  _memset(&local_868.style,0,0x2c);
  local_868.cbSize = 0x30;
  local_868.style = 0x20;
  local_868.lpfnWndProc = FUN_004a9850;
  puVar4 = (undefined4 *)FUN_00458890();
  local_868.lpszClassName = (LPCWSTR)*puVar4;
  local_868.cbWndExtra = 0x20;
  local_868.hInstance = hModule;
  local_868.hIcon = ExtractAssociatedIconW(hModule,local_814,local_828);
  local_828[0] = 1;
  local_828[1] = 0;
  local_868.hIconSm = ExtractAssociatedIconW(hModule,local_814,local_828);
  AVar2 = RegisterClassExW(&local_868);
  piVar5 = (int *)(local_82c + -8);
  *(ATOM *)(in_ECX + 1) = AVar2;
  DAT_00c8a65c = FUN_004a7030;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

