// rea decompile_all
// name: FUN_0051d5d0
// address: 0x51d5d0
// body: available
// range: 0x51d5d0-0x51d697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0051d5d0(undefined2 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int local_10;
  
  cVar1 = (*(code *)**(undefined4 **)(in_ECX + -0xd8 + *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)))();
  if (cVar1 == '\0') {
    local_10 = 0;
  }
  else if (param_3 == 0) {
    local_10 = 0;
  }
  else {
    FUN_0054f6b0();
    iVar2 = FUN_00557020(in_ECX + -0x100,param_1,param_2,param_3,param_4);
    if (iVar2 != 0) {
      FUN_00544360();
    }
    FUN_0054f6f0();
    if (iVar2 == 0) {
      local_10 = 0;
    }
    else {
      local_10 = iVar2 + 0x60 + *(int *)(*(int *)(iVar2 + 0x60) + 4);
    }
  }
  return local_10;
}

