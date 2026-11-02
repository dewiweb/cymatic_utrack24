// rea decompile_all
// name: FUN_00474b70
// address: 0x474b70
// body: available
// range: 0x474b70-0x474c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_00474b70(void)

{
  HWND hWnd;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 in_ECX;
  ULONG_PTR local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined4 local_b0;
  void *local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined1 local_a0 [11];
  char local_95;
  void *local_94;
  undefined4 local_8c;
  undefined4 local_88;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&local_88;
  local_88 = 0x28;
  local_ac = (void *)0x0;
  local_a8 = 0;
  local_a4 = 0;
  local_8c = 0;
  EnumWindows((WNDENUMPROC)&LAB_00474a4c,(LPARAM)&local_ac);
  FUN_004652e4(in_ECX);
  local_8c = CONCAT31(local_8c._1_3_,1);
  local_b8 = 0xc403;
  iVar1 = thunk_FUN_0046087d();
  local_b4 = iVar1 * 4 + 4;
  puVar2 = (undefined4 *)FUN_00466b09(local_a0);
  local_b0 = *puVar2;
  iVar1 = local_a4;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    hWnd = *(HWND *)((int)local_ac + iVar1 * 4);
    local_88 = local_88 & 0xffff0000;
    _memset((void *)((int)&local_88 + 2),0,0x7e);
    GetWindowTextW(hWnd,(LPWSTR)&local_88,0x3f);
    uVar3 = FUN_004653b1();
    local_95 = FUN_00465982(uVar3);
    FUN_004652d6();
    if (local_95 != '\0') {
      SendMessageTimeoutW(hWnd,0x4a,DAT_0095d66c,(LPARAM)&local_b8,3,8000,&local_bc);
    }
  }
  FUN_004652d6();
  local_8c = 0xffffffff;
  _free(local_ac);
  ExceptionList = local_94;
  __security_check_cookie(local_8 ^ (uint)&local_88);
  return;
}

