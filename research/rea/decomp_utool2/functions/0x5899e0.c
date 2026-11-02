// rea decompile_all
// name: FUN_005899e0
// address: 0x5899e0
// body: available
// range: 0x5899e0-0x589a70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005899e0(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar3;
  LARGE_INTEGER local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007138fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
  local_1c._4_4_ = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  local_8 = 0;
  if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
    iVar2 = FUN_005891b0(in_ECX,extraout_ECX);
    QueryPerformanceCounter(&local_1c);
    bVar3 = CARRY4(DAT_00c8a908,local_1c.s.LowPart);
    iVar1 = DAT_00c8a90c + local_1c.s.HighPart;
    *(uint *)(iVar2 + 0x40) = DAT_00c8a908 + local_1c.s.LowPart;
    *(uint *)(iVar2 + 0x44) = iVar1 + (uint)bVar3;
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_10;
  return;
}

