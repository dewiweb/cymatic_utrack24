// rea decompile_all
// name: FUN_00631ef0
// address: 0x631ef0
// body: available
// range: 0x631ef0-0x63201b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00631ef0(int *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  void *local_10;
  int local_c;
  int local_8;
  
  piVar4 = (int *)(*param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *in_ECX;
  *in_ECX = *param_1;
  UNLOCK();
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_00624540(param_1 + 1);
  if (in_ECX + 3 != param_1 + 3) {
    FUN_0041b050(param_1 + 3);
    pvVar2 = (void *)in_ECX[3];
    in_ECX[3] = (int)local_10;
    iVar1 = in_ECX[4];
    in_ECX[4] = local_c;
    iVar3 = in_ECX[5];
    in_ECX[5] = local_8;
    FUN_0040f7f0();
    FID_conflict__free(pvVar2);
    local_10 = pvVar2;
    local_c = iVar1;
    local_8 = iVar3;
  }
  if (in_ECX + 6 != param_1 + 6) {
    FUN_0041b050(param_1 + 6);
    pvVar2 = (void *)in_ECX[6];
    in_ECX[6] = (int)local_10;
    iVar1 = in_ECX[7];
    in_ECX[7] = local_c;
    iVar3 = in_ECX[8];
    in_ECX[8] = local_8;
    FUN_0040f7f0();
    FID_conflict__free(pvVar2);
    local_10 = pvVar2;
    local_c = iVar1;
    local_8 = iVar3;
  }
  FUN_00458b60(param_1 + 9);
  pvVar2 = (void *)in_ECX[9];
  in_ECX[9] = (int)local_10;
  in_ECX[10] = local_c;
  in_ECX[0xb] = local_8;
  FUN_00415180();
  FID_conflict__free(pvVar2);
  return;
}

