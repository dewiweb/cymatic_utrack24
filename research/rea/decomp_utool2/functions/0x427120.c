// rea decompile_all
// name: FUN_00427120
// address: 0x427120
// body: available
// range: 0x427120-0x427278 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00427120(LPCWSTR param_1,WNDPROC param_2)

{
  int iVar1;
  HINSTANCE hInstance;
  ATOM AVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  HWND pHVar5;
  ATOM *in_ECX;
  int *piVar6;
  WNDCLASSEXW local_54;
  LARGE_INTEGER local_24;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
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
  local_8._0_1_ = 1;
  FUN_00636ec0(uVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  piVar6 = (int *)(local_18 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (DAT_00c8a64c == (HINSTANCE)0x0) {
    DAT_00c8a64c = GetModuleHandleA((LPCSTR)0x0);
  }
  hInstance = DAT_00c8a64c;
  _memset(&local_54.style,0,0x2c);
  local_54.cbSize = 0x30;
  local_54.lpfnWndProc = param_2;
  local_54.cbWndExtra = 4;
  local_54.hInstance = hInstance;
  puVar4 = (undefined4 *)FUN_00458890();
  local_54.lpszClassName = (LPCWSTR)*puVar4;
  AVar2 = RegisterClassExW(&local_54);
  *in_ECX = AVar2;
  pHVar5 = CreateWindowExW(0,(LPCWSTR)(uint)AVar2,param_1,0,0,0,0,0,(HWND)0x0,(HMENU)0x0,hInstance,
                           (LPVOID)0x0);
  *(HWND *)(in_ECX + 2) = pHVar5;
  piVar6 = (int *)(local_14 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  ExceptionList = local_10;
  return;
}

