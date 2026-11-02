// rea decompile_all
// name: FUN_00423780
// address: 0x423780
// body: available
// range: 0x423780-0x423910 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00423780(void)

{
  int iVar1;
  HINSTANCE hInstance;
  ATOM AVar2;
  undefined4 uVar3;
  HWND hwnd;
  HRESULT HVar4;
  ATOM *in_ECX;
  int *piVar5;
  WNDCLASSEXA local_54;
  LARGE_INTEGER local_24;
  LPITEMIDLIST local_1c;
  int local_18;
  LPCSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fd500;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990("JUCE_",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  QueryPerformanceCounter(&local_24);
  uVar3 = FUN_0062de00(DAT_00c8a908 + local_24.s.LowPart,
                       DAT_00c8a90c + local_24.s.HighPart +
                       (uint)CARRY4(DAT_00c8a908,local_24.s.LowPart));
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00636ec0(uVar3);
  piVar5 = (int *)(local_18 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (DAT_00c8a64c == (HINSTANCE)0x0) {
    DAT_00c8a64c = GetModuleHandleA((LPCSTR)0x0);
  }
  hInstance = DAT_00c8a64c;
  _memset(&local_54.style,0,0x2c);
  local_54.lpszClassName = local_14;
  local_54.cbSize = 0x30;
  local_54.lpfnWndProc = FUN_005b7040;
  local_54.cbWndExtra = 4;
  local_54.hInstance = hInstance;
  AVar2 = RegisterClassExA(&local_54);
  *in_ECX = AVar2;
  hwnd = CreateWindowExA(0,(LPCSTR)(uint)AVar2,"PnPDetector",0,0,0,0,0,(HWND)0x0,(HMENU)0x0,
                         hInstance,(LPVOID)0x0);
  *(HWND *)(in_ECX + 2) = hwnd;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  HVar4 = SHGetSpecialFolderLocation(hwnd,0,&local_1c);
  if (HVar4 == 0) {
    local_24.s.LowPart = (DWORD)local_1c;
    local_24.s.HighPart = 1;
    uVar3 = Ordinal_2(*(undefined4 *)(in_ECX + 2),2,0x1e0,0x458,1,&local_24);
    *(undefined4 *)(in_ECX + 4) = uVar3;
  }
  piVar5 = (int *)(local_14 + -8);
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
  return;
}

