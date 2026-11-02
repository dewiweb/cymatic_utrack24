// rea decompile_all
// name: FUN_004b7740
// address: 0x4b7740
// body: available
// range: 0x4b7740-0x4b78b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b7740(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  bool bVar6;
  
LAB_004b7750:
  bVar6 = false;
  do {
    while( true ) {
      piVar5 = in_ECX + 1;
      if (*piVar5 == 0) {
        if ((uint)((int *)*in_ECX)[2] <= (uint)in_ECX[2]) {
          return;
        }
        piVar1 = *(int **)(*(int *)*in_ECX + in_ECX[2] * 4);
        if (piVar1 == (int *)0x0) {
          return;
        }
        *piVar5 = *piVar1;
      }
      iVar3 = FUN_00426f70();
      if (iVar3 == 0) {
        if ((uint)((int *)*in_ECX)[2] <= in_ECX[2] + 1U) {
          return;
        }
        if (*(int *)(*(int *)*in_ECX + (in_ECX[2] + 1U) * 4) == 0) {
          return;
        }
        FUN_0044ebd0(0);
        iVar3 = FUN_00426f70();
      }
      if (iVar3 != 0x22) break;
      FUN_004b7270();
    }
    if (iVar3 == 0x2f) {
      piVar1 = (int *)*in_ECX;
      iVar4 = *piVar5;
      uVar2 = in_ECX[2];
      FUN_006f30b0();
      if ((iVar4 != 0) || ((uVar2 < (uint)piVar1[2] && (*(int *)(*piVar1 + uVar2 * 4) != 0)))) {
        iVar4 = FUN_00426f70();
        if (iVar4 == 0) {
          if (((uint)piVar1[2] <= uVar2 + 1) || (*(int *)(*piVar1 + (uVar2 + 1) * 4) == 0))
          goto LAB_004b7850;
          FUN_0044ebd0(0);
          iVar4 = FUN_00426f70();
        }
        if (iVar4 == 0x2f) {
          return;
        }
        if (iVar4 == 0x2a) {
          return;
        }
      }
    }
    else {
      if (iVar3 == 0) {
        return;
      }
      if ((iVar3 == 10) || (iVar3 == 0xd)) break;
    }
LAB_004b7850:
    bVar6 = iVar3 == 0x5c;
    FUN_006f30b0();
  } while( true );
  if (*piVar5 == 0) {
    if (((uint)((int *)*in_ECX)[2] <= (uint)in_ECX[2]) ||
       (piVar1 = *(int **)(*(int *)*in_ECX + in_ECX[2] * 4), piVar1 == (int *)0x0))
    goto LAB_004b78a0;
    *piVar5 = *piVar1;
  }
  iVar3 = FUN_0044ec90();
  in_ECX[3] = in_ECX[3] + iVar3;
  in_ECX[2] = in_ECX[2] + 1;
  *piVar5 = 0;
LAB_004b78a0:
  if (!bVar6) {
    return;
  }
  goto LAB_004b7750;
}

