// rea decompile_all
// name: FUN_00605c60
// address: 0x605c60
// body: available
// range: 0x605c60-0x605ce1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00605c60(void)

{
  int iVar1;
  undefined **ppuVar2;
  int *_Memory;
  uint uVar3;
  int iVar4;
  bool bVar5;
  void *local_10;
  uint local_8;
  
  FUN_00606330();
  uVar3 = 0;
  if (0 < (int)local_8) {
    bVar5 = local_8 != 0;
    do {
      if (bVar5) {
        ppuVar2 = (undefined **)((int)local_10 + uVar3 * 4);
      }
      else {
        ppuVar2 = &PTR_DAT_00c7ed68;
      }
      FUN_006065e0(ppuVar2);
      uVar3 = uVar3 + 1;
      bVar5 = uVar3 < local_8;
    } while ((int)uVar3 < (int)local_8);
  }
  iVar4 = 0;
  if (0 < (int)local_8) {
    do {
      _Memory = (int *)(*(int *)((int)local_10 + iVar4 * 4) + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar1 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)local_8);
  }
  FID_conflict__free(local_10);
  return;
}

