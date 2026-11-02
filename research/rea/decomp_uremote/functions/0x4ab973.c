// rea decompile_all
// name: FUN_004ab973
// address: 0x4ab973
// body: available
// range: 0x4ab973-0x4abd90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ab973(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar7;
  int *piVar5;
  byte *pbVar6;
  uint uVar8;
  int *_Dst;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *unaff_EDI;
  uint *local_28;
  byte local_20;
  undefined1 uStack_1e;
  int local_1c;
  int local_18;
  int local_10;
  uint local_8;
  
  local_1c = 0;
  piVar5 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_18 = *piVar5 + -1;
      if (0 < local_18) {
        local_8 = 0;
        local_28 = (uint *)(piVar5 + 1);
        uVar9 = *local_28;
        unaff_EDI[1] = (param_1[2] + local_1c) * ((int *)*unaff_EDI)[2] + *(int *)*unaff_EDI;
        while( true ) {
          local_18 = local_18 + -1;
          iVar10 = (int)uVar9 >> 8;
          if (local_18 < 0) break;
          uVar2 = local_28[1];
          local_28 = local_28 + 2;
          uVar3 = *local_28;
          if ((int)uVar3 >> 8 == iVar10) {
            local_8 = local_8 + (uVar3 - uVar9) * uVar2;
            uVar9 = uVar3;
          }
          else {
            iVar11 = (int)((0x100 - (uVar9 & 0xff)) * uVar2 + local_8) >> 8;
            if (0 < iVar11) {
              pbVar6 = (byte *)(*(int *)(*unaff_EDI + 0xc) * iVar10 + unaff_EDI[1]);
              if (iVar11 < 0xff) {
                uVar9 = ((uint)unaff_EDI[2] >> 8 & 0xff00ff) * iVar11;
                iVar12 = 0x100 - (uVar9 >> 0x18);
                iVar13 = ((uint)pbVar6[1] * iVar12 >> 8) + (uVar9 >> 8 & 0xff00ff);
                uVar9 = (((uint)pbVar6[2] << 0x10 | (uint)*pbVar6) * iVar12 >> 8 & 0xff00ff) +
                        ((unaff_EDI[2] & 0xff00ffU) * iVar11 >> 8 & 0xff00ff);
                uVar9 = (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) & 0xff00ff;
                local_20 = (byte)iVar13;
                *pbVar6 = (byte)uVar9;
                pbVar6[1] = -(char)((uint)iVar13 >> 8) | local_20;
              }
              else {
                iVar11 = 0x100 - (uint)*(byte *)((int)unaff_EDI + 0xb);
                uVar9 = (((uint)pbVar6[2] << 0x10 | (uint)*pbVar6) * iVar11 >> 8 & 0xff00ff) +
                        (unaff_EDI[2] & 0xff00ffU);
                iVar11 = ((uint)pbVar6[1] * iVar11 >> 8) + ((uint)unaff_EDI[2] >> 8 & 0xff00ff);
                uVar9 = (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) & 0xff00ff;
                pbVar6[1] = -(char)((uint)iVar11 >> 8) | (byte)iVar11;
                *pbVar6 = (byte)uVar9;
              }
              pbVar6[2] = (byte)(uVar9 >> 0x10);
            }
            if (0 < (int)uVar2) {
              local_8 = ((int)uVar3 >> 8) - (iVar10 + 1);
              if (0 < (int)local_8) {
                uVar9 = unaff_EDI[2];
                iVar11 = uVar2 + 1;
                uVar8 = (uVar9 >> 8 & 0xff00ff) * iVar11;
                uVar9 = ((uVar9 & 0xff00ff) * iVar11 >> 8 ^ (uVar9 >> 8 & 0xffff00ff) * iVar11) &
                        0xff00ff ^ uVar8;
                iVar11 = *(int *)(*unaff_EDI + 0xc);
                _Dst = (int *)(iVar11 * (iVar10 + 1) + unaff_EDI[1]);
                if ((char)(uVar8 >> 0x18) == -1) {
                  uVar4 = (undefined1)uVar9;
                  uVar7 = (undefined1)(uVar8 >> 8);
                  uStack_1e = (undefined1)(uVar9 >> 0x10);
                  if (iVar11 == 3) {
                    if ((char)unaff_EDI[6] == '\0') {
                      if ((local_8 & 0xffffffe0) != 0) {
                        for (; (8 < (int)local_8 && (((uint)_Dst & 7) != 0));
                            _Dst = (int *)((int)_Dst + 3)) {
                          *(undefined1 *)_Dst = uVar4;
                          *(undefined1 *)((int)_Dst + 1) = uVar7;
                          *(undefined1 *)((int)_Dst + 2) = uStack_1e;
                          local_8 = local_8 - 1;
                        }
                        if (4 < (int)local_8) {
                          local_10 = (local_8 - 5 >> 2) + 1;
                          local_8 = local_8 + local_10 * -4;
                          do {
                            *_Dst = unaff_EDI[3];
                            _Dst[1] = unaff_EDI[4];
                            _Dst[2] = unaff_EDI[5];
                            _Dst = _Dst + 3;
                            local_10 = local_10 + -1;
                          } while (local_10 != 0);
                        }
                      }
                      while (local_8 = local_8 - 1, -1 < (int)local_8) {
                        *(undefined1 *)_Dst = uVar4;
                        *(undefined1 *)((int)_Dst + 1) = uVar7;
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
                      *(undefined1 *)_Dst = uVar4;
                      *(undefined1 *)((int)_Dst + 1) = uVar7;
                      *(undefined1 *)((int)_Dst + 2) = uStack_1e;
                      _Dst = (int *)((int)_Dst + iVar11);
                      local_8 = local_8 - 1;
                    } while (0 < (int)local_8);
                  }
                }
                else {
                  FUN_004be37c(uVar9,local_8);
                }
              }
            }
            local_8 = (uVar3 & 0xff) * uVar2;
            uVar9 = uVar3;
          }
        }
        iVar11 = (int)local_8 >> 8;
        if (0 < iVar11) {
          pbVar6 = (byte *)(*(int *)(*unaff_EDI + 0xc) * iVar10 + unaff_EDI[1]);
          if (iVar11 < 0xff) {
            uVar9 = ((uint)unaff_EDI[2] >> 8 & 0xff00ff) * iVar11;
            iVar13 = 0x100 - (uVar9 >> 0x18);
            iVar10 = ((uint)pbVar6[1] * iVar13 >> 8) + (uVar9 >> 8 & 0xff00ff);
            uVar9 = (((uint)pbVar6[2] << 0x10 | (uint)*pbVar6) * iVar13 >> 8 & 0xff00ff) +
                    ((unaff_EDI[2] & 0xff00ffU) * iVar11 >> 8 & 0xff00ff);
            uVar9 = (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) & 0xff00ff;
            local_28._0_1_ = (byte)iVar10;
            *pbVar6 = (byte)uVar9;
            pbVar6[1] = -(char)((uint)iVar10 >> 8) | (byte)local_28;
          }
          else {
            iVar10 = 0x100 - (uint)*(byte *)((int)unaff_EDI + 0xb);
            uVar9 = (((uint)pbVar6[2] << 0x10 | (uint)*pbVar6) * iVar10 >> 8 & 0xff00ff) +
                    (unaff_EDI[2] & 0xff00ffU);
            iVar10 = ((uint)pbVar6[1] * iVar10 >> 8) + ((uint)unaff_EDI[2] >> 8 & 0xff00ff);
            uVar9 = (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) & 0xff00ff;
            pbVar6[1] = -(char)((uint)iVar10 >> 8) | (byte)iVar10;
            *pbVar6 = (byte)uVar9;
          }
          pbVar6[2] = (byte)(uVar9 >> 0x10);
        }
      }
      local_1c = local_1c + 1;
      piVar5 = piVar5 + iVar1;
    } while (local_1c < (int)param_1[4]);
  }
  return;
}

