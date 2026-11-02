// rea decompile_all
// name: FUN_006ed090
// address: 0x6ed090
// body: available
// range: 0x6ed090-0x6ed206 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x006ed139) */
/* WARNING: Removing unreachable block (ram,0x006ed144) */

void FUN_006ed090(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *in_ECX;
  int iVar7;
  uint uVar8;
  
  iVar1 = in_ECX[2];
  iVar7 = 0;
  if (0 < iVar1) {
    piVar5 = (int *)*in_ECX;
    iVar2 = *param_1;
    do {
      if (*piVar5 == iVar2) {
LAB_006ed0e7:
        piVar5[1] = param_2;
        return;
      }
      while( true ) {
        iVar3 = FUN_00443260();
        iVar4 = FUN_00443260();
        if ((iVar3 - iVar4 != 0) && ((iVar3 - iVar4 >> 0x1f & 0xfffffffeU) != 0xffffffff)) break;
        if (iVar3 == 0) goto LAB_006ed0e7;
      }
      iVar7 = iVar7 + 1;
      piVar5 = piVar5 + 2;
    } while (iVar7 < iVar1);
  }
  piVar5 = (int *)(*param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  iVar1 = *param_1;
  LOCK();
  UNLOCK();
  iVar7 = in_ECX[2] + 1;
  if ((in_ECX[1] < iVar7) && (uVar8 = in_ECX[2] + 9 + iVar7 / 2 & 0xfffffff8, in_ECX[1] != uVar8)) {
    if ((int)uVar8 < 1) {
      FID_conflict__free((void *)*in_ECX);
      *in_ECX = 0;
    }
    else if (*in_ECX == 0) {
      iVar7 = FUN_004c554b();
      *in_ECX = iVar7;
    }
    else {
      iVar7 = FUN_004c553b(*in_ECX,uVar8 * 8);
      *in_ECX = iVar7;
    }
    in_ECX[1] = uVar8;
  }
  iVar7 = in_ECX[2];
  in_ECX[2] = iVar7 + 1;
  piVar5 = (int *)(*in_ECX + iVar7 * 8);
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar1;
    piVar6 = (int *)(iVar1 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    piVar5[1] = param_2;
  }
  piVar5 = (int *)(iVar1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  return;
}

