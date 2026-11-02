// rea decompile_all
// name: FUN_006aff30
// address: 0x6aff30
// body: available
// range: 0x6aff30-0x6b0151 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006aff30(void)

{
  int *piVar1;
  int *in_ECX;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  int iStack_18;
  int local_10;
  
  piVar1 = (int *)FUN_006e9580();
  if (*(code **)(*piVar1 + 0x14) == FUN_006dd710) {
    iVar6 = in_ECX[6];
    if (in_ECX[7] < in_ECX[6]) {
      iVar6 = in_ECX[7];
    }
    iVar6 = iVar6 * 2;
  }
  else {
    iVar6 = (**(code **)(*piVar1 + 0x14))();
  }
  iVar3 = in_ECX[0x31];
  if (*(double *)(in_ECX + 0x26) - *(double *)(in_ECX + 0x24) <= 0.0) {
    dVar7 = (double)iVar3;
  }
  else {
    dVar7 = ((*(double *)(in_ECX + 0x2a) - *(double *)(in_ECX + 0x28)) * (double)iVar3) /
            (*(double *)(in_ECX + 0x26) - *(double *)(in_ECX + 0x24));
  }
  local_10 = SUB84(dVar7 + 6755399441055744.0,0);
  if ((local_10 < iVar6) && (local_10 = iVar6, iVar3 + -1 < iVar6)) {
    local_10 = iVar3 + -1;
  }
  iVar6 = in_ECX[0x30];
  iVar5 = local_10;
  if (iVar3 < local_10) {
    iVar5 = iVar3;
  }
  if (*(double *)(in_ECX + 0x2a) - *(double *)(in_ECX + 0x28) <
      *(double *)(in_ECX + 0x26) - *(double *)(in_ECX + 0x24)) {
    local_10 = SUB84(((double)(iVar3 - iVar5) *
                     (*(double *)(in_ECX + 0x28) - *(double *)(in_ECX + 0x24))) /
                     ((*(double *)(in_ECX + 0x26) - *(double *)(in_ECX + 0x24)) -
                     (*(double *)(in_ECX + 0x2a) - *(double *)(in_ECX + 0x28))) + 6755399441055744.0
                     ,0);
    iVar6 = iVar6 + local_10;
  }
  if ((*(char *)((int)in_ECX + 0xe6) == '\0') ||
     ((*(double *)(in_ECX + 0x2a) - *(double *)(in_ECX + 0x28) <
       *(double *)(in_ECX + 0x26) - *(double *)(in_ECX + 0x24) &&
      (0.0 < *(double *)(in_ECX + 0x2a) - *(double *)(in_ECX + 0x28))))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  (**(code **)(*in_ECX + 0x28))(uVar2);
  iVar3 = in_ECX[0x32];
  if ((iVar3 != iVar6) || (in_ECX[0x33] != iVar5)) {
    if (iVar6 < iVar3) {
      iVar3 = iVar6;
    }
    iVar3 = iVar3 + -4;
    iVar4 = in_ECX[0x33] + in_ECX[0x32];
    if (in_ECX[0x33] + in_ECX[0x32] < iVar6 + iVar5) {
      iVar4 = iVar6 + iVar5;
    }
    iVar5 = (iVar4 - iVar3) + 8;
    if ((char)in_ECX[0x39] == '\0') {
      iVar4 = in_ECX[7];
      iVar9 = 0;
      iVar8 = iVar3;
      iVar3 = iVar5;
    }
    else {
      iVar8 = 0;
      iVar9 = iVar3;
      iVar3 = in_ECX[6];
      iVar4 = iVar5;
    }
    FUN_006ceb30(iVar8,iVar9,iVar3,iVar4);
    in_ECX[0x32] = iVar6;
    in_ECX[0x33] = iStack_18;
  }
  return;
}

