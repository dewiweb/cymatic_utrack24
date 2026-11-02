// rea decompile_all
// name: FUN_0059f740
// address: 0x59f740
// body: available
// range: 0x59f740-0x59f7ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059f740(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  
  uVar3 = 0;
  *in_ECX = ImportJob_MTSong::vftable;
  *(undefined1 *)(in_ECX + 0x1d) = 1;
  if (0 < (int)in_ECX[0x1c]) {
    bVar5 = in_ECX[0x1c] != 0;
    do {
      if (bVar5) {
        iVar2 = *(int *)(in_ECX[0x1a] + uVar3 * 4);
      }
      else {
        iVar2 = 0;
      }
      uVar3 = uVar3 + 1;
      *(undefined1 *)(iVar2 + 0x38) = 1;
      bVar5 = uVar3 < (uint)in_ECX[0x1c];
    } while ((int)uVar3 < (int)in_ECX[0x1c]);
  }
  FUN_00407640();
  if ((undefined4 *)in_ECX[0x27] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x27])(1);
  }
  puVar1 = (undefined4 *)in_ECX[0x26];
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar1 + 1;
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  piVar4 = (int *)(in_ECX[0x25] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(in_ECX[0x24] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_0059c820();
  return;
}

