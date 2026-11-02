// rea decompile_all
// name: FUN_0041e6b8
// address: 0x41e6b8
// body: available
// range: 0x41e6b8-0x41e7cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0041e6b8(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBX;
  int unaff_EDI;
  bool bVar4;
  
  iVar2 = *(int *)(unaff_EDI + 100);
  if (iVar2 == 0) {
    uVar3 = *(uint *)(unaff_EDI + 0x48);
    if ((int)uVar3 < unaff_EBX) {
LAB_0041e73c:
      bVar4 = *(int *)(unaff_EDI + 8) <=
              (int)((*(int *)(unaff_EDI + 4) + -1 + uVar3 & -*(int *)(unaff_EDI + 4)) - uVar3);
LAB_0041e756:
      cVar1 = FUN_0041e056(bVar4);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    else if (unaff_EBX < (int)uVar3) {
      iVar2 = uVar3 - (-*(int *)(unaff_EDI + 4) & uVar3);
      bVar4 = SBORROW4(iVar2,*(int *)(unaff_EDI + 8));
      iVar2 = iVar2 - *(int *)(unaff_EDI + 8);
      goto LAB_0041e774;
    }
  }
  else if (iVar2 == 1) {
    uVar3 = *(uint *)(unaff_EDI + 0x48);
    if (unaff_EBX < (int)uVar3) {
      cVar1 = FUN_0041e100(*(int *)(unaff_EDI + 8) <=
                           (int)(uVar3 - (-*(int *)(unaff_EDI + 4) & uVar3)));
      if (cVar1 != '\0') {
        return 1;
      }
      iVar2 = *(uint *)(unaff_EDI + 0x48) - (-*(int *)(unaff_EDI + 4) & *(uint *)(unaff_EDI + 0x48))
      ;
      bVar4 = SBORROW4(iVar2,*(int *)(unaff_EDI + 8));
      iVar2 = iVar2 - *(int *)(unaff_EDI + 8);
LAB_0041e774:
      bVar4 = bVar4 == iVar2 < 0;
      goto LAB_0041e756;
    }
  }
  else if ((iVar2 == 2) && (iVar2 = *(int *)(unaff_EDI + 0x48), iVar2 < unaff_EBX)) {
    cVar1 = FUN_0041e100(*(int *)(unaff_EDI + 8) <=
                         (*(int *)(unaff_EDI + 4) + -1 + iVar2 & -*(int *)(unaff_EDI + 4)) - iVar2);
    if (cVar1 != '\0') {
      return 1;
    }
    uVar3 = *(uint *)(unaff_EDI + 0x48);
    goto LAB_0041e73c;
  }
  if (*(int *)(unaff_EDI + 100) == 1) {
    cVar1 = FUN_0041e367(*(undefined4 *)(unaff_EDI + 0x44),*(undefined4 *)(unaff_EDI + 0x48));
  }
  else {
    if (*(int *)(unaff_EDI + 100) != 2) goto LAB_0041e7c2;
    cVar1 = FUN_0041e4e2();
  }
  if (cVar1 != '\0') {
    return 1;
  }
LAB_0041e7c2:
  *(undefined4 *)(unaff_EDI + 0x44) = param_1;
  *(int *)(unaff_EDI + 0x48) = unaff_EBX;
  return 0;
}

