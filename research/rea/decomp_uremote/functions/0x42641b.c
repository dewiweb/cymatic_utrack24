// rea decompile_all
// name: FUN_0042641b
// address: 0x42641b
// body: available
// range: 0x42641b-0x426495 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0042641b(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 == 0) {
    uVar3 = 0x24;
  }
  else if (iVar1 == 0) {
    uVar3 = 6;
  }
  else if ((param_3 < *(uint *)(iVar1 + 0x10)) || (*(int *)(*(int *)(iVar1 + 0x80) + 0x34) != 0)) {
    if ((param_4 & 2) != 0) {
      if ((*(uint *)(iVar1 + 8) & 0x2000) != 0) {
        param_4 = param_4 & 0xfffffffd;
      }
      if ((param_4 & 0x8000) != 0) {
        param_4 = param_4 | 2;
      }
    }
    uVar2 = param_4;
    if (((param_4 & 0x401) != 0) && (uVar2 = param_4 | 9, (*(uint *)(iVar1 + 8) & 0x2000) == 0)) {
      uVar2 = param_4 | 0xb;
    }
    uVar3 = FUN_004284ee(param_2,param_3,uVar2);
  }
  else {
    uVar3 = 6;
  }
  return uVar3;
}

