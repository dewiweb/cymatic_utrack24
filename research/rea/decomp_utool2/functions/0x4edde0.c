// rea decompile_all
// name: FUN_004edde0
// address: 0x4edde0
// body: available
// range: 0x4edde0-0x4ede76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004edde0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  
  piVar2 = (int *)(*param_1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  LOCK();
  iVar3 = in_ECX[0x4e];
  in_ECX[0x4e] = *param_1;
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
  (**(code **)(*in_ECX + 0x24))(param_1);
  if (*(int *)(in_ECX[0x4d] + 0xc) == 0) {
    LOCK();
    iVar3 = *(int *)(in_ECX[0x4d] + 0xc);
    if (iVar3 == 0) {
      *(int *)(in_ECX[0x4d] + 0xc) = 1;
      iVar3 = 0;
    }
    UNLOCK();
    if ((iVar3 == 0) && (cVar1 = FUN_0063e270(), cVar1 == '\0')) {
      LOCK();
      *(undefined4 *)(in_ECX[0x4d] + 0xc) = 0;
      UNLOCK();
    }
  }
  return;
}

