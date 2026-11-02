// rea decompile_all
// name: FUN_004dd5d1
// address: 0x4dd5d1
// body: available
// range: 0x4dd5d1-0x4dd6b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004dd5d1(void)

{
  int iVar1;
  undefined1 *puStack_4c;
  undefined1 local_38 [52];
  
  puStack_4c = local_38;
  FUN_004c2047();
  FUN_0047620f(&puStack_4c,0x3f000000);
  FUN_0047cda7();
  puStack_4c = (undefined1 *)0x1;
  puStack_4c = (undefined1 *)FUN_004f5c0c();
  FUN_0047d170();
  FUN_0047620f(&puStack_4c,0x3f19999a);
  FUN_0047cda7();
  puStack_4c = local_38;
  FUN_0047d170();
  FUN_0047620f(&puStack_4c,0x3f000000);
  FUN_0047cda7();
  puStack_4c = (undefined1 *)0x4dd681;
  iVar1 = FUN_004e7d66();
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    puStack_4c = (undefined1 *)0x1;
    FUN_004e7d90(iVar1);
    puStack_4c = (undefined1 *)FUN_004f5bd0();
    FUN_0047d170();
  }
  return;
}

