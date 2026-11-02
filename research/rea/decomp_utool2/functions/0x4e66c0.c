// rea decompile_all
// name: FUN_004e66c0
// address: 0x4e66c0
// body: available
// range: 0x4e66c0-0x4e6771 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e66c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00704816;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 4) + 8))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  iVar2 = *(int *)(in_ECX + 0xfc);
  local_8 = 0;
  if ((*(int *)(in_ECX + 0x24) != 0) || (iVar2 != *(int *)(in_ECX + 0x20))) {
    uVar4 = iVar2 * 4 + 0x13U & 0xfffffff0;
    iVar1 = uVar4 + 0x20;
    *(int *)(in_ECX + 0x28) = iVar1;
    FUN_00403500(iVar1,CONCAT31((int3)((uint)iVar2 >> 8),*(char *)(in_ECX + 0xb4) != '\0'));
    iVar1 = *(int *)(in_ECX + 0x30);
    *(int *)(in_ECX + 0x2c) = iVar1;
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        *(uint *)(*(int *)(in_ECX + 0x2c) + iVar3 * 4) = iVar1 + uVar4;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x2c) + iVar2 * 4) = 0;
    *(undefined4 *)(in_ECX + 0x24) = 0;
    *(int *)(in_ECX + 0x20) = iVar2;
  }
  ExceptionList = local_10;
  return;
}

