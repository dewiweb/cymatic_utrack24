// rea decompile_all
// name: FUN_00503160
// address: 0x503160
// body: available
// range: 0x503160-0x5031b7 inclusive
// range: 0x5031ba-0x5031fd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00503160(undefined4 param_1,undefined4 param_2,char param_3,undefined1 param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  
  cVar1 = FUN_005032b0(*in_ECX,param_2,param_4,&local_c,&local_8);
  if (cVar1 == '\0') {
    uVar2 = FUN_00501bd0();
    FUN_005017f0(uVar2);
  }
  else if (param_3 == '\0') {
    FUN_00501870(local_8);
  }
  else {
    FUN_00501870(local_c);
  }
  return param_1;
}

