// rea decompile_all
// name: FUN_004de858
// address: 0x4de858
// body: available
// range: 0x4de858-0x4de8ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004de858(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  
  puVar1 = &uStack_1c;
  FUN_004d3044();
  FUN_0047d23a();
  uVar2 = 0x3f19999a;
  FUN_004d3044(&uStack_1c,0x3f19999a);
  FUN_0047620f(puVar1,uVar2);
  FUN_0047cda7();
  uStack_1c = 1;
  FUN_0047d353(param_1,0,param_2,param_3);
  return;
}

