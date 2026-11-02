// rea decompile_all
// name: FUN_004575f0
// address: 0x4575f0
// body: available
// range: 0x4575f0-0x4576de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


DWORD FUN_004575f0(LPCVOID param_1,DWORD param_2,undefined4 param_3)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  int in_ECX;
  _OVERLAPPED local_18;
  
  cVar1 = FUN_004572c0(param_3);
  DVar3 = param_2;
  if (cVar1 != '\0') {
    if ((int)param_2 < 1) {
      return 0;
    }
    local_18.hEvent = (HANDLE)0x0;
    local_18.Internal = 0;
    local_18.InternalHigh = 0;
    local_18.u.s.Offset = 0;
    local_18.u.s.OffsetHigh = 0;
    local_18.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    BVar2 = WriteFile(*(HANDLE *)(in_ECX + 4),param_1,DVar3,&param_2,&local_18);
    if (BVar2 != 0) {
LAB_004576a1:
      DVar3 = param_2;
      CloseHandle(local_18.hEvent);
      return DVar3;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x3e5) {
      cVar1 = FUN_004576e0(&local_18,param_3);
      if (cVar1 == '\0') {
        CloseHandle(local_18.hEvent);
        return 0xffffffff;
      }
      BVar2 = GetOverlappedResult(*(HANDLE *)(in_ECX + 4),&local_18,&param_2,0);
      if (BVar2 != 0) goto LAB_004576a1;
      DVar3 = GetLastError();
      if ((DVar3 == 0x6d) && (*(char *)(in_ECX + 0xd) != '\0')) {
        FUN_00457470();
      }
    }
    CloseHandle(local_18.hEvent);
  }
  return 0xffffffff;
}

