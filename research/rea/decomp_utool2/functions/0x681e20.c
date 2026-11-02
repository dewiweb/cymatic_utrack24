// rea decompile_all
// name: FUN_00681e20
// address: 0x681e20
// body: available
// range: 0x681e20-0x681ed2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00681e20(int *param_1)

{
  int iVar1;
  void *_Memory;
  int *piVar2;
  int *in_ECX;
  int local_10;
  int local_c;
  int local_8;
  
  if (in_ECX != param_1) {
    piVar2 = (int *)(*param_1 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    LOCK();
    iVar1 = *in_ECX;
    *in_ECX = *param_1;
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
    piVar2 = in_ECX + 5;
    in_ECX[1] = param_1[1];
    in_ECX[2] = param_1[2];
    in_ECX[3] = param_1[3];
    in_ECX[4] = param_1[4];
    if (piVar2 != param_1 + 5) {
      FUN_0046e8e0(param_1 + 5);
      _Memory = (void *)*piVar2;
      *piVar2 = local_10;
      in_ECX[6] = local_c;
      in_ECX[7] = local_8;
      FUN_00471bf0();
      FID_conflict__free(_Memory);
    }
  }
  return;
}

