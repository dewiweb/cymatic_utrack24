// rea decompile_all
// name: FUN_00476237
// address: 0x476237
// body: available
// range: 0x476237-0x476279 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00476237(undefined4 param_1,float param_2)

{
  undefined1 uVar1;
  uint *in_EAX;
  uint uVar2;
  
  uVar2 = *in_EAX;
  FUN_004a8e4a((float)(uVar2 >> 0x18) * param_2,uVar2 >> 0x18,uVar2);
  uVar1 = FUN_00440367(0xff);
  FUN_00476147(CONCAT13(uVar1,(int3)uVar2));
  return;
}

