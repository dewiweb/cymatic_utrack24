// rea decompile_all
// name: FUN_005e8a50
// address: 0x5e8a50
// body: available
// range: 0x5e8a50-0x5e8cf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e8a50(void)

{
  int *piVar1;
  int iVar2;
  int *_Memory;
  undefined4 *_Memory_00;
  void *_Memory_01;
  void *in_ECX;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (in_ECX != (void *)0x0) {
    iVar2 = *(int *)((int)in_ECX + 4);
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar2 + 0x1c);
    }
    _Memory = *(int **)((int)in_ECX + 0x68);
    if (_Memory != (int *)0x0) {
      if (*_Memory != 0) {
        FUN_005e68b0();
        FID_conflict__free((void *)*_Memory);
      }
      if (_Memory[3] != 0) {
        FUN_005df400();
        FID_conflict__free(*(void **)_Memory[3]);
        FID_conflict__free((void *)_Memory[3]);
      }
      if (_Memory[4] != 0) {
        FUN_005df400();
        FID_conflict__free(*(void **)_Memory[4]);
        FID_conflict__free((void *)_Memory[4]);
      }
      if (_Memory[0xc] != 0) {
        if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0x10))) {
          iVar3 = 0;
          do {
            (**(code **)((&PTR_DAT_00b9c314)[*(int *)(iVar4 + 800 + iVar3 * 4)] + 0x10))
                      (*(undefined4 *)(_Memory[0xc] + iVar3 * 4));
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(iVar4 + 0x10));
        }
        FID_conflict__free((void *)_Memory[0xc]);
      }
      if (_Memory[0xd] != 0) {
        if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0x14))) {
          iVar3 = 0;
          do {
            (**(code **)((&PTR_DAT_00b16a2c)[*(int *)(iVar4 + 0x520 + iVar3 * 4)] + 0x10))
                      (*(undefined4 *)(_Memory[0xd] + iVar3 * 4));
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(iVar4 + 0x14));
        }
        FID_conflict__free((void *)_Memory[0xd]);
      }
      if (_Memory[0xe] != 0) {
        if ((iVar4 != 0) && (local_10 = 0, 0 < *(int *)(iVar4 + 0x1c))) {
          do {
            FUN_005dd6f0();
            local_10 = local_10 + 1;
          } while (local_10 < *(int *)(iVar4 + 0x1c));
        }
        FID_conflict__free((void *)_Memory[0xe]);
      }
      _Memory_00 = (undefined4 *)_Memory[0xf];
      if (_Memory_00 != (undefined4 *)0x0) {
        *_Memory_00 = 0;
        _Memory_00[1] = 0;
        _Memory_00[2] = 0;
        _Memory_00[3] = 0;
        _Memory_00[4] = 0;
        _Memory_00[5] = 0;
        _Memory_00[6] = 0;
        _Memory_00[7] = 0;
        _Memory_00[8] = 0;
        FID_conflict__free(_Memory_00);
      }
      _memset(_Memory + 0x14,0,0x30);
      piVar1 = _Memory + 5;
      if (piVar1 != (int *)0x0) {
        if ((void *)_Memory[6] != (void *)0x0) {
          FID_conflict__free((void *)_Memory[6]);
        }
        if ((void *)_Memory[7] != (void *)0x0) {
          FID_conflict__free((void *)_Memory[7]);
        }
        piVar1[0] = 0;
        piVar1[1] = 0;
        _Memory[7] = 0;
      }
      piVar1 = _Memory + 8;
      if (piVar1 != (int *)0x0) {
        if ((void *)_Memory[9] != (void *)0x0) {
          FID_conflict__free((void *)_Memory[9]);
        }
        if ((void *)_Memory[10] != (void *)0x0) {
          FID_conflict__free((void *)_Memory[10]);
        }
        piVar1[0] = 0;
        piVar1[1] = 0;
        _Memory[10] = 0;
      }
    }
    if (*(int *)((int)in_ECX + 8) != 0) {
      if ((iVar2 != 0) && (iVar4 = 0, 0 < *(int *)(iVar2 + 4))) {
        do {
          _Memory_01 = *(void **)(*(int *)((int)in_ECX + 8) + iVar4 * 4);
          if (_Memory_01 != (void *)0x0) {
            FID_conflict__free(_Memory_01);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar2 + 4));
      }
      FID_conflict__free(*(void **)((int)in_ECX + 8));
      if (*(void **)((int)in_ECX + 0xc) != (void *)0x0) {
        FID_conflict__free(*(void **)((int)in_ECX + 0xc));
      }
    }
    if (_Memory != (int *)0x0) {
      if ((void *)_Memory[0x10] != (void *)0x0) {
        FID_conflict__free((void *)_Memory[0x10]);
      }
      if ((void *)_Memory[0x11] != (void *)0x0) {
        FID_conflict__free((void *)_Memory[0x11]);
      }
      if ((void *)_Memory[0x12] != (void *)0x0) {
        FID_conflict__free((void *)_Memory[0x12]);
      }
      FID_conflict__free(_Memory);
    }
    _memset(in_ECX,0,0x70);
  }
  return;
}

