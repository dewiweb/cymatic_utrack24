// rea decompile_all
// name: FUN_006065e0
// address: 0x6065e0
// body: available
// range: 0x6065e0-0x60667e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006065e0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  iVar2 = FUN_0062c730(*param_1,0,0);
  if (iVar2 < 0) {
    iVar2 = *(int *)(in_ECX + 0x30) + 1;
    if (*(int *)(in_ECX + 0x2c) < iVar2) {
      FUN_00409cf0(iVar2 / 2 + *(int *)(in_ECX + 0x30) + 9 & 0xfffffff8);
    }
    iVar2 = *(int *)(in_ECX + 0x30);
    *(int *)(in_ECX + 0x30) = iVar2 + 1;
    piVar3 = (int *)(*(int *)(in_ECX + 0x28) + iVar2 * 4);
    if (piVar3 != (int *)0x0) {
      iVar2 = *param_1;
      *piVar3 = iVar2;
      piVar3 = (int *)(iVar2 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
    }
    if (0 < *(int *)(in_ECX + 0x18)) {
      piVar3 = (int *)(*(int *)(in_ECX + 8) + 0xc);
      LOCK();
      iVar2 = *piVar3;
      if (iVar2 == 0) {
        *piVar3 = 1;
        iVar2 = 0;
      }
      UNLOCK();
      if ((iVar2 == 0) && (cVar1 = FUN_0063e270(), cVar1 == '\0')) {
        LOCK();
        *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc) = 0;
        UNLOCK();
      }
    }
  }
  return;
}

