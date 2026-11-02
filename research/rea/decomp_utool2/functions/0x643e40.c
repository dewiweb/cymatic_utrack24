// rea decompile_all
// name: FUN_00643e40
// address: 0x643e40
// body: available
// range: 0x643e40-0x643edc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00643e40(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  
  if (*param_1 != *(int *)(*in_ECX + 0xc)) {
    iVar3 = FUN_00448730(*param_1);
    if (iVar3 != 0) {
      FUN_00644020();
      iVar3 = *in_ECX;
      piVar4 = (int *)(*param_1 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      LOCK();
      iVar1 = *(int *)(iVar3 + 0xc);
      *(int *)(iVar3 + 0xc) = *param_1;
      UNLOCK();
      piVar4 = (int *)(iVar1 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      puVar2 = *(undefined4 **)(*in_ECX + 8);
      if (puVar2 != (undefined4 *)0x0) {
        *(undefined4 *)(*in_ECX + 8) = 0;
        LOCK();
        piVar4 = puVar2 + 1;
        iVar3 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)*puVar2)();
        }
      }
      *(undefined4 *)(*in_ECX + 0x20) = 0;
    }
  }
  return;
}

