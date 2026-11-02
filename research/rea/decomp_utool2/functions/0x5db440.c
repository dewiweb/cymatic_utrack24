// rea decompile_all
// name: FUN_005db440
// address: 0x5db440
// body: available
// range: 0x5db440-0x5db5ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_005db440(int param_1)

{
  undefined4 *_Dst;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint *local_10;
  int local_c;
  
  iVar7 = 0;
  _Dst = (undefined4 *)FUN_004c5556(1,0xb18);
  iVar5 = *(int *)(param_1 + 0x1c);
  uVar1 = FUN_005eabc0();
  *_Dst = uVar1;
  uVar1 = FUN_005eabc0();
  _Dst[1] = uVar1;
  iVar2 = FUN_005eabc0();
  _Dst[2] = iVar2 + 1;
  iVar2 = FUN_005eabc0();
  _Dst[3] = iVar2 + 1;
  iVar2 = FUN_005eabc0();
  _Dst[5] = iVar2;
  if (-1 < iVar2) {
    local_c = 0;
    if (0 < (int)_Dst[3]) {
      local_10 = _Dst + 6;
      do {
        uVar3 = FUN_005eabc0();
        iVar2 = FUN_005eabc0();
        if (iVar2 < 0) goto LAB_005db5d1;
        if (iVar2 != 0) {
          iVar2 = FUN_005eabc0();
          if (iVar2 < 0) goto LAB_005db5d1;
          uVar3 = uVar3 | iVar2 << 3;
        }
        iVar2 = 0;
        *local_10 = uVar3;
        for (; uVar3 != 0; uVar3 = uVar3 >> 1) {
          iVar2 = iVar2 + (uVar3 & 1);
        }
        local_10 = local_10 + 1;
        local_c = local_c + 1;
        iVar7 = iVar7 + iVar2;
      } while (local_c < (int)_Dst[3]);
    }
    iVar2 = 0;
    if (0 < iVar7) {
      piVar6 = _Dst + 0x46;
      do {
        iVar4 = FUN_005eabc0();
        if (iVar4 < 0) goto LAB_005db5d1;
        *piVar6 = iVar4;
        iVar2 = iVar2 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar2 < iVar7);
    }
    iVar2 = _Dst[5];
    if (iVar2 < *(int *)(iVar5 + 0x18)) {
      iVar4 = 0;
      if (0 < iVar7) {
        piVar6 = _Dst + 0x46;
        do {
          if ((*(int *)(iVar5 + 0x18) <= *piVar6) ||
             (*(int *)(*(int *)(iVar5 + 0x720 + *piVar6 * 4) + 0xc) == 0)) goto LAB_005db5d1;
          iVar4 = iVar4 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar4 < iVar7);
        iVar2 = _Dst[5];
      }
      iVar7 = 1;
      piVar6 = *(int **)(iVar5 + 0x720 + iVar2 * 4);
      iVar5 = *piVar6;
      iVar2 = piVar6[1];
      if (0 < iVar5) {
        while (iVar7 = iVar7 * _Dst[3], iVar7 - iVar2 == 0 || iVar7 < iVar2) {
          iVar5 = iVar5 + -1;
          if (iVar5 < 1) {
            _Dst[4] = iVar7;
            return _Dst;
          }
        }
      }
    }
  }
LAB_005db5d1:
  _memset(_Dst,0,0xb18);
  FID_conflict__free(_Dst);
  return (undefined4 *)0x0;
}

