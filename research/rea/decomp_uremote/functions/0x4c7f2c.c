// rea decompile_all
// name: FUN_004c7f2c
// address: 0x4c7f2c
// body: available
// range: 0x4c7f2c-0x4c7f81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c7f2c(int param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int *in_ECX;
  undefined4 uVar4;
  
  cVar1 = FUN_004c7c7c();
  cVar2 = FUN_004c7c89();
  uVar4 = 0;
  uVar3 = FUN_004c321c(in_ECX,0);
  FUN_004c7be3(uVar3,uVar4);
  if (((cVar1 != '\0') && (cVar2 != '\0')) && (*(char *)((int)in_ECX + 0xd9) == '\0')) {
    (**(code **)(*in_ECX + 0xc4))(param_1 + 0x10);
  }
  return;
}

