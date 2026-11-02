// rea decompile_all
// name: FUN_0052d800
// address: 0x52d800
// body: available
// range: 0x52d800-0x52d8ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052d800(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar3;
  
  if ((undefined *)*param_1 != PTR_DAT_00c7ed54) {
    iVar1 = FUN_0045c1e0(*param_1,PTR_DAT_00c7ed54);
    if (iVar1 != 0) {
      if (param_2 == '\0') {
        iVar1 = FUN_0052d970(param_1,extraout_ECX);
        if (iVar1 != 0) {
          FUN_006dff00(1,1,extraout_ECX_00);
          iVar3 = iVar1;
          do {
            FUN_006dffc0(2);
            iVar3 = *(int *)(iVar3 + 8);
          } while (iVar3 != 0);
          FUN_006e08e0(iVar1);
          FUN_00635e10(&PTR_DAT_00c7ed54);
        }
      }
      else {
        piVar2 = (int *)(*param_1 + -8);
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
        LOCK();
        iVar1 = *(int *)(in_ECX + 0xf0);
        *(int *)(in_ECX + 0xf0) = *param_1;
        UNLOCK();
        piVar2 = (int *)(iVar1 + -8);
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar2);
            return;
          }
        }
      }
    }
  }
  return;
}

