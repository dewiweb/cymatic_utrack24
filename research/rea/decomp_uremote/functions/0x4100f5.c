// rea decompile_all
// name: FUN_004100f5
// address: 0x4100f5
// body: available
// range: 0x4100f5-0x4101cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004100f5(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_ESI;
  char *local_1c [3];
  uint local_10;
  undefined4 *local_c;
  uint local_8;
  
  if (unaff_ESI == (undefined4 *)0x0) {
    uVar3 = 0x21;
  }
  else {
    piVar1 = unaff_ESI + 0x2f;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      local_1c[2] = (char *)*unaff_ESI;
      local_1c[0] = "type42";
      local_1c[1] = (char *)0x0;
      local_8 = 0;
      do {
        local_10 = 0;
        if (unaff_ESI[4] != 0) {
          local_c = unaff_ESI + 5;
          do {
            piVar1 = (int *)*local_c;
            if (((local_1c[local_8] == (char *)0x0) ||
                (iVar2 = _strcmp(*(char **)(*piVar1 + 8),local_1c[local_8]), iVar2 == 0)) &&
               ((*(byte *)*piVar1 & 1) != 0)) {
              iVar2 = piVar1[4];
              while (iVar2 != 0) {
                FUN_0040f070();
                iVar2 = piVar1[4];
              }
            }
            local_10 = local_10 + 1;
            local_c = local_c + 1;
          } while (local_10 < (uint)unaff_ESI[4]);
        }
        local_8 = local_8 + 1;
      } while (local_8 < 2);
      while (unaff_ESI[4] != 0) {
        FUN_0041001f();
      }
      FUN_00411a5c(unaff_ESI[0x29]);
      unaff_ESI[0x29] = 0;
      unaff_ESI[0x2a] = 0;
      FUN_00411a5c();
    }
    uVar3 = 0;
  }
  return uVar3;
}

