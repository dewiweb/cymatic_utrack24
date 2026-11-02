// rea decompile_all
// name: FUN_004ab731
// address: 0x4ab731
// body: available
// range: 0x4ab731-0x4ab972 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ab731(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *_Dst;
  undefined1 *puVar7;
  undefined1 uVar8;
  undefined1 uVar10;
  uint uVar9;
  int *piVar11;
  uint *puVar12;
  int *unaff_ESI;
  int iVar13;
  undefined1 uStack_1e;
  int local_1c;
  int local_18;
  uint local_8;
  
  local_18 = 0;
  piVar11 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      iVar2 = *piVar11;
      if (0 < iVar2 + -1) {
        puVar12 = (uint *)(piVar11 + 1);
        uVar9 = *puVar12;
        iVar13 = 0;
        unaff_ESI[1] = (param_1[2] + local_18) * ((int *)*unaff_ESI)[2] + *(int *)*unaff_ESI;
        for (iVar2 = iVar2 + -2; iVar3 = (int)uVar9 >> 8, -1 < iVar2; iVar2 = iVar2 + -1) {
          uVar4 = puVar12[1];
          puVar12 = puVar12 + 2;
          uVar5 = *puVar12;
          if ((int)uVar5 >> 8 == iVar3) {
            iVar13 = iVar13 + (uVar5 - uVar9) * uVar4;
          }
          else {
            if (0 < (int)((0x100 - (uVar9 & 0xff)) * uVar4 + iVar13) >> 8) {
              puVar7 = (undefined1 *)(*(int *)(*unaff_ESI + 0xc) * iVar3 + unaff_ESI[1]);
              *puVar7 = (char)unaff_ESI[2];
              puVar7[1] = *(undefined1 *)((int)unaff_ESI + 9);
              puVar7[2] = *(undefined1 *)((int)unaff_ESI + 10);
            }
            if (0 < (int)uVar4) {
              local_8 = ((int)uVar5 >> 8) - (iVar3 + 1);
              if (0 < (int)local_8) {
                uVar9 = unaff_ESI[2];
                iVar13 = uVar4 + 1;
                uVar6 = (uVar9 >> 8 & 0xff00ff) * iVar13;
                uVar9 = ((uVar9 & 0xff00ff) * iVar13 >> 8 ^ (uVar9 >> 8 & 0xffff00ff) * iVar13) &
                        0xff00ff ^ uVar6;
                iVar13 = *(int *)(*unaff_ESI + 0xc);
                _Dst = (int *)(iVar13 * (iVar3 + 1) + unaff_ESI[1]);
                uVar8 = (undefined1)uVar9;
                uVar10 = (undefined1)(uVar6 >> 8);
                uStack_1e = (undefined1)(uVar9 >> 0x10);
                if (iVar13 == 3) {
                  if ((char)unaff_ESI[6] == '\0') {
                    if ((local_8 & 0xffffffe0) != 0) {
                      for (; (8 < (int)local_8 && (((uint)_Dst & 7) != 0));
                          _Dst = (int *)((int)_Dst + 3)) {
                        *(undefined1 *)_Dst = uVar8;
                        *(undefined1 *)((int)_Dst + 1) = uVar10;
                        *(undefined1 *)((int)_Dst + 2) = uStack_1e;
                        local_8 = local_8 - 1;
                      }
                      if (4 < (int)local_8) {
                        local_1c = (local_8 - 5 >> 2) + 1;
                        local_8 = local_8 + local_1c * -4;
                        do {
                          *_Dst = unaff_ESI[3];
                          _Dst[1] = unaff_ESI[4];
                          _Dst[2] = unaff_ESI[5];
                          _Dst = _Dst + 3;
                          local_1c = local_1c + -1;
                        } while (local_1c != 0);
                      }
                    }
                    while (local_8 = local_8 - 1, -1 < (int)local_8) {
                      *(undefined1 *)_Dst = uVar8;
                      *(undefined1 *)((int)_Dst + 1) = uVar10;
                      *(undefined1 *)((int)_Dst + 2) = uStack_1e;
                      _Dst = (int *)((int)_Dst + 3);
                    }
                  }
                  else {
                    _memset(_Dst,uVar9 >> 0x10 & 0xff,local_8 * 3);
                  }
                }
                else {
                  do {
                    *(undefined1 *)_Dst = uVar8;
                    *(undefined1 *)((int)_Dst + 1) = uVar10;
                    *(undefined1 *)((int)_Dst + 2) = uStack_1e;
                    _Dst = (int *)((int)_Dst + iVar13);
                    local_8 = local_8 - 1;
                  } while (0 < (int)local_8);
                }
              }
            }
            iVar13 = (uVar5 & 0xff) * uVar4;
          }
          uVar9 = uVar5;
        }
        if (0 < iVar13 >> 8) {
          puVar7 = (undefined1 *)(*(int *)(*unaff_ESI + 0xc) * iVar3 + unaff_ESI[1]);
          *puVar7 = (char)unaff_ESI[2];
          puVar7[1] = *(undefined1 *)((int)unaff_ESI + 9);
          puVar7[2] = *(undefined1 *)((int)unaff_ESI + 10);
        }
      }
      local_18 = local_18 + 1;
      piVar11 = piVar11 + iVar1;
    } while (local_18 < (int)param_1[4]);
  }
  return;
}

