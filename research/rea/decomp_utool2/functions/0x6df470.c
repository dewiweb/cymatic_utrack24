// rea decompile_all
// name: FUN_006df470
// address: 0x6df470
// body: available
// range: 0x6df470-0x6df540 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006df470(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  piVar1 = operator_new(0x20);
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[6] = 0;
  piVar1[7] = 0;
  *piVar1 = (int)&DAT_00bfe12c;
  piVar2 = (int *)(*param_1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  LOCK();
  iVar3 = *piVar1;
  *piVar1 = *param_1;
  UNLOCK();
  piVar2 = (int *)(iVar3 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  piVar1[1] = param_2;
  piVar1[3] = param_3;
  piVar1[4] = 200;
  piVar1[5] = 0x7fffffff;
  piVar1[2] = 3;
  *(double *)(piVar1 + 6) = (double)param_3;
  iVar3 = *(int *)(in_ECX + 0x80) + 1;
  if (*(int *)(in_ECX + 0x7c) < iVar3) {
    FUN_00409cf0(iVar3 / 2 + *(int *)(in_ECX + 0x80) + 9 & 0xfffffff8);
  }
  iVar3 = *(int *)(in_ECX + 0x80);
  *(int *)(in_ECX + 0x80) = iVar3 + 1;
  *(int **)(*(int *)(in_ECX + 0x78) + iVar3 * 4) = piVar1;
  FUN_00697c90();
  return;
}

