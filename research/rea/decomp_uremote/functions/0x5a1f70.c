// rea decompile_all
// name: FUN_005a1f70
// address: 0x5a1f70
// body: available
// range: 0x5a1f70-0x5a2007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005a1f70(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                undefined2 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined2 param_10,undefined2 param_11,undefined2 param_12)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  undefined4 local_c;
  
  uVar1 = FUN_005a5590(param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12);
  iVar2 = FUN_005a2ba0(param_1,param_2,param_3,uVar1);
  if (iVar2 != 0) {
    if (*in_ECX == 0) {
      *in_ECX = iVar2;
    }
    else {
      for (local_c = *in_ECX; *(int *)(local_c + 0x70) != 0; local_c = *(int *)(local_c + 0x70)) {
      }
      *(int *)(local_c + 0x70) = iVar2;
    }
  }
  return iVar2;
}

