// rea decompile_all
// name: FUN_1009c992
// address: 0x1009c992
// body: available
// range: 0x1009c992-0x1009caa4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1009c992(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  if ((double)CONCAT44(in_stack_00000018,in_stack_00000014) == 0.0) {
    uVar5 = FUN_100f8696();
    uVar4 = (undefined4)(uVar5 >> 0x20);
    uVar1 = (uint)uVar5 & 0xff;
    uVar3 = uVar1;
    uVar2 = uVar1;
  }
  else {
    uVar5 = FUN_1009c7cf();
    uVar2 = (uint)uVar5 & 0xff;
    uVar5 = FUN_1009c7cf();
    uVar3 = (uint)uVar5 & 0xff;
    uVar5 = FUN_1009c7cf();
    uVar4 = (undefined4)(uVar5 >> 0x20);
    uVar1 = (uint)uVar5 & 0xff;
  }
  return CONCAT44(uVar4,(uVar1 << 8 | uVar3) << 8 | uVar2);
}

