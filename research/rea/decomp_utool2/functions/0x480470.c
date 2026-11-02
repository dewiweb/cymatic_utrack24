// rea decompile_all
// name: FUN_00480470
// address: 0x480470
// body: available
// range: 0x480470-0x4806c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00480470(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *_Dst;
  undefined1 uVar5;
  undefined1 uVar9;
  undefined4 *in_ECX;
  int *piVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int local_c;
  undefined1 uStack_6;
  
  local_c = 0;
  piVar6 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar13 = *piVar6;
      if (0 < iVar13 + -1) {
        uVar14 = piVar6[1];
        puVar10 = (uint *)(piVar6 + 1);
        iVar12 = 0;
        param_1[1] = (in_ECX[2] + local_c) * ((int *)*param_1)[2] + *(int *)*param_1;
        for (iVar13 = iVar13 + -2; iVar11 = (int)uVar14 >> 8, -1 < iVar13; iVar13 = iVar13 + -1) {
          uVar2 = puVar10[1];
          puVar10 = puVar10 + 2;
          uVar3 = *puVar10;
          if ((int)uVar3 >> 8 == iVar11) {
            iVar12 = iVar12 + (uVar3 - uVar14) * uVar2;
          }
          else {
            if (0 < (int)((0x100 - (uVar14 & 0xff)) * uVar2 + iVar12) >> 8) {
              puVar8 = (undefined1 *)(*(int *)(*param_1 + 0xc) * iVar11 + param_1[1]);
              *puVar8 = (char)param_1[2];
              puVar8[1] = *(undefined1 *)((int)param_1 + 9);
              puVar8[2] = *(undefined1 *)((int)param_1 + 10);
            }
            if (0 < (int)uVar2) {
              uVar14 = ((int)uVar3 >> 8) - (iVar11 + 1);
              if (0 < (int)uVar14) {
                uVar7 = param_1[2];
                iVar12 = uVar2 + 1;
                uVar4 = (uVar7 >> 8 & 0xff00ff) * iVar12;
                uVar7 = ((uVar7 & 0xff00ff) * iVar12 >> 8 ^ (uVar7 >> 8 & 0xffff00ff) * iVar12) &
                        0xff00ff ^ uVar4;
                iVar12 = *(int *)(*param_1 + 0xc);
                _Dst = (int *)(iVar12 * (iVar11 + 1) + param_1[1]);
                uVar5 = (undefined1)uVar7;
                uVar9 = (undefined1)(uVar4 >> 8);
                uStack_6 = (undefined1)(uVar7 >> 0x10);
                if (iVar12 == 3) {
                  if ((char)param_1[6] == '\0') {
                    if ((uVar14 & 0xffffffe0) != 0) {
                      for (; (8 < (int)uVar14 && (((uint)_Dst & 7) != 0));
                          _Dst = (int *)((int)_Dst + 3)) {
                        *(undefined1 *)_Dst = uVar5;
                        uVar14 = uVar14 - 1;
                        *(undefined1 *)((int)_Dst + 1) = uVar9;
                        *(undefined1 *)((int)_Dst + 2) = uStack_6;
                      }
                      if (4 < (int)uVar14) {
                        iVar12 = (uVar14 - 5 >> 2) + 1;
                        uVar14 = uVar14 + iVar12 * -4;
                        do {
                          *_Dst = param_1[3];
                          _Dst[1] = param_1[4];
                          _Dst[2] = param_1[5];
                          _Dst = _Dst + 3;
                          iVar12 = iVar12 + -1;
                        } while (iVar12 != 0);
                      }
                    }
                    iVar12 = uVar14 - 1;
                    if (-1 < iVar12) {
                      puVar8 = (undefined1 *)((int)_Dst + 2);
                      do {
                        iVar12 = iVar12 + -1;
                        puVar8[-2] = uVar5;
                        puVar8[-1] = uVar9;
                        *puVar8 = uStack_6;
                        puVar8 = puVar8 + 3;
                      } while (-1 < iVar12);
                    }
                  }
                  else {
                    _memset(_Dst,uVar7 >> 0x10 & 0xff,uVar14 * 3);
                  }
                }
                else {
                  do {
                    *(undefined1 *)_Dst = uVar5;
                    uVar14 = uVar14 - 1;
                    *(undefined1 *)((int)_Dst + 1) = uVar9;
                    *(undefined1 *)((int)_Dst + 2) = uStack_6;
                    _Dst = (int *)((int)_Dst + iVar12);
                  } while (0 < (int)uVar14);
                }
              }
            }
            iVar12 = (uVar3 & 0xff) * uVar2;
          }
          uVar14 = uVar3;
        }
        if (0 < iVar12 >> 8) {
          puVar8 = (undefined1 *)(*(int *)(*param_1 + 0xc) * iVar11 + param_1[1]);
          *puVar8 = (char)param_1[2];
          puVar8[1] = *(undefined1 *)((int)param_1 + 9);
          puVar8[2] = *(undefined1 *)((int)param_1 + 10);
        }
      }
      local_c = local_c + 1;
      piVar6 = piVar6 + iVar1;
    } while (local_c < (int)in_ECX[4]);
  }
  return;
}

