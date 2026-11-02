// rea decompile_all
// name: FUN_0041a430
// address: 0x41a430
// body: available
// range: 0x41a430-0x41a583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041a430(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_8;
  
  iVar4 = 0;
  if (0 < in_ECX[2]) {
    local_8 = 0;
    do {
      piVar5 = (int *)(*in_ECX + local_8);
      iVar6 = piVar5[0xc];
      while (0 < iVar6) {
        iVar6 = piVar5[0xc];
        piVar5[0xc] = iVar6 + -1;
        puVar2 = *(undefined4 **)(piVar5[10] + (iVar6 + -1) * 4);
        if (puVar2 != (undefined4 *)0x0) {
          LOCK();
          piVar3 = puVar2 + 1;
          iVar6 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)*puVar2)(1);
          }
        }
        iVar6 = piVar5[0xc];
      }
      FID_conflict__free((void *)piVar5[10]);
      iVar6 = 0;
      if (0 < piVar5[9]) {
        do {
          piVar3 = (int *)(*(int *)(piVar5[7] + iVar6 * 4) + -8);
          if (piVar3 != &DAT_00bfe124) {
            LOCK();
            iVar1 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              FID_conflict__free(piVar3);
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < piVar5[9]);
      }
      FID_conflict__free((void *)piVar5[7]);
      iVar6 = 0;
      if (0 < piVar5[6]) {
        do {
          piVar3 = (int *)(*(int *)(piVar5[4] + iVar6 * 4) + -8);
          if (piVar3 != &DAT_00bfe124) {
            LOCK();
            iVar1 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              FID_conflict__free(piVar3);
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < piVar5[6]);
      }
      FID_conflict__free((void *)piVar5[4]);
      FID_conflict__free((void *)piVar5[2]);
      piVar3 = (int *)(piVar5[1] + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      piVar5 = (int *)(*piVar5 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      iVar4 = iVar4 + 1;
      local_8 = local_8 + 0x34;
    } while (iVar4 < in_ECX[2]);
  }
  return;
}

