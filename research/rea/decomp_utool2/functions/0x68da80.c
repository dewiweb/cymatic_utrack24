// rea decompile_all
// name: FUN_0068da80
// address: 0x68da80
// body: available
// range: 0x68da80-0x68db03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0068da80(void)

{
  int *piVar1;
  uint uVar2;
  uint3 uVar3;
  int in_ECX;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0072161d;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_00c8a67c == 0) {
    operator_new(0xd0);
    DAT_00c8a67c = FUN_006cb960(uVar2);
  }
  piVar4 = *(int **)(DAT_00c8a67c + 0x48);
  piVar1 = piVar4 + *(int *)(DAT_00c8a67c + 0x50);
  uVar3 = (uint3)((uint)piVar1 >> 8);
  while( true ) {
    if (piVar4 == piVar1) {
      ExceptionList = local_10;
      return (uint)uVar3 << 8;
    }
    if (in_ECX == *piVar4) break;
    piVar4 = piVar4 + 1;
  }
  ExceptionList = local_10;
  return CONCAT31(uVar3,1);
}

