// rea decompile_all
// name: FUN_00608cc0
// address: 0x608cc0
// body: available
// range: 0x608cc0-0x608db6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00608cc0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  uint uVar6;
  
  piVar2 = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar3 = FUN_00637340(0);
  do {
    if (iVar3 < 0) {
      return piVar2;
    }
    iVar4 = piVar2[2];
    iVar5 = iVar4 + 1;
    if (piVar2[1] < iVar5) {
      if (iVar5 < 0) {
        iVar5 = iVar4 + 2;
      }
      uVar6 = iVar4 + 9 + (iVar5 >> 1) & 0xfffffff8;
      if (piVar2[1] != uVar6) {
        if ((int)uVar6 < 1) {
          FID_conflict__free((void *)*piVar2);
          *piVar2 = 0;
        }
        else if (*piVar2 == 0) {
          iVar4 = FUN_004c554b();
          *piVar2 = iVar4;
        }
        else {
          iVar4 = FUN_004c553b(*piVar2,uVar6 * 4);
          *piVar2 = iVar4;
        }
        piVar2[1] = uVar6;
      }
    }
    iVar4 = piVar2[2];
    piVar2[2] = iVar4 + 1;
    piVar1 = (int *)(*piVar2 + iVar4 * 4);
    if (piVar1 != (int *)0x0) {
      *piVar1 = iVar3;
    }
    param_1 = (int *)*in_ECX;
    if (param_1 == (int *)0x0) {
      param_1 = in_ECX + 1;
    }
    do {
      iVar3 = iVar3 + 1;
      if (in_ECX[6] < iVar3) {
        return piVar2;
      }
    } while ((param_1[iVar3 >> 5] & 1 << ((byte)iVar3 & 0x1f)) == 0);
  } while( true );
}

