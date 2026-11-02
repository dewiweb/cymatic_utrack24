// rea decompile_all
// name: FUN_00407343
// address: 0x407343
// body: available
// range: 0x407343-0x40751a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00407343(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *unaff_EDI;
  uint local_8;
  
  if (unaff_EDI != (undefined4 *)0x0) {
    uVar1 = unaff_EDI[0x11022];
    FUN_00411a5c(*unaff_EDI);
    *unaff_EDI = 0;
    if (unaff_EDI[0x20] != 0) {
      FUN_00405478(uVar1);
      FUN_00411a5c(unaff_EDI[0x20]);
      unaff_EDI[0x20] = 0;
    }
    FUN_00411a5c(unaff_EDI[0x15]);
    unaff_EDI[0x15] = 0;
    local_8 = 0;
    if (unaff_EDI[0x12] != 0) {
      iVar2 = 0;
      do {
        if (*(int *)(unaff_EDI[0x14] + iVar2 + 4) == 1) {
          FUN_00411a5c(*(undefined4 *)(unaff_EDI[0x14] + iVar2 + 0xc));
          *(undefined4 *)(iVar2 + 0xc + unaff_EDI[0x14]) = 0;
        }
        local_8 = local_8 + 1;
        iVar2 = iVar2 + 0x10;
      } while (local_8 < (uint)unaff_EDI[0x12]);
    }
    FUN_00411a5c(unaff_EDI[0x14]);
    puVar3 = (undefined4 *)unaff_EDI[0xe];
    unaff_EDI[0x14] = 0;
    local_8 = 0;
    if (unaff_EDI[0xd] != 0) {
      do {
        FUN_00411a5c(*puVar3);
        *puVar3 = 0;
        FUN_00411a5c(puVar3[6]);
        local_8 = local_8 + 1;
        puVar3[6] = 0;
        puVar3 = puVar3 + 9;
      } while (local_8 < (uint)unaff_EDI[0xd]);
    }
    puVar3 = (undefined4 *)unaff_EDI[0x11];
    local_8 = 0;
    if (unaff_EDI[0x10] != 0) {
      do {
        FUN_00411a5c(*puVar3);
        *puVar3 = 0;
        FUN_00411a5c(puVar3[6]);
        local_8 = local_8 + 1;
        puVar3[6] = 0;
        puVar3 = puVar3 + 9;
      } while (local_8 < (uint)unaff_EDI[0x10]);
    }
    FUN_00411a5c(unaff_EDI[0xe]);
    unaff_EDI[0xe] = 0;
    FUN_00411a5c(unaff_EDI[0x11]);
    puVar3 = (undefined4 *)unaff_EDI[0x1a];
    unaff_EDI[0x11] = 0;
    local_8 = 0;
    if (unaff_EDI[0x1c] != 0) {
      do {
        FUN_00411a5c(*puVar3);
        *puVar3 = 0;
        FUN_00411a5c(puVar3[6]);
        local_8 = local_8 + 1;
        puVar3[6] = 0;
        puVar3 = puVar3 + 9;
      } while (local_8 < (uint)unaff_EDI[0x1c]);
    }
    FUN_00411a5c(unaff_EDI[0x1a]);
    unaff_EDI[0x1a] = 0;
    FUN_00405478(uVar1);
    puVar3 = (undefined4 *)unaff_EDI[0x11023];
    local_8 = 0;
    if (unaff_EDI[0x11024] != 0) {
      do {
        FUN_00411a5c(*puVar3);
        *puVar3 = 0;
        if (puVar3[1] == 1) {
          FUN_00411a5c(puVar3[3]);
          puVar3[3] = 0;
        }
        local_8 = local_8 + 1;
        puVar3 = puVar3 + 4;
      } while (local_8 < (uint)unaff_EDI[0x11024]);
    }
    FUN_00411a5c(unaff_EDI[0x11023]);
    unaff_EDI[0x11023] = 0;
  }
  return;
}

