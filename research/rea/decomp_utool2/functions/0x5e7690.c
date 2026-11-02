// rea decompile_all
// name: FUN_005e7690
// address: 0x5e7690
// body: available
// range: 0x5e7690-0x5e7a1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_005e7690(void)

{
  uint *_Memory;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  uint uVar5;
  int iVar6;
  int local_8;
  
  _Memory = (uint *)FUN_004c5556(1,0x28);
  _Memory[9] = 1;
  iVar1 = FUN_005eabc0();
  if (iVar1 == 0x564342) {
    uVar2 = FUN_005eabc0();
    *_Memory = uVar2;
    uVar2 = FUN_005eabc0();
    _Memory[1] = uVar2;
    if (uVar2 != 0xffffffff) {
      iVar1 = 0;
      for (uVar5 = *_Memory; uVar5 != 0; uVar5 = uVar5 >> 1) {
        iVar1 = iVar1 + 1;
      }
      iVar6 = 0;
      for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
        iVar6 = iVar6 + 1;
      }
      if (iVar6 + iVar1 < 0x19) {
        iVar1 = FUN_005eabc0();
        if (iVar1 == 0) {
          iVar1 = FUN_005eabc0();
          if ((in_ECX[4] - ((int)(in_ECX[1] + 7 + (in_ECX[1] + 7 >> 0x1f & 7U)) >> 3)) - *in_ECX <
              (int)(((uint)(iVar1 == 0) * 4 + 1) * _Memory[1] + 7) >> 3) goto LAB_005e79d7;
          uVar2 = FUN_004c554b(_Memory[1] * 4);
          _Memory[2] = uVar2;
          if (iVar1 == 0) {
            iVar1 = 0;
            if (0 < (int)_Memory[1]) {
              do {
                iVar6 = FUN_005eabc0();
                if (iVar6 == -1) goto LAB_005e79d7;
                *(int *)(_Memory[2] + iVar1 * 4) = iVar6 + 1;
                iVar1 = iVar1 + 1;
              } while (iVar1 < (int)_Memory[1]);
            }
          }
          else {
            iVar1 = 0;
            if (0 < (int)_Memory[1]) {
              do {
                iVar6 = FUN_005eabc0();
                if (iVar6 == 0) {
                  *(undefined4 *)(_Memory[2] + iVar1 * 4) = 0;
                }
                else {
                  iVar6 = FUN_005eabc0();
                  if (iVar6 == -1) goto LAB_005e79d7;
                  *(int *)(_Memory[2] + iVar1 * 4) = iVar6 + 1;
                }
                iVar1 = iVar1 + 1;
              } while (iVar1 < (int)_Memory[1]);
            }
          }
        }
        else {
          if (iVar1 != 1) goto LAB_005e79d7;
          local_8 = FUN_005eabc0();
          iVar1 = local_8 + 1;
          if (iVar1 == 0) goto LAB_005e79d7;
          uVar2 = FUN_004c554b(_Memory[1] << 2);
          iVar6 = 0;
          _Memory[2] = uVar2;
          if (0 < (int)_Memory[1]) {
            do {
              for (uVar2 = _Memory[1] - iVar6; uVar2 != 0; uVar2 = uVar2 >> 1) {
              }
              iVar3 = FUN_005eabc0();
              if (((iVar3 == -1) || (0x1f < local_8)) || ((int)(_Memory[1] - iVar6) < iVar3))
              goto LAB_005e79d7;
              if (0 < iVar3) {
                if (1 < iVar3 + -1 >> ((byte)local_8 & 0x1f)) goto LAB_005e79d7;
                if (0 < iVar3) {
                  do {
                    *(int *)(_Memory[2] + iVar6 * 4) = iVar1;
                    iVar6 = iVar6 + 1;
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                }
              }
              local_8 = local_8 + 1;
              iVar1 = iVar1 + 1;
            } while (iVar6 < (int)_Memory[1]);
          }
        }
        uVar2 = FUN_005eabc0();
        _Memory[3] = uVar2;
        if (uVar2 == 0) {
          return _Memory;
        }
        if (uVar2 - 1 < 2) {
          uVar2 = FUN_005eabc0();
          _Memory[4] = uVar2;
          uVar2 = FUN_005eabc0();
          _Memory[5] = uVar2;
          iVar1 = FUN_005eabc0();
          _Memory[6] = iVar1 + 1;
          uVar2 = FUN_005eabc0();
          _Memory[7] = uVar2;
          if (uVar2 != 0xffffffff) {
            local_8 = 0;
            if (_Memory[3] == 1) {
              if (*_Memory == 0) {
                local_8 = 0;
              }
              else {
                local_8 = FUN_005d9760();
              }
            }
            else if (_Memory[3] == 2) {
              local_8 = *_Memory * _Memory[1];
            }
            if ((int)(_Memory[6] * local_8 + 7) >> 3 <=
                (in_ECX[4] - ((int)(in_ECX[1] + 7 + (in_ECX[1] + 7 >> 0x1f & 7U)) >> 3)) - *in_ECX)
            {
              uVar2 = FUN_004c554b(local_8 * 4);
              _Memory[8] = uVar2;
              iVar1 = 0;
              if (0 < local_8) {
                do {
                  uVar4 = FUN_005eabc0();
                  *(undefined4 *)(_Memory[8] + iVar1 * 4) = uVar4;
                  iVar1 = iVar1 + 1;
                } while (iVar1 < local_8);
              }
              if (local_8 == 0) {
                return _Memory;
              }
              if (*(int *)(local_8 * 4 + -4 + _Memory[8]) != -1) {
                return _Memory;
              }
            }
          }
        }
      }
    }
  }
LAB_005e79d7:
  if (_Memory[9] != 0) {
    if ((void *)_Memory[8] != (void *)0x0) {
      FID_conflict__free((void *)_Memory[8]);
    }
    if ((void *)_Memory[2] != (void *)0x0) {
      FID_conflict__free((void *)_Memory[2]);
    }
    *_Memory = 0;
    _Memory[1] = 0;
    _Memory[2] = 0;
    _Memory[3] = 0;
    _Memory[4] = 0;
    _Memory[5] = 0;
    _Memory[6] = 0;
    _Memory[7] = 0;
    _Memory[8] = 0;
    _Memory[9] = 0;
    FID_conflict__free(_Memory);
  }
  return (uint *)0x0;
}

