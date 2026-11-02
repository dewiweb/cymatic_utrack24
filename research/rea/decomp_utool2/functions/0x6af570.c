// rea decompile_all
// name: FUN_006af570
// address: 0x6af570
// body: available
// range: 0x6af570-0x6af698 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006af570(void)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  double dVar3;
  double dVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723796;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar2 = FUN_006e2bd0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (cVar2 == '\0') {
    FUN_0063eab0();
    ExceptionList = local_10;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  if (*(int *)(in_ECX + 8) == 0) {
    *(undefined4 *)(in_ECX + 4) = 0x28;
    *(undefined4 *)(in_ECX + 8) = 0x28;
    local_8 = 0;
    if (DAT_00c8a668 == 0) {
      operator_new(0x54);
      DAT_00c8a668 = FUN_004635f0();
    }
    FUN_00463c00();
    local_8 = 0xffffffff;
  }
  else {
    FUN_00463b90();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  iVar1 = *(int *)(in_ECX + 0x5c);
  if (iVar1 < *(int *)(in_ECX + 0x50)) {
    dVar4 = *(double *)(in_ECX + 0x30) - *(double *)(in_ECX + 0x28);
    dVar3 = *(double *)(in_ECX + 0x28) - dVar4;
    dVar4 = *(double *)(in_ECX + 0x30) - dVar4;
  }
  else {
    if (iVar1 <= *(int *)(in_ECX + 0x54) + *(int *)(in_ECX + 0x50)) {
      ExceptionList = local_10;
      return;
    }
    dVar3 = *(double *)(in_ECX + 0x30);
    dVar4 = (dVar3 - *(double *)(in_ECX + 0x28)) + dVar3;
  }
  if (dVar4 <= dVar3) {
    dVar4 = dVar3;
  }
  FUN_006b03b0(iVar1,dVar3,dVar4);
  ExceptionList = local_10;
  return;
}

