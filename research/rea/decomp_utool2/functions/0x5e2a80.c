// rea decompile_all
// name: FUN_005e2a80
// address: 0x5e2a80
// body: available
// range: 0x5e2a80-0x5e2ca7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e2a80(void)

{
  void *pvVar1;
  void *_Memory;
  undefined4 *_Memory_00;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int iVar3;
  int *piVar4;
  int local_8;
  
  _Memory = (void *)in_ECX[7];
  if (_Memory != (void *)0x0) {
    iVar3 = 0;
    if (0 < *(int *)((int)_Memory + 8)) {
      puVar2 = (undefined4 *)((int)_Memory + 0x20);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          FID_conflict__free((void *)*puVar2);
        }
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < *(int *)((int)_Memory + 8));
    }
    iVar3 = 0;
    if (0 < *(int *)((int)_Memory + 0xc)) {
      piVar4 = (int *)((int)_Memory + 0x220);
      do {
        if (*piVar4 != 0) {
          (**(code **)((&PTR_PTR_00b75304)[piVar4[-0x40]] + 8))(*piVar4);
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < *(int *)((int)_Memory + 0xc));
    }
    iVar3 = 0;
    if (0 < *(int *)((int)_Memory + 0x10)) {
      piVar4 = (int *)((int)_Memory + 0x420);
      do {
        if (*piVar4 != 0) {
          (**(code **)((&PTR_DAT_00b9c314)[piVar4[-0x40]] + 0xc))(*piVar4);
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < *(int *)((int)_Memory + 0x10));
    }
    iVar3 = 0;
    if (0 < *(int *)((int)_Memory + 0x14)) {
      piVar4 = (int *)((int)_Memory + 0x620);
      do {
        if (*piVar4 != 0) {
          (**(code **)((&PTR_DAT_00b16a2c)[piVar4[-0x40]] + 0xc))(*piVar4);
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < *(int *)((int)_Memory + 0x14));
    }
    iVar3 = 0;
    if (0 < *(int *)((int)_Memory + 0x18)) {
      puVar2 = (undefined4 *)((int)_Memory + 0x720);
      local_8 = 0;
      do {
        _Memory_00 = (undefined4 *)*puVar2;
        if ((_Memory_00 != (undefined4 *)0x0) && (_Memory_00[9] != 0)) {
          if ((void *)_Memory_00[8] != (void *)0x0) {
            FID_conflict__free((void *)_Memory_00[8]);
          }
          if ((void *)_Memory_00[2] != (void *)0x0) {
            FID_conflict__free((void *)_Memory_00[2]);
          }
          *_Memory_00 = 0;
          _Memory_00[1] = 0;
          _Memory_00[2] = 0;
          _Memory_00[3] = 0;
          _Memory_00[4] = 0;
          _Memory_00[5] = 0;
          _Memory_00[6] = 0;
          _Memory_00[7] = 0;
          *(undefined8 *)(_Memory_00 + 8) = 0;
          FID_conflict__free(_Memory_00);
        }
        if (*(int *)((int)_Memory + 0xb20) != 0) {
          pvVar1 = (void *)(local_8 + *(int *)((int)_Memory + 0xb20));
          if (*(void **)((int)pvVar1 + 0x10) != (void *)0x0) {
            FID_conflict__free(*(void **)((int)pvVar1 + 0x10));
          }
          if (*(void **)((int)pvVar1 + 0x14) != (void *)0x0) {
            FID_conflict__free(*(void **)((int)pvVar1 + 0x14));
          }
          if (*(void **)((int)pvVar1 + 0x18) != (void *)0x0) {
            FID_conflict__free(*(void **)((int)pvVar1 + 0x18));
          }
          if (*(void **)((int)pvVar1 + 0x1c) != (void *)0x0) {
            FID_conflict__free(*(void **)((int)pvVar1 + 0x1c));
          }
          if (*(void **)((int)pvVar1 + 0x20) != (void *)0x0) {
            FID_conflict__free(*(void **)((int)pvVar1 + 0x20));
          }
          _memset(pvVar1,0,0x38);
        }
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
        local_8 = local_8 + 0x38;
      } while (iVar3 < *(int *)((int)_Memory + 0x18));
    }
    if (*(void **)((int)_Memory + 0xb20) != (void *)0x0) {
      FID_conflict__free(*(void **)((int)_Memory + 0xb20));
    }
    iVar3 = 0;
    if (0 < *(int *)((int)_Memory + 0x1c)) {
      puVar2 = (undefined4 *)((int)_Memory + 0xb24);
      do {
        pvVar1 = (void *)*puVar2;
        if (pvVar1 != (void *)0x0) {
          _memset(pvVar1,0,0x208);
          FID_conflict__free(pvVar1);
        }
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < *(int *)((int)_Memory + 0x1c));
    }
    FID_conflict__free(_Memory);
  }
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  return;
}

