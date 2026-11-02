// rea decompile_all
// name: FUN_004f8780
// address: 0x4f8780
// body: available
// range: 0x4f8780-0x4f887e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004f8780(int *param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  int local_18;
  int local_14;
  int local_c;
  
  iVar4 = 0;
  if (0 < *(int *)(in_ECX + 0x3dc)) {
    while( true ) {
      iVar2 = FUN_00410630(&local_18,iVar4);
      if (*(int *)(iVar2 + 4) == *param_1) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_0045c1e0(*(undefined4 *)(iVar2 + 4),*param_1);
      }
      piVar3 = (int *)(local_c + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      piVar3 = (int *)(local_14 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      piVar3 = (int *)(local_18 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      if (iVar2 == 0) break;
      iVar4 = iVar4 + 1;
      if (*(int *)(in_ECX + 0x3dc) <= iVar4) {
        return in_ECX + 0x3d4;
      }
    }
    in_EAX = FUN_006e83a0(iVar4 + 1,3);
  }
  return in_EAX;
}

