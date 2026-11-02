// rea decompile_all
// name: FUN_004d142f
// address: 0x4d142f
// body: available
// range: 0x4d142f-0x4d15e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d142f(void)

{
  double dVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *unaff_ESI;
  int local_8;
  
  piVar2 = (int *)thunk_FUN_004c1d58();
  iVar3 = (**(code **)(*piVar2 + 0x14))();
  iVar4 = unaff_ESI[0x31];
  if (*(double *)(unaff_ESI + 0x26) - *(double *)(unaff_ESI + 0x24) <= 0.0) {
    dVar1 = (double)iVar4;
  }
  else {
    dVar1 = ((*(double *)(unaff_ESI + 0x2a) - *(double *)(unaff_ESI + 0x28)) * (double)iVar4) /
            (*(double *)(unaff_ESI + 0x26) - *(double *)(unaff_ESI + 0x24));
  }
  local_8 = FUN_00470221(dVar1);
  if (local_8 < iVar3) {
    local_8 = FUN_00440367();
  }
  if (iVar4 < local_8) {
    local_8 = iVar4;
  }
  iVar3 = unaff_ESI[0x30];
  if (*(double *)(unaff_ESI + 0x2a) - *(double *)(unaff_ESI + 0x28) <
      *(double *)(unaff_ESI + 0x26) - *(double *)(unaff_ESI + 0x24)) {
    iVar4 = FUN_00470221(((double)(iVar4 - local_8) *
                         (*(double *)(unaff_ESI + 0x28) - *(double *)(unaff_ESI + 0x24))) /
                         ((*(double *)(unaff_ESI + 0x26) - *(double *)(unaff_ESI + 0x24)) -
                         (*(double *)(unaff_ESI + 0x2a) - *(double *)(unaff_ESI + 0x28))));
    iVar3 = iVar3 + iVar4;
  }
  (**(code **)(*unaff_ESI + 0x28))();
  if ((unaff_ESI[0x32] != iVar3) || (unaff_ESI[0x33] != local_8)) {
    iVar5 = FUN_00440367(unaff_ESI[0x32]);
    iVar5 = iVar5 + -4;
    iVar4 = FUN_00439b5a(unaff_ESI[0x33] + unaff_ESI[0x32]);
    iVar4 = iVar4 + (8 - iVar5);
    if ((char)unaff_ESI[0x39] == '\0') {
      iVar5 = 0;
    }
    else {
      iVar4 = unaff_ESI[6];
    }
    FUN_004c1636(unaff_ESI,iVar5,iVar4);
    unaff_ESI[0x32] = iVar3;
    unaff_ESI[0x33] = local_8;
  }
  return;
}

