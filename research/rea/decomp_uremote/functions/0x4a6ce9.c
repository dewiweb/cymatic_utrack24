// rea decompile_all
// name: FUN_004a6ce9
// address: 0x4a6ce9
// body: available
// range: 0x4a6ce9-0x4a6d97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a6ce9(void)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  int *in_EDX;
  int iVar4;
  int iVar5;
  uint local_8;
  
  local_8 = 0;
  iVar1 = *in_EDX;
  iVar2 = in_EDX[2] + iVar1;
  if ((iVar1 <= *in_EAX) && (*in_EAX < iVar2)) {
    local_8 = 1;
  }
  iVar3 = in_EAX[1];
  iVar5 = in_EDX[3] + in_EDX[1];
  if ((in_EDX[1] <= iVar3) && (iVar3 < iVar5)) {
    local_8 = local_8 | 2;
  }
  iVar4 = in_EAX[2] + *in_EAX;
  if ((iVar1 <= iVar4) && (iVar4 < iVar2)) {
    local_8 = local_8 | 4;
  }
  iVar3 = in_EAX[3] + iVar3;
  if ((in_EDX[1] <= iVar3) && (iVar3 < iVar5)) {
    local_8 = local_8 | 8;
  }
  if (local_8 == 7) {
    in_EAX[3] = iVar3 - iVar5;
    in_EAX[1] = iVar5;
  }
  else if (local_8 == 0xb) {
    in_EAX[2] = iVar4 - iVar2;
    *in_EAX = iVar2;
  }
  else if (local_8 == 0xd) {
    in_EAX[3] = in_EDX[1] - in_EAX[1];
  }
  else {
    if (local_8 != 0xe) {
      return 0;
    }
    in_EAX[2] = iVar1 - *in_EAX;
  }
  return 1;
}

