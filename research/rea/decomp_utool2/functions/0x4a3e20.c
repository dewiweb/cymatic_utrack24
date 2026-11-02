// rea decompile_all
// name: FUN_004a3e20
// address: 0x4a3e20
// body: available
// range: 0x4a3e20-0x4a3efa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a3e20(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  int local_28 [4];
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ff056;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar6 = (int *)0x0;
  if (*(char *)(*(int *)(in_ECX + 0x7c) + 0xb0) != '\0') {
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    local_18 = (int *)FUN_004a37e0(*(undefined4 *)(param_1 + 0xc),local_28);
    iVar1 = local_28[0];
    if ((local_18 != (int *)0x0) && (*(int *)(param_1 + 8) < local_28[0])) {
      local_14 = *(int *)(in_ECX + 0x7c);
      local_8 = 0;
      iVar5 = *(int *)(local_14 + 0xa8);
      if (iVar5 < 0) {
        iVar5 = FUN_006e9580();
        iVar5 = (**(code **)(*(int *)(iVar5 + 0x14) + 0xc))(local_14);
      }
      piVar2 = local_18;
      local_8 = 0xffffffff;
      if (iVar1 - iVar5 <= *(int *)(param_1 + 8)) {
        cVar3 = (**(code **)(*local_18 + 4))();
        piVar6 = piVar2;
        if (cVar3 == '\0') {
          piVar6 = (int *)0x0;
        }
      }
    }
  }
  if (*(int **)(in_ECX + 0x8c) != piVar6) {
    FUN_004a3f00(uVar4);
    *(int **)(in_ECX + 0x8c) = piVar6;
    FUN_004a3f00();
  }
  ExceptionList = local_10;
  return;
}

