// rea decompile_all
// name: FUN_00519470
// address: 0x519470
// body: available
// range: 0x519470-0x51958e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00519470(int *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int *piVar3;
  
  if ((undefined *)*param_1 != PTR_DAT_00c7ed54) {
    iVar1 = FUN_0045c1e0(*param_1);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00518a30(param_1);
      if ((param_3 == '\0') && (piVar2 != (int *)0x0)) {
        FUN_006dff00(1,1);
        piVar3 = piVar2;
        do {
          FUN_006dffc0();
          piVar3 = (int *)piVar3[2];
        } while (piVar3 != (int *)0x0);
        FUN_006e08e0();
        (**(code **)(*piVar2 + 0x6c))();
        FUN_00635e10();
        *(undefined4 *)(in_ECX + 0x164) = 0;
      }
      else {
        piVar2 = (int *)(*param_1 + -8);
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
        LOCK();
        iVar1 = *(int *)(in_ECX + 0x160);
        *(int *)(in_ECX + 0x160) = *param_1;
        UNLOCK();
        piVar2 = (int *)(iVar1 + -8);
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar2);
          }
        }
        *(undefined4 *)(in_ECX + 0x164) = param_2;
      }
      if (*(undefined **)(in_ECX + 0x160) == PTR_DAT_00c7ed54) {
        return true;
      }
      iVar1 = FUN_0045c1e0(*(int *)(in_ECX + 0x160));
      return iVar1 == 0;
    }
  }
  return true;
}

