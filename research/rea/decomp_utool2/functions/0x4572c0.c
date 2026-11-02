// rea decompile_all
// name: FUN_004572c0
// address: 0x4572c0
// body: available
// range: 0x4572c0-0x45746f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004572c0(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  HANDLE pvVar4;
  BOOL BVar5;
  DWORD DVar6;
  int in_ECX;
  _OVERLAPPED local_54;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00700488;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*(char *)(in_ECX + 0xd) == '\0') {
    if (*(int *)(in_ECX + 4) == -1) {
      puStack_20 = &stack0xfffffffc;
      FUN_0061e1c0();
      FUN_00633420();
      FUN_0061d4e0();
      local_28 = in_ECX + 0xf;
      while( true ) {
        EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xf));
        local_14 = 0;
        if (*(int *)(in_ECX + 4) == -1) {
          puVar3 = (undefined4 *)FUN_00458890();
          pvVar4 = CreateFileW((LPCWSTR)*puVar3,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000000
                               ,(HANDLE)0x0);
          *(HANDLE *)(in_ECX + 4) = pvVar4;
        }
        local_14 = 0xffffffff;
        LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xf));
        iVar1 = local_34;
        if (*(int *)(in_ECX + 4) != -1) goto LAB_0045730d;
        if (*(char *)(in_ECX + 0xe) != '\0') break;
        if (-1 < param_1) {
          local_24 = local_38;
          FUN_00633420();
          if ((iVar1 < local_3c) || ((iVar1 <= local_3c && (local_24 < local_40)))) break;
        }
        if (DAT_00c8a8f0 == (HANDLE)0x0) {
          Sleep(1);
        }
        else {
          WaitForSingleObject(DAT_00c8a8f0,1);
        }
      }
      uVar2 = 0;
    }
    else {
LAB_0045730d:
      uVar2 = 1;
    }
  }
  else {
    if (*(char *)(in_ECX + 0xc) == '\0') {
      local_54.hEvent = (HANDLE)0x0;
      local_54.Internal = 0;
      local_54.InternalHigh = 0;
      local_54.u.s.Offset = 0;
      local_54.u.s.OffsetHigh = 0;
      local_54.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
      BVar5 = ConnectNamedPipe(*(HANDLE *)(in_ECX + 4),&local_54);
      if (BVar5 == 0) {
        DVar6 = GetLastError();
        if (DVar6 == 0x217) {
          *(undefined1 *)(in_ECX + 0xc) = 1;
        }
        else if ((DVar6 == 0x218) || (DVar6 == 0x3e5)) {
          uVar2 = FUN_004576e0(&local_54,param_1);
          *(undefined1 *)(in_ECX + 0xc) = uVar2;
        }
      }
      CloseHandle(local_54.hEvent);
    }
    uVar2 = *(undefined1 *)(in_ECX + 0xc);
  }
  ExceptionList = local_1c;
  return uVar2;
}

