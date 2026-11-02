// rea decompile_all
// name: FUN_00454370
// address: 0x454370
// body: available
// range: 0x454370-0x4544d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00454370(int *param_1)

{
  int *_Memory;
  byte bVar1;
  undefined4 *puVar2;
  wint_t wVar3;
  _locale_t _Locale;
  int iVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  byte *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006fd610;
  local_10 = ExceptionList;
  _Locale = (_locale_t)(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  FUN_0045c2c0(**(undefined4 **)(in_ECX + 4));
  **(int **)(in_ECX + 4) = in_ECX;
  local_14 = (byte *)**(undefined4 **)(in_ECX + 4);
  wVar3 = FUN_00426f70();
  iVar4 = FID_conflict__iswalpha(wVar3);
  if ((iVar4 != 0) || (uVar5 = FUN_00426f70(), uVar5 == 0x5f)) {
    bVar1 = *local_14;
    local_14 = local_14 + 1;
    if ((char)bVar1 < '\0') {
      uVar5 = 0x40;
      if ((bVar1 & 0x40) != 0) {
        do {
          if (uVar5 < 9) break;
          uVar5 = uVar5 >> 1;
          local_14 = local_14 + 1;
        } while ((uVar5 & (int)(char)bVar1) != 0);
      }
    }
    iVar4 = 1;
    while( true ) {
      wVar3 = FUN_00426f70();
      iVar6 = FID_conflict__iswalnum(wVar3,_Locale);
      if ((iVar6 == 0) && (uVar5 = FUN_00426f70(), uVar5 != 0x5f)) break;
      bVar1 = *local_14;
      local_14 = local_14 + 1;
      if ((char)bVar1 < '\0') {
        uVar5 = 0x40;
        if ((bVar1 & 0x40) != 0) {
          do {
            if (uVar5 < 9) break;
            uVar5 = uVar5 >> 1;
            local_14 = local_14 + 1;
          } while ((uVar5 & (int)(char)bVar1) != 0);
        }
      }
      iVar4 = iVar4 + 1;
    }
    if (0 < iVar4) {
      FUN_0045cc40(**(undefined4 **)(in_ECX + 4));
      iVar4 = *param_1;
      *param_1 = (int)local_14;
      _Memory = (int *)(iVar4 + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar4 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      puVar2 = *(undefined4 **)(in_ECX + 4);
      *puVar2 = local_14;
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)puVar2 >> 8),1);
    }
  }
  ExceptionList = local_10;
  return uVar5 & 0xffffff00;
}

