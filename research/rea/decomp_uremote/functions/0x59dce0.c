// rea decompile_all
// name: FUN_0059dce0
// address: 0x59dce0
// body: available
// range: 0x59dce0-0x59dd77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0059dce0(undefined2 param_1,int param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  
  if ((*(int *)(in_ECX + 0xc0) == 0x128) || (*(int *)(in_ECX + 0xc0) == 0x328)) {
    uVar3 = *(undefined4 *)(param_2 + 8);
    iVar4 = param_3;
    uVar2 = FUN_00501cb0(uVar3,param_3);
    sVar1 = FUN_00585ab0(param_1,uVar2,uVar3,iVar4);
    if (sVar1 == 0) {
      uVar3 = 0x16;
    }
    else {
      FUN_00585bb0(*(int *)(param_2 + 4) + param_3,sVar1);
      FUN_0059adb0();
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 10;
  }
  return uVar3;
}

