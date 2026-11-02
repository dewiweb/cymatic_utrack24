// rea decompile_all
// name: FUN_004570a0
// address: 0x4570a0
// body: available
// range: 0x4570a0-0x45724a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004570a0(int *param_1,byte *param_2,byte *param_3,DWORD *param_4,undefined8 *param_5,
                 undefined8 *param_6,byte *param_7)

{
  int *_Memory;
  int iVar1;
  undefined4 *puVar2;
  HANDLE pvVar3;
  BOOL BVar4;
  int in_ECX;
  undefined8 uVar5;
  undefined1 auStack_27c [4];
  int local_278;
  int *local_274;
  byte *local_270;
  byte *local_26c;
  byte *local_268;
  _WIN32_FIND_DATAW local_260;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)auStack_27c;
  local_274 = param_1;
  local_270 = param_2;
  local_26c = param_3;
  local_268 = param_7;
  local_278 = in_ECX;
  if (*(HANDLE *)(in_ECX + 4) == (HANDLE)0xffffffff) {
    puVar2 = (undefined4 *)FUN_00458890();
    pvVar3 = FindFirstFileW((LPCWSTR)*puVar2,&local_260);
    *(HANDLE *)(local_278 + 4) = pvVar3;
    if (pvVar3 == (HANDLE)0xffffffff) {
      __security_check_cookie(local_c ^ (uint)auStack_27c);
      return;
    }
  }
  else {
    BVar4 = FindNextFileW(*(HANDLE *)(in_ECX + 4),&local_260);
    if (BVar4 == 0) {
      __security_check_cookie(local_c ^ (uint)auStack_27c);
      return;
    }
  }
  FUN_0045cae0(local_260.cFileName);
  iVar1 = *local_274;
  *local_274 = local_278;
  _Memory = (int *)(iVar1 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  if (local_270 != (byte *)0x0) {
    *local_270 = (byte)(local_260.dwFileAttributes >> 4) & 1;
  }
  if (local_26c != (byte *)0x0) {
    *local_26c = (byte)(local_260.dwFileAttributes >> 1) & 1;
  }
  if (local_268 != (byte *)0x0) {
    *local_268 = (byte)local_260.dwFileAttributes & 1;
  }
  if (param_4 != (DWORD *)0x0) {
    *param_4 = local_260.nFileSizeLow;
    param_4[1] = local_260.nFileSizeHigh;
  }
  if (param_5 != (undefined8 *)0x0) {
    uVar5 = __aulldiv(local_260.ftLastWriteTime.dwLowDateTime + 0x2ac18000,
                      local_260.ftLastWriteTime.dwHighDateTime + 0xfe624e21 +
                      (uint)(0xd53e7fff < local_260.ftLastWriteTime.dwLowDateTime),10000,0);
    *param_5 = uVar5;
  }
  if (param_6 != (undefined8 *)0x0) {
    uVar5 = __aulldiv(local_260.ftCreationTime.dwLowDateTime + 0x2ac18000,
                      local_260.ftCreationTime.dwHighDateTime + 0xfe624e21 +
                      (uint)(0xd53e7fff < local_260.ftCreationTime.dwLowDateTime),10000,0);
    *param_6 = uVar5;
  }
  __security_check_cookie(local_c ^ (uint)auStack_27c);
  return;
}

