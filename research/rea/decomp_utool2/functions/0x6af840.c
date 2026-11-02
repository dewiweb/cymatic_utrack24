// rea decompile_all
// name: FUN_006af840
// address: 0x6af840
// body: available
// range: 0x6af840-0x6afa45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006af840(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  double dVar5;
  double dVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007237b7;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined1 *)(in_ECX + 0xe5) = 0;
  if (*(char *)(in_ECX + 0xe4) == '\0') {
    iVar4 = *(int *)(param_1 + 8);
  }
  else {
    iVar4 = *(int *)(param_1 + 0xc);
  }
  dVar5 = *(double *)(in_ECX + 0xa0);
  *(int *)(in_ECX + 0xd4) = iVar4;
  *(int *)(in_ECX + 0xd0) = iVar4;
  *(double *)(in_ECX + 0xb8) = dVar5;
  if (iVar4 < *(int *)(in_ECX + 200)) {
    dVar6 = (*(double *)(in_ECX + 0xa8) - dVar5) * -1.0;
    dVar5 = dVar5 + dVar6;
    dVar6 = *(double *)(in_ECX + 0xa8) + dVar6;
    if (dVar6 <= dVar5) {
      dVar6 = dVar5;
    }
    FUN_006b03b0(iVar4,dVar5,dVar6);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
    if (*(int *)(in_ECX + 0x80) == 0) {
      *(undefined4 *)(in_ECX + 0x7c) = 400;
      *(undefined4 *)(in_ECX + 0x80) = 400;
      local_8 = 0;
      if (DAT_00c8a668 == 0) {
        operator_new(0x54);
        DAT_00c8a668 = FUN_004635f0();
      }
      FUN_00463c00();
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
      ExceptionList = local_10;
      return;
    }
    FUN_00463b90();
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
    ExceptionList = local_10;
    return;
  }
  if (*(int *)(in_ECX + 0xcc) + *(int *)(in_ECX + 200) <= iVar4) {
    dVar6 = *(double *)(in_ECX + 0xa8) - *(double *)(in_ECX + 0xa0);
    dVar5 = *(double *)(in_ECX + 0xa8) + dVar6;
    dVar6 = dVar6 + *(double *)(in_ECX + 0xa0);
    if (dVar5 <= dVar6) {
      dVar5 = dVar6;
    }
    FUN_006b03b0(iVar4,dVar6,dVar5);
    FUN_0063eb10();
    ExceptionList = local_10;
    return;
  }
  piVar3 = (int *)FUN_006e9580(uVar2);
  if (*(code **)(*piVar3 + 0x14) == FUN_006dd710) {
    iVar4 = *(int *)(in_ECX + 0x18);
    if (*(int *)(in_ECX + 0x1c) < *(int *)(in_ECX + 0x18)) {
      iVar4 = *(int *)(in_ECX + 0x1c);
    }
    iVar4 = iVar4 * 2;
  }
  else {
    iVar4 = (**(code **)(*piVar3 + 0x14))();
  }
  if ((iVar4 < *(int *)(in_ECX + 0xc4)) && (*(int *)(in_ECX + 0xcc) < *(int *)(in_ECX + 0xc4))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(in_ECX + 0xe5) = uVar1;
  ExceptionList = local_10;
  return;
}

