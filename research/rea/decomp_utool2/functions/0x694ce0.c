// rea decompile_all
// name: FUN_00694ce0
// address: 0x694ce0
// body: available
// range: 0x694ce0-0x694ee8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00694ce0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  int *_Memory;
  _locale_t unaff_EDI;
  uint local_10;
  uint local_c;
  
  uVar3 = FUN_00692ed0();
  uVar6 = 0;
  if (*(byte *)(param_1 + 0x3c) < 4) {
    FUN_006e50e0(&local_10);
    iVar4 = FUN_00693140();
    uVar1 = local_10;
    for (; local_10 = uVar3, uVar2 = uVar3, (int)uVar3 < iVar4; uVar3 = uVar3 + 1) {
      FUN_0044ebd0(uVar3);
      uVar6 = FUN_00426f70();
      iVar5 = FID_conflict__iswalnum((wint_t)uVar6,unaff_EDI);
      if ((iVar5 == 0) && (uVar6 < 0x81)) break;
    }
    do {
      uVar6 = uVar2;
      if ((int)uVar6 < 1) break;
      local_c = uVar6 - 1;
      FUN_0044ebd0(local_c);
      local_10 = FUN_00426f70();
      iVar5 = FID_conflict__iswalnum((wint_t)local_10,unaff_EDI);
      uVar2 = local_c;
    } while ((iVar5 != 0) || (0x80 < local_10));
    local_10 = uVar6;
    if (2 < *(byte *)(param_1 + 0x3c)) {
      for (; uVar2 = local_10, (int)uVar3 < iVar4; uVar3 = uVar3 + 1) {
        FUN_0044ebd0(uVar3);
        iVar5 = FUN_00426f70();
        uVar2 = local_10;
        if ((iVar5 == 0xd) || (iVar5 == 10)) break;
      }
      do {
        uVar6 = uVar2;
        if ((int)uVar6 < 1) break;
        local_c = uVar6 - 1;
        local_10 = uVar1;
        FUN_0044ebd0(local_c);
        iVar4 = FUN_00426f70();
        if ((iVar4 == 0xd) || (uVar2 = local_c, iVar4 == 10)) break;
      } while( true );
    }
    _Memory = (int *)(uVar1 - 8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar4 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(_Memory);
      }
    }
  }
  else {
    uVar3 = FUN_00693140();
  }
  *(undefined4 *)(in_ECX + 0x148) = 0;
  FUN_00696620(*(undefined4 *)(in_ECX + 0xf4),*(undefined4 *)(in_ECX + 0xf8));
  FUN_00696590(uVar3);
  *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(in_ECX + 0x110);
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(in_ECX + 0x110);
  FUN_00696020(uVar6,1);
  return;
}

