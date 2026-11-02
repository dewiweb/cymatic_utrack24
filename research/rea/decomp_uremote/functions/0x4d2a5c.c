// rea decompile_all
// name: FUN_004d2a5c
// address: 0x4d2a5c
// body: available
// range: 0x4d2a5c-0x4d2b7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004d2a5c(int param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  int local_14;
  int local_10;
  
  if ((*(uint *)(param_1 + 0x10) >> 2 & 1) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x10) >> 1 & 1) != 0) {
    return 0;
  }
  if ((*(char *)(unaff_ESI + 0x9c) != '\0') ||
     (bVar2 = false, (*(byte *)(unaff_ESI + 0x178) & 2) != 0)) {
    bVar2 = true;
  }
  if ((*(char *)(unaff_ESI + 0x9d) == '\0') && ((*(byte *)(unaff_ESI + 0x278) & 2) == 0)) {
    bVar1 = false;
    if (!bVar2) {
      return 0;
    }
  }
  else {
    bVar1 = true;
  }
  iVar4 = FUN_004d29f0(*unaff_EDI,*(undefined4 *)(unaff_ESI + 0x90));
  iVar5 = FUN_004d29f0(unaff_EDI[1],*(undefined4 *)(unaff_ESI + 0x94));
  local_14 = *(int *)(unaff_ESI + 0x7c);
  local_10 = *(int *)(unaff_ESI + 0x80);
  if ((iVar4 == 0) || (iVar5 == 0)) {
LAB_004d2b12:
    if (bVar1) {
      if (((iVar4 != 0) || (iVar4 = iVar5, (*(byte *)(param_1 + 0x10) & 1) != 0)) || (!bVar2)) {
        local_14 = local_14 - iVar4;
        goto LAB_004d2b3e;
      }
    }
    else {
LAB_004d2b31:
      if (!bVar2) goto LAB_004d2b3e;
    }
    if (iVar5 == 0) goto LAB_004d2b3e;
  }
  else {
    if (!bVar1) goto LAB_004d2b31;
    if (!bVar2) goto LAB_004d2b12;
    local_14 = local_14 - iVar4;
  }
  local_10 = local_10 - iVar5;
LAB_004d2b3e:
  cVar3 = FUN_004f5e38(*(undefined4 *)(unaff_ESI + 0x7c),*(undefined4 *)(unaff_ESI + 0x80));
  if (cVar3 == '\0') {
    return 0;
  }
  FUN_004d2329(local_14,local_10);
  return 1;
}

