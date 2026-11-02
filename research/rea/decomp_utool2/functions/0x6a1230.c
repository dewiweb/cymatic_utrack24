// rea decompile_all
// name: FUN_006a1230
// address: 0x6a1230
// body: available
// range: 0x6a1230-0x6a136c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a1230(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00722c63;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006cb4b0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  FUN_004b0b90(0,local_1c,local_18);
  iVar1 = FUN_006a1740(local_24,local_20);
  if (*(int *)(in_ECX + 0xac) != iVar1) {
    FUN_006a16e0(*(int *)(in_ECX + 0xac));
    *(int *)(in_ECX + 0xac) = iVar1;
    FUN_006a16e0(iVar1);
  }
  iVar1 = *(int *)(in_ECX + 0xb0);
  if ((iVar1 == *(int *)(in_ECX + 0xb4)) && (iVar1 != -1)) {
    if (-1 < iVar1) {
      FUN_006a0940(0);
    }
    FUN_006a16e0(*(undefined4 *)(in_ECX + 0xb0));
    *(undefined4 *)(in_ECX + 0xb0) = 0xffffffff;
    FUN_006a16e0(0xffffffff);
    iVar1 = DAT_00c8a67c;
    if (DAT_00c8a67c == 0) {
      operator_new(0xd0);
      local_8 = iVar1;
      DAT_00c8a67c = FUN_006cb960();
      local_8 = 0xffffffff;
    }
    FUN_00415ff0(in_ECX);
    FUN_006cb130();
  }
  if ((param_1 != 0) && (*(int **)(in_ECX + 0x88) != (int *)0x0)) {
    (**(code **)(**(int **)(in_ECX + 0x88) + 0x10))(param_1,*(undefined4 *)(in_ECX + 0xb4));
  }
  ExceptionList = local_10;
  return;
}

