// rea decompile_all
// name: FUN_004d8b49
// address: 0x4d8b49
// body: available
// range: 0x4d8b49-0x4d8bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d8b49(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,int param_7,int param_8,char param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_7;
  iVar3 = param_5 - ((int)(param_5 + (param_5 >> 0x1f & 7U)) >> 3);
  if (param_9 == '\0') {
    param_2 = ((param_2 - ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2)) - iVar3) + param_4;
  }
  else {
    param_2 = param_2 + 4;
  }
  if (param_8 != 0) {
    FUN_004c09cc(param_2,param_3,param_5);
    iVar2 = iVar3;
    if (param_9 == '\0') {
      iVar2 = -((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) - iVar3;
    }
    param_2 = param_2 + iVar2;
  }
  if (param_9 != '\0') {
    param_7 = param_6;
    param_6 = iVar1;
  }
  if (param_7 != 0) {
    FUN_004c09cc(param_2,param_3,param_5);
    if (param_9 == '\0') {
      iVar3 = -iVar3;
    }
    param_2 = param_2 + iVar3;
  }
  if (param_6 != 0) {
    FUN_004c09cc(param_2,param_3,param_5);
  }
  return;
}

