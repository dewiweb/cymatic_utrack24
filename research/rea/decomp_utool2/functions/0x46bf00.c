// rea decompile_all
// name: FUN_0046bf00
// address: 0x46bf00
// body: available
// range: 0x46bf00-0x46c39d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046bf00(UINT param_1,int *param_2)

{
  void *_Memory;
  float fVar1;
  DWORD cjBuffer;
  int *pvBuffer;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  short *psVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_24;
  _GLYPHMETRICS local_1c;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if ((int)param_1 < 0) {
    param_1 = *(UINT *)(in_ECX + 0x80);
  }
  cjBuffer = GetGlyphOutlineW(*(HDC *)(in_ECX + 0x34),param_1,0x82,&local_1c,0,(LPVOID)0x0,
                              (MAT2 *)&DAT_00c02380);
  if (0 < (int)cjBuffer) {
    pvBuffer = (int *)FUN_004c554b(cjBuffer);
    GetGlyphOutlineW(*(HDC *)(in_ECX + 0x34),param_1,0x82,&local_1c,cjBuffer,pvBuffer,
                     (MAT2 *)&DAT_00c02380);
    fVar12 = 1.0 / (float)*(int *)(in_ECX + 0x38);
    fVar11 = -fVar12;
    piVar8 = pvBuffer;
    while (piVar8 < (int *)(cjBuffer + (int)pvBuffer)) {
      FUN_00682e50();
      piVar5 = (int *)(*piVar8 + (int)piVar8);
      for (piVar8 = piVar8 + 4; piVar8 < piVar5;
          piVar8 = piVar8 + (uint)*(ushort *)((int)piVar8 + 2) * 2 + 1) {
        if ((short)*piVar8 == 1) {
          local_24 = 0;
          if (*(short *)((int)piVar8 + 2) != 0) {
            psVar7 = (short *)((int)piVar8 + 10);
            do {
              fVar9 = (float)(int)psVar7[-2] * fVar12;
              fVar10 = (float)(int)*psVar7 * fVar11;
              if (param_2[2] == 0) {
                param_2[4] = 0;
                param_2[3] = 0;
                param_2[6] = 0;
                param_2[5] = 0;
                iVar6 = param_2[2] + 3;
                if (param_2[1] < iVar6) {
                  iVar2 = iVar6;
                  if (iVar6 < 0) {
                    iVar2 = param_2[2] + 4;
                  }
                  uVar3 = (iVar2 >> 1) + 8 + iVar6 & 0xfffffff8;
                  if (param_2[1] != uVar3) {
                    if ((int)uVar3 < 1) {
                      FID_conflict__free((void *)*param_2);
                      *param_2 = 0;
                    }
                    else if (*param_2 == 0) {
                      iVar6 = FUN_004c554b();
                      *param_2 = iVar6;
                    }
                    else {
                      iVar6 = FUN_004c553b(*param_2,uVar3 << 2);
                      *param_2 = iVar6;
                    }
                    param_2[1] = uVar3;
                  }
                }
                iVar6 = param_2[2];
                param_2[2] = iVar6 + 1;
                *(undefined4 *)(*param_2 + iVar6 * 4) = 0x47c35100;
                iVar6 = param_2[2];
                param_2[2] = iVar6 + 1;
                *(undefined4 *)(*param_2 + iVar6 * 4) = 0;
                iVar6 = param_2[2];
                param_2[2] = iVar6 + 1;
                *(undefined4 *)(*param_2 + iVar6 * 4) = 0;
              }
              iVar6 = param_2[2] + 3;
              if (param_2[1] < iVar6) {
                iVar2 = iVar6;
                if (iVar6 < 0) {
                  iVar2 = param_2[2] + 4;
                }
                uVar3 = (iVar2 >> 1) + 8 + iVar6 & 0xfffffff8;
                if (param_2[1] != uVar3) {
                  if ((int)uVar3 < 1) {
                    FID_conflict__free((void *)*param_2);
                    *param_2 = 0;
                  }
                  else if (*param_2 == 0) {
                    iVar6 = FUN_004c554b();
                    *param_2 = iVar6;
                  }
                  else {
                    iVar6 = FUN_004c553b(*param_2,uVar3 << 2);
                    *param_2 = iVar6;
                  }
                  param_2[1] = uVar3;
                }
              }
              iVar6 = param_2[2];
              local_24 = local_24 + 1;
              param_2[2] = iVar6 + 1;
              *(undefined4 *)(*param_2 + iVar6 * 4) = 0x47c35080;
              iVar6 = param_2[2];
              param_2[2] = iVar6 + 1;
              *(float *)(*param_2 + iVar6 * 4) = fVar9;
              iVar6 = param_2[2];
              param_2[2] = iVar6 + 1;
              *(float *)(*param_2 + iVar6 * 4) = fVar10;
              fVar1 = fVar9;
              if ((float)param_2[3] <= fVar9) {
                fVar1 = (float)param_2[3];
              }
              if (fVar9 <= (float)param_2[4]) {
                fVar9 = (float)param_2[4];
              }
              psVar7 = psVar7 + 4;
              param_2[3] = (int)fVar1;
              fVar1 = fVar10;
              if ((float)param_2[5] <= fVar10) {
                fVar1 = (float)param_2[5];
              }
              if (fVar10 <= (float)param_2[6]) {
                fVar10 = (float)param_2[6];
              }
              param_2[4] = (int)fVar9;
              param_2[5] = (int)fVar1;
              param_2[6] = (int)fVar10;
            } while (local_24 < (int)(uint)*(ushort *)((int)piVar8 + 2));
          }
        }
        else if ((short)*piVar8 == 2) {
          uVar3 = (uint)*(ushort *)((int)piVar8 + 2);
          local_24 = 0;
          if (uVar3 != 1 && -1 < (int)(uVar3 - 1)) {
            psVar7 = (short *)((int)piVar8 + 10);
            do {
              fVar9 = (float)(int)psVar7[4] * fVar11;
              if (local_24 < (int)(uVar3 - 2)) {
                fVar9 = (fVar9 + (float)(int)*psVar7 * fVar11) * 0.5;
              }
              FUN_0067c1c0(fVar9);
              local_24 = local_24 + 1;
              psVar7 = psVar7 + 4;
              uVar3 = (uint)*(ushort *)((int)piVar8 + 2);
            } while (local_24 < (int)(uVar3 - 1));
          }
        }
      }
      iVar6 = param_2[2];
      if ((iVar6 != 0) &&
         (_Memory = (void *)*param_2, *(float *)((int)_Memory + iVar6 * 4 + -4) != 100005.0)) {
        iVar2 = iVar6 + 1;
        if (param_2[1] < iVar2) {
          iVar4 = iVar2;
          if (iVar2 < 0) {
            iVar4 = iVar6 + 2;
          }
          uVar3 = (iVar4 >> 1) + 8 + iVar2 & 0xfffffff8;
          if (param_2[1] != uVar3) {
            if ((int)uVar3 < 1) {
              FID_conflict__free(_Memory);
              *param_2 = 0;
            }
            else if (_Memory == (void *)0x0) {
              iVar6 = FUN_004c554b();
              *param_2 = iVar6;
            }
            else {
              iVar6 = FUN_004c553b(_Memory,uVar3 << 2);
              *param_2 = iVar6;
            }
            param_2[1] = uVar3;
          }
        }
        iVar6 = param_2[2];
        param_2[2] = iVar6 + 1;
        *(undefined4 *)(*param_2 + iVar6 * 4) = 0x47c35280;
      }
    }
    FID_conflict__free(pvBuffer);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

