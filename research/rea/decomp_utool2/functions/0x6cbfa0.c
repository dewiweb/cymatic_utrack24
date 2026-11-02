// rea decompile_all
// name: FUN_006cbfa0
// address: 0x6cbfa0
// body: available
// range: 0x6cbfa0-0x6cc054 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_006cbfa0(void)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007264dd;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_00c8a67c == 0) {
    operator_new(0xd0);
    local_8 = 0;
    DAT_00c8a67c = FUN_006cb960(uVar2);
  }
  piVar3 = *(int **)(*(int *)(DAT_00c8a67c + 0x20) + 0x20);
  piVar1 = piVar3 + *(int *)(*(int *)(DAT_00c8a67c + 0x20) + 0x28);
  while( true ) {
    if (piVar3 == piVar1) {
      ExceptionList = local_10;
      return (uint)piVar3 & 0xffffff00;
    }
    if (*(int *)(*piVar3 + 0x2c) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(*piVar3 + 0x2c) + 8);
    }
    if ((iVar4 == in_ECX) &&
       ((*(char *)(*piVar3 + 0xc) != '\0' || ((*(byte *)(*piVar3 + 0x20) & 0x70) != 0)))) break;
    piVar3 = piVar3 + 1;
  }
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)piVar3 >> 8),1);
}

