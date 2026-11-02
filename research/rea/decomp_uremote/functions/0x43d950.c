// rea decompile_all
// name: FUN_0043d950
// address: 0x43d950
// body: available
// range: 0x43d950-0x43da59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0043d950(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int in_EDX;
  int iVar4;
  
  if (in_EDX < *(int *)(in_ECX + 0x84)) {
    iVar1 = ((in_EDX - *(int *)(in_ECX + 0x7c)) * *(int *)(in_ECX + 0x98)) /
            (*(int *)(in_ECX + 0x84) - *(int *)(in_ECX + 0x7c));
  }
  else {
    iVar3 = *(int *)(in_ECX + 0x88);
    if (in_EDX < iVar3) {
      iVar1 = *(int *)(in_ECX + 0x98);
      iVar4 = *(int *)(in_ECX + 0x84);
      iVar2 = *(int *)(in_ECX + 0x9c);
    }
    else {
      iVar3 = *(int *)(in_ECX + 0x8c);
      if (in_EDX < iVar3) {
        iVar1 = *(int *)(in_ECX + 0x9c);
        iVar4 = *(int *)(in_ECX + 0x88);
        iVar2 = *(int *)(in_ECX + 0xa0);
      }
      else {
        iVar3 = *(int *)(in_ECX + 0x90);
        if (in_EDX < iVar3) {
          iVar1 = *(int *)(in_ECX + 0xa0);
          iVar4 = *(int *)(in_ECX + 0x8c);
          iVar2 = *(int *)(in_ECX + 0xa4);
        }
        else {
          iVar3 = *(int *)(in_ECX + 0x94);
          if (iVar3 <= in_EDX) {
            iVar1 = *(int *)(in_ECX + 0xa8) -
                    ((*(int *)(in_ECX + 0x74) - *(int *)(in_ECX + 0xa8)) *
                    (in_EDX - *(int *)(in_ECX + 0x94))) / *(int *)(in_ECX + 0x94);
            goto LAB_0043da21;
          }
          iVar1 = *(int *)(in_ECX + 0xa4);
          iVar4 = *(int *)(in_ECX + 0x90);
          iVar2 = *(int *)(in_ECX + 0xa8);
        }
      }
    }
    iVar1 = ((iVar2 - iVar1) * (in_EDX - iVar4)) / (iVar3 - iVar4) + iVar1;
  }
LAB_0043da21:
  iVar3 = *(int *)(in_ECX + 0x74);
  if (iVar3 < iVar1) {
    iVar1 = iVar3;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar3 = FUN_004c08d2(param_1,in_ECX,0,(*(int *)(in_ECX + 0x70) - iVar1) + iVar3);
  return *(undefined4 *)(iVar3 + 4);
}

