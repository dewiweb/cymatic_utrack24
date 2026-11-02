// rea decompile_all
// name: FUN_00497ec0
// address: 0x497ec0
// body: available
// range: 0x497ec0-0x497ff1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00497ec0(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  char cVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007027cc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar2 = FUN_00686f90(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if ((cVar2 != '\0') && (DAT_00c8a678 == 0)) {
    cVar2 = *(char *)(in_ECX + 0xc9) == '\0';
    local_8 = 0;
    if (DAT_00c8a67c == 0) {
      operator_new(0xd0);
      DAT_00c8a67c = FUN_006cb960();
    }
    uVar1 = *(uint *)(DAT_00c8a67c + 0x50);
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      local_8 = 1;
      if (DAT_00c8a67c == 0) {
        operator_new(0xd0);
        DAT_00c8a67c = FUN_006cb960();
      }
      if (uVar1 < *(uint *)(DAT_00c8a67c + 0x50)) {
        piVar4 = *(int **)(*(int *)(DAT_00c8a67c + 0x48) + uVar1 * 4);
      }
      else {
        piVar4 = (int *)0x0;
      }
      local_8 = 0xffffffff;
      if ((undefined **)*piVar4 == juce::HWNDComponentPeer::vftable) {
        iVar3 = FUN_004a98b0();
        cVar5 = iVar3 == piVar4[0xe];
      }
      else {
        cVar5 = (*(code *)((undefined **)*piVar4)[0x18])();
      }
      if (cVar5 != '\0') {
        *(undefined1 *)(in_ECX + 0xc9) = 1;
        ExceptionList = local_10;
        return '\x01';
      }
    }
  }
  ExceptionList = local_10;
  return cVar2;
}

