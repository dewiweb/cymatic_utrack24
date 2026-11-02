// rea decompile_all
// name: FUN_004e19c4
// address: 0x4e19c4
// body: available
// range: 0x4e19c4-0x4e1a81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004e19c4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int unaff_ESI;
  int local_8;
  
  *(undefined1 *)(unaff_ESI + 0xc0) = 1;
  if (*(int *)(unaff_ESI + 0x70) != 0) {
    thunk_FUN_004e1a86();
  }
  iVar2 = FUN_004f7a5c();
  piVar4 = *(int **)(unaff_ESI + 0x98);
  for (piVar3 = piVar4; (piVar3 != piVar4 + *(int *)(unaff_ESI + 0xa0) && (iVar2 != *piVar3));
      piVar3 = piVar3 + 1) {
  }
  piVar3 = (int *)FUN_00439b5a(0);
  iVar2 = *(int *)(unaff_ESI + 0xa0);
  local_8 = iVar2 + -1;
  if (-1 < local_8) {
    iVar5 = iVar2 + (int)piVar3;
    do {
      iVar5 = iVar5 + param_1;
      piVar3 = (int *)(iVar5 / iVar2);
      iVar1 = piVar4[iVar5 % iVar2];
      if (((iVar1 != 0) && (piVar3 = (int *)(iVar1 + 0x70), *(char *)(iVar1 + 0x7c) != '\0')) &&
         (((*piVar3 != 0 && (*piVar3 != 0x4734a34f)) ||
          (((*(char *)(iVar1 + 0x7c) != '\0' &&
            (piVar3 = *(int **)(iVar1 + 0x88), piVar3 != (int *)0x0)) && (0 < piVar3[2])))))) {
        piVar4 = (int *)FUN_004e179b(unaff_ESI);
        return piVar4;
      }
      local_8 = local_8 + -1;
    } while (-1 < local_8);
  }
  return piVar3;
}

