// rea decompile_all
// name: FUN_00631980
// address: 0x631980
// body: available
// range: 0x631980-0x631a43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00631980(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  
  iVar1 = FUN_0062c730(*param_1,(char)in_ECX[6],0);
  if (-1 < iVar1) {
    FUN_00459080(iVar1,param_2);
    return;
  }
  iVar1 = in_ECX[2] + 1;
  if (in_ECX[1] < iVar1) {
    FUN_00409cf0(iVar1 / 2 + in_ECX[2] + 9 & 0xfffffff8);
  }
  iVar1 = in_ECX[2];
  in_ECX[2] = iVar1 + 1;
  piVar2 = (int *)(*in_ECX + iVar1 * 4);
  if (piVar2 != (int *)0x0) {
    iVar1 = *param_1;
    *piVar2 = iVar1;
    piVar2 = (int *)(iVar1 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  iVar1 = in_ECX[5] + 1;
  if (in_ECX[4] < iVar1) {
    FUN_00409cf0(iVar1 / 2 + in_ECX[5] + 9 & 0xfffffff8);
  }
  iVar1 = in_ECX[5];
  in_ECX[5] = iVar1 + 1;
  piVar2 = (int *)(in_ECX[3] + iVar1 * 4);
  if (piVar2 != (int *)0x0) {
    iVar1 = *param_2;
    *piVar2 = iVar1;
    piVar2 = (int *)(iVar1 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  return;
}

