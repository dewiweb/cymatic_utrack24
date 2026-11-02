// rea decompile_all
// name: FUN_005e1120
// address: 0x5e1120
// body: available
// range: 0x5e1120-0x5e1344 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_005e1120(int param_1)

{
  int iVar1;
  int *_Dst;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int local_c;
  int *local_8;
  
  _Dst = (int *)FUN_004c5556(1,0xc88);
  iVar1 = *(int *)(param_1 + 0x1c);
  _memset(_Dst,0,0xc88);
  iVar2 = FUN_005eabc0();
  if (-1 < iVar2) {
    if (iVar2 == 0) {
      *_Dst = 1;
    }
    else {
      iVar2 = FUN_005eabc0();
      *_Dst = iVar2 + 1;
      if (iVar2 + 1 < 1) goto LAB_005e1178;
    }
    iVar2 = FUN_005eabc0();
    if (-1 < iVar2) {
      if (iVar2 != 0) {
        iVar2 = FUN_005eabc0();
        _Dst[0x121] = iVar2 + 1;
        if (iVar2 + 1 < 1) goto LAB_005e1178;
        local_8 = _Dst + 0x222;
        local_c = 0;
        do {
          if (*(int *)(param_1 + 4) != 0) {
            for (uVar3 = *(int *)(param_1 + 4) - 1; uVar3 != 0; uVar3 = uVar3 >> 1) {
            }
          }
          iVar2 = FUN_005eabc0();
          local_8[-0x100] = iVar2;
          if (*(int *)(param_1 + 4) != 0) {
            for (uVar3 = *(int *)(param_1 + 4) - 1; uVar3 != 0; uVar3 = uVar3 >> 1) {
            }
          }
          iVar4 = FUN_005eabc0();
          *local_8 = iVar4;
          if ((((iVar2 < 0) || (iVar4 < 0)) || (iVar2 == iVar4)) ||
             ((*(int *)(param_1 + 4) <= iVar2 || (*(int *)(param_1 + 4) <= iVar4))))
          goto LAB_005e1178;
          local_8 = local_8 + 1;
          local_c = local_c + 1;
        } while (local_c < _Dst[0x121]);
      }
      iVar2 = FUN_005eabc0();
      if (iVar2 == 0) {
        if ((1 < *_Dst) && (iVar2 = 0, piVar5 = _Dst, 0 < *(int *)(param_1 + 4))) {
          do {
            iVar4 = FUN_005eabc0();
            piVar5[1] = iVar4;
            if ((*_Dst <= iVar4) || (iVar4 < 0)) goto LAB_005e1178;
            iVar2 = iVar2 + 1;
            piVar5 = piVar5 + 1;
          } while (iVar2 < *(int *)(param_1 + 4));
        }
        iVar2 = 0;
        if (0 < *_Dst) {
          piVar5 = _Dst + 0x111;
          do {
            FUN_005eabc0();
            iVar4 = FUN_005eabc0();
            piVar5[-0x10] = iVar4;
            if ((*(int *)(iVar1 + 0x10) <= iVar4) || (iVar4 < 0)) goto LAB_005e1178;
            iVar4 = FUN_005eabc0();
            *piVar5 = iVar4;
            if ((*(int *)(iVar1 + 0x14) <= iVar4) || (iVar4 < 0)) goto LAB_005e1178;
            iVar2 = iVar2 + 1;
            piVar5 = piVar5 + 1;
          } while (iVar2 < *_Dst);
        }
        return _Dst;
      }
    }
  }
LAB_005e1178:
  if (_Dst != (int *)0x0) {
    _memset(_Dst,0,0xc88);
    FID_conflict__free(_Dst);
  }
  return (int *)0x0;
}

