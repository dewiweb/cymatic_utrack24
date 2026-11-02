// rea decompile_all
// name: FUN_00457490
// address: 0x457490
// body: available
// range: 0x457490-0x4575e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00457490(LPVOID param_1,DWORD param_2)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  int in_ECX;
  _OVERLAPPED local_28;
  HANDLE local_14;
  undefined4 local_10;
  DWORD local_c [2];
  
  cVar1 = FUN_004572c0(0xffffffff);
  do {
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    if ((int)param_2 < 1) {
      return 0;
    }
    local_28.hEvent = (HANDLE)0x0;
    local_28.Internal = 0;
    local_28.InternalHigh = 0;
    local_28.u.s.Offset = 0;
    local_28.u.s.OffsetHigh = 0;
    local_28.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    BVar2 = ReadFile(*(HANDLE *)(in_ECX + 4),param_1,param_2,local_c,&local_28);
    if (BVar2 != 0) {
LAB_004575c5:
      CloseHandle(local_28.hEvent);
      return local_c[0];
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x3e5) {
      if (*(char *)(in_ECX + 0xe) != '\0') {
LAB_004575a1:
        CloseHandle(local_28.hEvent);
        return 0xffffffff;
      }
      local_14 = local_28.hEvent;
      local_10 = *(undefined4 *)(in_ECX + 8);
      DVar3 = WaitForMultipleObjects(2,&local_14,0,0xffffffff);
      if (DVar3 != 0) {
        CancelIo(*(HANDLE *)(in_ECX + 4));
        goto LAB_004575a1;
      }
      BVar2 = GetOverlappedResult(*(HANDLE *)(in_ECX + 4),&local_28,local_c,0);
      if (BVar2 != 0) goto LAB_004575c5;
    }
    if ((*(char *)(in_ECX + 0xd) == '\0') ||
       ((DVar3 = GetLastError(), DVar3 != 0x6d && (DVar3 = GetLastError(), DVar3 != 0xe9)))) {
      CloseHandle(local_28.hEvent);
      return 0xffffffff;
    }
    if ((*(char *)(in_ECX + 0xd) != '\0') && (*(char *)(in_ECX + 0xc) != '\0')) {
      DisconnectNamedPipe(*(HANDLE *)(in_ECX + 4));
      *(undefined1 *)(in_ECX + 0xc) = 0;
    }
    CloseHandle(local_28.hEvent);
    cVar1 = FUN_004572c0(0xffffffff);
  } while( true );
}

