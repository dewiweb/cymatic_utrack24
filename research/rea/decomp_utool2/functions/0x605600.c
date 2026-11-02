// rea decompile_all
// name: FUN_00605600
// address: 0x605600
// body: available
// range: 0x605600-0x6056a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00605600(void)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  int *piVar6;
  
  uVar1 = *(uint *)(*(int *)(in_ECX + 0x80) + 0x24);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    if (uVar1 < *(uint *)(*(int *)(in_ECX + 0x80) + 0x24)) {
      uVar4 = *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x80) + 0x1c) + uVar1 * 4);
    }
    else {
      uVar4 = 0;
    }
    cVar3 = FUN_0060a780(uVar4);
    if (cVar3 == '\0') {
      iVar2 = *(int *)(in_ECX + 0x80);
      EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x50));
      FUN_00447650(uVar1,extraout_ECX);
      LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x50));
      if (0 < *(int *)(iVar2 + 0x18)) {
        piVar6 = (int *)(*(int *)(iVar2 + 8) + 0xc);
        LOCK();
        iVar5 = *piVar6;
        if (iVar5 == 0) {
          *piVar6 = 1;
          iVar5 = 0;
        }
        UNLOCK();
        if ((iVar5 == 0) && (cVar3 = FUN_0063e270(), cVar3 == '\0')) {
          LOCK();
          *(undefined4 *)(*(int *)(iVar2 + 8) + 0xc) = 0;
          UNLOCK();
        }
      }
    }
  }
  return;
}

