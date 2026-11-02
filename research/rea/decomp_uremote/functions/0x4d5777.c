// rea decompile_all
// name: FUN_004d5777
// address: 0x4d5777
// body: available
// range: 0x4d5777-0x4d583d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d5777(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_24;
  
  uStack_24 = 0x4d5796;
  FUN_004d3044();
  FUN_004d076d();
  FUN_0047d23a();
  FUN_0047604f();
  FUN_0047627a(&uStack_24);
  FUN_0047cda7();
  iVar1 = 0;
  if (0 < param_3) {
    do {
      uStack_24 = 1;
      FUN_0047d187(iVar1);
      iVar1 = iVar1 + 3;
    } while (iVar1 < param_3);
  }
  puVar2 = &uStack_24;
  FUN_004d3044(&uStack_24);
  FUN_0047620f(puVar2);
  FUN_0047cda7();
  uStack_24 = 1;
  FUN_0047d353(param_1,0,param_2);
  return;
}

