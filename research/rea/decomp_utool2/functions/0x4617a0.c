// rea decompile_all
// name: FUN_004617a0
// address: 0x4617a0
// body: available
// range: 0x4617a0-0x46184d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004617a0(int *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined **ppuVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)(in_ECX + 0x20)) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x18) + iVar6 * 4);
      piVar5 = *(int **)(iVar2 + 0xc);
      piVar1 = piVar5 + *(int *)(iVar2 + 0x14) * 6;
      if (piVar5 != piVar1) {
        do {
          if (*piVar5 == *param_2) {
            ppuVar4 = (undefined **)(piVar5 + 2);
            if (ppuVar4 != (undefined **)0x0) goto LAB_004617f9;
            break;
          }
          piVar5 = piVar5 + 6;
        } while (piVar5 != piVar1);
      }
      ppuVar4 = &PTR_PTR_00c7ed58;
LAB_004617f9:
      cVar3 = (**(code **)(*(int *)*ppuVar4 + 0x5c))(ppuVar4 + 2,param_3 + 2,*param_3);
      if (cVar3 != '\0') {
        *param_1 = iVar2;
        if (iVar2 != 0) {
          LOCK();
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
          UNLOCK();
        }
        goto LAB_00461821;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(in_ECX + 0x20));
  }
  *param_1 = 0;
LAB_00461821:
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

