// rea decompile_all
// name: FUN_0042d160
// address: 0x42d160
// body: available
// range: 0x42d160-0x42d24e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0042d160(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar2 = param_1;
  iVar5 = 0x40;
  param_1 = (int *)0x32;
  *piVar2 = 0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  do {
    iVar3 = piVar2[2];
    iVar4 = iVar3 + 1;
    if (piVar2[1] < iVar4) {
      if (iVar4 < 0) {
        iVar4 = iVar3 + 2;
      }
      uVar6 = iVar3 + 9 + (iVar4 >> 1) & 0xfffffff8;
      if (piVar2[1] != uVar6) {
        if ((int)uVar6 < 1) {
          FID_conflict__free((void *)*piVar2);
          *piVar2 = 0;
        }
        else if (*piVar2 == 0) {
          iVar3 = FUN_004c554b();
          *piVar2 = iVar3;
        }
        else {
          iVar3 = FUN_004c553b(*piVar2,uVar6 * 4);
          *piVar2 = iVar3;
        }
        piVar2[1] = uVar6;
      }
    }
    iVar3 = piVar2[2];
    piVar2[2] = iVar3 + 1;
    piVar1 = (int *)(*piVar2 + iVar3 * 4);
    if (piVar1 != (int *)0x0) {
      *piVar1 = iVar5;
    }
    if (iVar5 < 0x200) {
      iVar3 = 0x20;
    }
    else if (iVar5 < 0x400) {
      iVar3 = 0x40;
    }
    else {
      iVar3 = 0x100;
      if (iVar5 < 0x800) {
        iVar3 = 0x80;
      }
    }
    iVar5 = iVar5 + iVar3;
    param_1 = (int *)((int)param_1 + -1);
  } while (param_1 != (int *)0x0);
  return piVar2;
}

