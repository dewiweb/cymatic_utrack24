// rea decompile_all
// name: FUN_00478556
// address: 0x478556
// body: available
// range: 0x478556-0x47861c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00478556(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *unaff_EBX;
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar1 = param_1;
  FUN_004a4c72(&local_20);
  if ((local_18 < 1) || (local_14 < 1)) {
    unaff_EBX[4] = 0;
    *(undefined1 *)(unaff_EBX + 7) = 0;
  }
  else {
    iVar3 = local_1c - unaff_EBX[2];
    local_8 = local_14 + iVar3;
    if (local_8 < unaff_EBX[4]) {
      unaff_EBX[4] = local_8;
    }
    local_c = local_20 + local_18;
    local_10 = iVar3;
    if (local_c < unaff_EBX[3] + unaff_EBX[1]) {
      iVar2 = FUN_00440367(unaff_EBX[1]);
      unaff_EBX[1] = iVar2;
      unaff_EBX[3] = local_c - iVar2;
    }
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        *(undefined4 *)(*unaff_EBX + unaff_EBX[6] * iVar2 * 4) = 0;
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
    iVar3 = *param_1 + (local_1c - param_1[2]) * param_1[6] * 4;
    for (param_1 = (int *)local_10; (int)param_1 < local_8; param_1 = (int *)((int)param_1 + 1)) {
      FUN_0047810a(param_1,iVar3);
      iVar3 = iVar3 + piVar1[6] * 4;
    }
    *(undefined1 *)(unaff_EBX + 7) = 1;
  }
  return;
}

