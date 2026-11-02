// rea decompile_all
// name: FUN_004a8690
// address: 0x4a8690
// body: available
// range: 0x4a8690-0x4a86e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a8690(undefined4 param_1,float param_2,undefined4 param_3)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  float10 fVar3;
  
  if (*(char *)(in_EAX + 0x18) != '\0') {
    fVar3 = (float10)FUN_00474de5(param_2 + 0.5);
    param_2 = (float)fVar3;
  }
  iVar1 = *(int *)(in_EAX + 0xc);
  if (iVar1 != 0) {
    uVar2 = FUN_004a8e4a(param_3);
    FUN_004a8a07(param_1,iVar1,param_2,uVar2);
  }
  return;
}

