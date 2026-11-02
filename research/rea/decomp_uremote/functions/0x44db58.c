// rea decompile_all
// name: FUN_0044db58
// address: 0x44db58
// body: available
// range: 0x44db58-0x44dbb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0044db58(undefined4 param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  float fVar4;
  
  iVar1 = FUN_0044bfc5(0);
  fVar2 = (float10)FUN_0043d2e1((float)*(int *)(iVar1 + 8) * 0.5,
                                (float)*(int *)(param_2 + 0x1c) * 0.85);
  fVar4 = (float)fVar2;
  uVar3 = param_1;
  FUN_0044bfc5(param_1,fVar4);
  FUN_0049f81a(uVar3,fVar4);
  return param_1;
}

