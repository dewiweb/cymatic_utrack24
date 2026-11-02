// rea decompile_all
// name: FUN_00688b80
// address: 0x688b80
// body: available
// range: 0x688b80-0x688c4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00688b80(int param_1,uint param_2)

{
  char cVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar3 = *(int *)(in_ECX + 0x30) + -1;
  if (-1 < iVar3) {
    puVar6 = (undefined4 *)(*(int *)(in_ECX + 0x28) + iVar3 * 4);
    while (*(int *)*puVar6 != param_1) {
      puVar6 = puVar6 + -1;
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return;
      }
    }
    iVar3 = *(int *)(*(int *)(in_ECX + 0x28) + iVar3 * 4);
    if (param_2 < *(uint *)(iVar3 + 0xc)) {
      iVar4 = *(uint *)(iVar3 + 0xc) - 1;
      *(int *)(iVar3 + 0xc) = iVar4;
      iVar4 = iVar4 - param_2;
      iVar5 = *(int *)(iVar3 + 4) + param_2 * 0xc;
      if (0 < iVar4) {
        FUN_004c1df0(iVar5,iVar5 + 0xc,iVar4 * 0xc);
      }
      iVar5 = *(int *)(iVar3 + 0xc);
      iVar4 = 0;
      if (0 < iVar5 * 2) {
        iVar4 = iVar5 * 2;
      }
      if (iVar4 < *(int *)(iVar3 + 8)) {
        if (iVar5 < 5) {
          iVar5 = 5;
        }
        if (iVar5 < *(int *)(iVar3 + 8)) {
          FUN_0041c930(iVar5);
        }
      }
    }
    if (0 < *(int *)(in_ECX + 0x1c)) {
      piVar2 = (int *)(*(int *)(in_ECX + 0xc) + 0xc);
      LOCK();
      iVar3 = *piVar2;
      if (iVar3 == 0) {
        *piVar2 = 1;
        iVar3 = 0;
      }
      UNLOCK();
      if ((iVar3 == 0) && (cVar1 = FUN_0063e270(), cVar1 == '\0')) {
        LOCK();
        *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0xc) = 0;
        UNLOCK();
      }
    }
  }
  return;
}

