// rea decompile_all
// name: FUN_005f71e0
// address: 0x5f71e0
// body: available
// range: 0x5f71e0-0x5f74fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_005f71e0(void)

{
  int *_Memory;
  int iVar1;
  undefined4 uVar2;
  void *_Memory_00;
  
  _Memory = (int *)FUN_004c5556(1,8);
  if (_Memory != (int *)0x0) {
    iVar1 = FUN_004c5556(1,0x20);
    *_Memory = iVar1;
    if (iVar1 != 0) {
      iVar1 = FUN_004c5556(1,0x17f8);
      _Memory[1] = iVar1;
      if (iVar1 == 0) {
        FID_conflict__free((void *)*_Memory);
        FID_conflict__free(_Memory);
        return (int *)0x0;
      }
      uVar2 = FUN_004c5556(1,0x28);
      *(undefined4 *)(_Memory[1] + 0x34) = uVar2;
      _Memory_00 = (void *)_Memory[1];
      if (*(int *)((int)_Memory_00 + 0x34) != 0) {
        *(undefined4 *)((int)_Memory_00 + 0x460) = 0x10;
        iVar1 = FUN_004c554b(*(int *)(_Memory[1] + 0x460) << 2);
        *(int *)(_Memory[1] + 0x458) = iVar1;
        if (iVar1 != 0) {
          *(undefined4 *)(_Memory[1] + 0x38) = 0;
          *(undefined4 *)(_Memory[1] + 0x58) = 0;
          *(undefined4 *)(_Memory[1] + 0xdf4) = 0;
          *(undefined4 *)(_Memory[1] + 0x3c) = 0;
          *(undefined4 *)(_Memory[1] + 0x5c) = 0;
          *(undefined4 *)(_Memory[1] + 0xdf8) = 0;
          *(undefined4 *)(_Memory[1] + 0x40) = 0;
          *(undefined4 *)(_Memory[1] + 0x60) = 0;
          *(undefined4 *)(_Memory[1] + 0xdfc) = 0;
          *(undefined4 *)(_Memory[1] + 0x44) = 0;
          *(undefined4 *)(_Memory[1] + 100) = 0;
          *(undefined4 *)(_Memory[1] + 0xe00) = 0;
          *(undefined4 *)(_Memory[1] + 0x48) = 0;
          *(undefined4 *)(_Memory[1] + 0x68) = 0;
          *(undefined4 *)(_Memory[1] + 0xe04) = 0;
          *(undefined4 *)(_Memory[1] + 0x4c) = 0;
          *(undefined4 *)(_Memory[1] + 0x6c) = 0;
          *(undefined4 *)(_Memory[1] + 0xe08) = 0;
          *(undefined4 *)(_Memory[1] + 0x50) = 0;
          *(undefined4 *)(_Memory[1] + 0x70) = 0;
          *(undefined4 *)(_Memory[1] + 0xe0c) = 0;
          *(undefined4 *)(_Memory[1] + 0x54) = 0;
          *(undefined4 *)(_Memory[1] + 0x74) = 0;
          *(undefined4 *)(_Memory[1] + 0xe10) = 0;
          *(undefined4 *)(_Memory[1] + 0xd8) = 0;
          *(undefined4 *)(_Memory[1] + 0xdc) = 0;
          *(undefined4 *)(_Memory[1] + 0xf4) = 0;
          iVar1 = _Memory[1];
          *(undefined4 *)(iVar1 + 0x78) = 0;
          *(undefined4 *)(iVar1 + 0x7c) = 0;
          *(undefined4 *)(iVar1 + 0x80) = 0;
          iVar1 = _Memory[1];
          *(undefined4 *)(iVar1 + 0x84) = 0;
          *(undefined4 *)(iVar1 + 0x88) = 0;
          *(undefined4 *)(iVar1 + 0x8c) = 0;
          iVar1 = _Memory[1];
          *(undefined4 *)(iVar1 + 0x90) = 0;
          *(undefined4 *)(iVar1 + 0x94) = 0;
          *(undefined4 *)(iVar1 + 0x98) = 0;
          iVar1 = _Memory[1];
          *(undefined4 *)(iVar1 + 0x9c) = 0;
          *(undefined4 *)(iVar1 + 0xa0) = 0;
          *(undefined4 *)(iVar1 + 0xa4) = 0;
          iVar1 = _Memory[1];
          *(undefined4 *)(iVar1 + 0xa8) = 0;
          *(undefined4 *)(iVar1 + 0xac) = 0;
          *(undefined4 *)(iVar1 + 0xb0) = 0;
          iVar1 = _Memory[1];
          *(undefined4 *)(iVar1 + 0xb4) = 0;
          *(undefined4 *)(iVar1 + 0xb8) = 0;
          *(undefined4 *)(iVar1 + 0xbc) = 0;
          iVar1 = _Memory[1];
          *(undefined4 *)(iVar1 + 0xc0) = 0;
          *(undefined4 *)(iVar1 + 0xc4) = 0;
          *(undefined4 *)(iVar1 + 200) = 0;
          iVar1 = _Memory[1];
          *(undefined4 *)(iVar1 + 0xcc) = 0;
          *(undefined4 *)(iVar1 + 0xd0) = 0;
          *(undefined4 *)(iVar1 + 0xd4) = 0;
          *(undefined4 *)(_Memory[1] + 0x30) = 0;
          FUN_005f6810();
          *(undefined4 *)*_Memory = 9;
          return _Memory;
        }
        FUN_005ff190();
        _Memory_00 = (void *)_Memory[1];
      }
      FID_conflict__free(_Memory_00);
      FID_conflict__free((void *)*_Memory);
      FID_conflict__free(_Memory);
      return (int *)0x0;
    }
    FID_conflict__free(_Memory);
  }
  return (int *)0x0;
}

