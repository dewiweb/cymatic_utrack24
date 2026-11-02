// rea decompile_all
// name: FUN_004806d0
// address: 0x4806d0
// body: available
// range: 0x4806d0-0x480b64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004806d0(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *_Dst;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined1 uVar10;
  undefined4 *in_ECX;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  int local_10;
  undefined1 uStack_a;
  
  local_10 = 0;
  piVar6 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar17 = *piVar6;
      if (0 < iVar17 + -1) {
        uVar12 = piVar6[1];
        puVar13 = (uint *)(piVar6 + 1);
        iVar11 = 0;
        param_1[1] = (in_ECX[2] + local_10) * ((int *)*param_1)[2] + *(int *)*param_1;
        for (iVar17 = iVar17 + -2; iVar16 = (int)uVar12 >> 8, -1 < iVar17; iVar17 = iVar17 + -1) {
          uVar9 = puVar13[1];
          puVar13 = puVar13 + 2;
          uVar2 = *puVar13;
          if ((int)uVar2 >> 8 == iVar16) {
            iVar11 = iVar11 + (uVar2 - uVar12) * uVar9;
          }
          else {
            iVar11 = (int)((0x100 - (uVar12 & 0xff)) * uVar9 + iVar11) >> 8;
            if (0 < iVar11) {
              if (iVar11 < 0xff) {
                pbVar15 = (byte *)(*(int *)(*param_1 + 0xc) * iVar16 + param_1[1]);
                uVar12 = ((uint)param_1[2] >> 8 & 0xff00ff) * iVar11;
                iVar8 = 0x100 - (uVar12 >> 0x18);
                iVar14 = ((uint)pbVar15[1] * iVar8 >> 8) + (uVar12 >> 8 & 0xff00ff);
                uVar12 = (((uint)pbVar15[2] << 0x10 | (uint)*pbVar15) * iVar8 >> 8 & 0xff00ff) +
                         ((param_1[2] & 0xff00ffU) * iVar11 >> 8 & 0xff00ff);
                uVar12 = (0x100 - (uVar12 >> 8 & 0xff00ff) | uVar12) & 0xff00ff;
                *pbVar15 = (byte)uVar12;
                pbVar15[1] = -(char)((uint)iVar14 >> 8) | (byte)iVar14;
                pbVar15[2] = (byte)(uVar12 >> 0x10);
              }
              else {
                pbVar15 = (byte *)(*(int *)(*param_1 + 0xc) * iVar16 + param_1[1]);
                uVar12 = param_1[2];
                iVar11 = 0x100 - (uint)*(byte *)((int)param_1 + 0xb);
                uVar7 = (((uint)pbVar15[2] << 0x10 | (uint)*pbVar15) * iVar11 >> 8 & 0xff00ff) +
                        (uVar12 & 0xff00ff);
                uVar7 = (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) & 0xff00ff;
                *pbVar15 = (byte)uVar7;
                iVar11 = ((uint)pbVar15[1] * iVar11 >> 8) + (uVar12 >> 8 & 0xff00ff);
                pbVar15[1] = -(char)((uint)iVar11 >> 8) | (byte)iVar11;
                pbVar15[2] = (byte)(uVar7 >> 0x10);
              }
            }
            if (0 < (int)uVar9) {
              uVar12 = ((int)uVar2 >> 8) - (iVar16 + 1);
              if (0 < (int)uVar12) {
                uVar7 = param_1[2];
                iVar11 = uVar9 + 1;
                uVar3 = (uVar7 >> 8 & 0xff00ff) * iVar11;
                uVar7 = ((uVar7 & 0xff00ff) * iVar11 >> 8 ^ (uVar7 >> 8 & 0xffff00ff) * iVar11) &
                        0xff00ff ^ uVar3;
                iVar11 = *(int *)(*param_1 + 0xc);
                _Dst = (int *)(iVar11 * (iVar16 + 1) + param_1[1]);
                if ((char)(uVar3 >> 0x18) == -1) {
                  uVar5 = (undefined1)uVar7;
                  uVar10 = (undefined1)(uVar3 >> 8);
                  uStack_a = (undefined1)(uVar7 >> 0x10);
                  if (iVar11 == 3) {
                    if ((char)param_1[6] == '\0') {
                      if ((uVar12 & 0xffffffe0) != 0) {
                        for (; (8 < (int)uVar12 && (((uint)_Dst & 7) != 0));
                            _Dst = (int *)((int)_Dst + 3)) {
                          *(undefined1 *)_Dst = uVar5;
                          uVar12 = uVar12 - 1;
                          *(undefined1 *)((int)_Dst + 1) = uVar10;
                          *(undefined1 *)((int)_Dst + 2) = uStack_a;
                        }
                        if (4 < (int)uVar12) {
                          iVar11 = (uVar12 - 5 >> 2) + 1;
                          uVar12 = uVar12 + iVar11 * -4;
                          do {
                            *_Dst = param_1[3];
                            _Dst[1] = param_1[4];
                            _Dst[2] = param_1[5];
                            _Dst = _Dst + 3;
                            iVar11 = iVar11 + -1;
                          } while (iVar11 != 0);
                        }
                      }
                      iVar11 = uVar12 - 1;
                      if (-1 < iVar11) {
                        puVar4 = (undefined1 *)((int)_Dst + 2);
                        do {
                          iVar11 = iVar11 + -1;
                          puVar4[-2] = uVar5;
                          puVar4[-1] = uVar10;
                          *puVar4 = uStack_a;
                          puVar4 = puVar4 + 3;
                        } while (-1 < iVar11);
                      }
                    }
                    else {
                      _memset(_Dst,uVar7 >> 0x10 & 0xff,uVar12 * 3);
                    }
                  }
                  else {
                    do {
                      uVar12 = uVar12 - 1;
                      *(undefined1 *)_Dst = uVar5;
                      *(undefined1 *)((int)_Dst + 1) = uVar10;
                      *(undefined1 *)((int)_Dst + 2) = uStack_a;
                      _Dst = (int *)((int)_Dst + iVar11);
                    } while (0 < (int)uVar12);
                  }
                }
                else {
                  FUN_0048b420(_Dst,uVar7,uVar12);
                }
              }
            }
            iVar11 = (uVar2 & 0xff) * uVar9;
          }
          uVar12 = uVar2;
        }
        iVar11 = iVar11 >> 8;
        if (0 < iVar11) {
          if (iVar11 < 0xff) {
            pbVar15 = (byte *)(*(int *)(*param_1 + 0xc) * iVar16 + param_1[1]);
            uVar12 = ((uint)param_1[2] >> 8 & 0xff00ff) * iVar11;
            iVar17 = 0x100 - (uVar12 >> 0x18);
            iVar16 = ((uint)pbVar15[1] * iVar17 >> 8) + (uVar12 >> 8 & 0xff00ff);
            uVar12 = (((uint)pbVar15[2] << 0x10 | (uint)*pbVar15) * iVar17 >> 8 & 0xff00ff) +
                     ((param_1[2] & 0xff00ffU) * iVar11 >> 8 & 0xff00ff);
            uVar12 = (0x100 - (uVar12 >> 8 & 0xff00ff) | uVar12) & 0xff00ff;
            *pbVar15 = (byte)uVar12;
            pbVar15[1] = -(char)((uint)iVar16 >> 8) | (byte)iVar16;
            pbVar15[2] = (byte)(uVar12 >> 0x10);
          }
          else {
            uVar12 = param_1[2];
            pbVar15 = (byte *)(*(int *)(*param_1 + 0xc) * iVar16 + param_1[1]);
            iVar17 = 0x100 - (uint)*(byte *)((int)param_1 + 0xb);
            uVar9 = (((uint)pbVar15[2] << 0x10 | (uint)*pbVar15) * iVar17 >> 8 & 0xff00ff) +
                    (uVar12 & 0xff00ff);
            uVar9 = (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) & 0xff00ff;
            *pbVar15 = (byte)uVar9;
            iVar17 = ((uint)pbVar15[1] * iVar17 >> 8) + (uVar12 >> 8 & 0xff00ff);
            pbVar15[1] = -(char)((uint)iVar17 >> 8) | (byte)iVar17;
            pbVar15[2] = (byte)(uVar9 >> 0x10);
          }
        }
      }
      local_10 = local_10 + 1;
      piVar6 = piVar6 + iVar1;
    } while (local_10 < (int)in_ECX[4]);
  }
  return;
}

