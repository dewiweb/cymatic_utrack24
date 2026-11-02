// rea decompile_all
// name: FUN_0047ea16
// address: 0x47ea16
// body: available
// range: 0x47ea16-0x47ea5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047ea16(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_20 [28];
  
  uVar3 = 2;
  uVar1 = FUN_0047e371(2);
  uVar2 = FUN_0047e366(uVar1);
  FUN_0047e75a(local_20,param_1,0,0,uVar2,uVar1,uVar3);
  param_1 = param_2;
  FUN_004a91c3(&param_1);
  FUN_0047e819();
  return;
}

