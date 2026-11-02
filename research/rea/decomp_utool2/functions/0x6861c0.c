// rea decompile_all
// name: FUN_006861c0
// address: 0x6861c0
// body: available
// range: 0x6861c0-0x68628e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HGLOBAL FUN_006861c0(void)

{
  int iVar1;
  HGLOBAL hMem;
  undefined4 *puVar2;
  undefined **ppuVar3;
  int *in_ECX;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  bool bVar7;
  
  iVar4 = 0;
  uVar6 = in_ECX[2];
  while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
    if (uVar6 < (uint)in_ECX[2]) {
      ppuVar3 = (undefined **)(*in_ECX + uVar6 * 4);
    }
    else {
      ppuVar3 = &PTR_DAT_00c7ed68;
    }
    iVar1 = FUN_0045d6b0(*ppuVar3);
    iVar4 = iVar4 + 2 + iVar1;
  }
  hMem = GlobalAlloc(0x42,iVar4 + 0x18);
  if (hMem != (HGLOBAL)0x0) {
    puVar2 = GlobalLock(hMem);
    uVar6 = 0;
    *puVar2 = 0x14;
    puVar5 = puVar2 + 5;
    puVar2[4] = 1;
    if (0 < in_ECX[2]) {
      bVar7 = in_ECX[2] != 0;
      do {
        if (bVar7) {
          ppuVar3 = (undefined **)(*in_ECX + uVar6 * 4);
        }
        else {
          ppuVar3 = &PTR_DAT_00c7ed68;
        }
        if (puVar5 == (undefined4 *)0x0) {
          iVar4 = FUN_0045d6b0();
          iVar4 = iVar4 + 2;
        }
        else {
          iVar4 = FUN_0045e270(*ppuVar3);
        }
        puVar5 = (undefined4 *)((int)puVar5 + iVar4);
        uVar6 = uVar6 + 1;
        bVar7 = uVar6 < (uint)in_ECX[2];
      } while ((int)uVar6 < in_ECX[2]);
    }
    *(undefined2 *)puVar5 = 0;
    GlobalUnlock(hMem);
  }
  return hMem;
}

