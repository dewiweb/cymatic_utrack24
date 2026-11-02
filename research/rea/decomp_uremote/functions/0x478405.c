// rea decompile_all
// name: FUN_00478405
// address: 0x478405
// body: available
// range: 0x478405-0x4784ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00478405(void)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  iVar1 = FUN_004a4c72(&local_20);
  if ((local_18 < 1) || (local_14 < 1)) {
    unaff_ESI[4] = 0;
    *(undefined1 *)(unaff_ESI + 7) = 0;
    local_20 = iVar1;
  }
  else {
    local_c = local_1c - unaff_ESI[2];
    iVar1 = local_c + local_14;
    iVar2 = local_c;
    if (iVar1 < unaff_ESI[4]) {
      unaff_ESI[4] = iVar1;
    }
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      *(undefined4 *)(*unaff_ESI + unaff_ESI[6] * iVar2 * 4) = 0;
    }
    if ((unaff_ESI[1] < local_20) || (local_18 + local_20 < unaff_ESI[3] + unaff_ESI[1])) {
      local_20 = FUN_00440367(unaff_ESI[3] + unaff_ESI[1]);
      local_20 = local_20 << 8;
      local_8 = (int *)(*unaff_ESI + unaff_ESI[6] * local_c * 4);
      local_10 = local_20;
      local_c = iVar1 - local_c;
      while (local_c = local_c + -1, -1 < local_c) {
        if (*local_8 != 0) {
          FUN_004783a2();
          local_20 = local_10;
        }
        local_8 = local_8 + unaff_ESI[6];
      }
    }
    *(undefined1 *)(unaff_ESI + 7) = 1;
  }
  return local_20;
}

