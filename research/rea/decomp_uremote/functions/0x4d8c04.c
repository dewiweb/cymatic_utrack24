// rea decompile_all
// name: FUN_004d8c04
// address: 0x4d8c04
// body: available
// range: 0x4d8c04-0x4d8c66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004d8c04(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_24 = 0x2c;
  local_28 = 0x4d8c17;
  iVar1 = FUN_005af82d();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_28 = 0;
    uStack_2c = 10;
    uStack_30 = local_24;
    local_24 = 2;
    FUN_0047620f(&uStack_30,0x3ecccccd);
    FUN_004a22e1();
    local_24 = 0x4d8c5d;
    uVar2 = FUN_004f063a();
  }
  return uVar2;
}

