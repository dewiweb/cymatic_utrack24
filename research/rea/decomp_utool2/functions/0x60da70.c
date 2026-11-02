// rea decompile_all
// name: FUN_0060da70
// address: 0x60da70
// body: available
// range: 0x60da70-0x60dd66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060da70(int *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  void *_Memory;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  iVar4 = param_1[2] + (param_3 + 2) * 4;
  if (param_1[1] < iVar4) {
    FUN_00409cf0(iVar4 / 2 + 8 + iVar4 & 0xfffffff8);
  }
  iVar4 = 0;
  if (0 < param_3) {
    do {
      if (iVar4 == 0) {
        FUN_00682e50();
      }
      else {
        FUN_00682d90();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_3);
  }
  iVar4 = param_3 + -1;
  if (-1 < iVar4) {
    param_4 = param_4 + iVar4;
    do {
      fVar6 = (float)iVar4;
      fVar7 = -*(float *)(param_2 + (param_4 % param_3) * 8);
      if (param_1[2] == 0) {
        param_1[4] = 0;
        param_1[3] = 0;
        param_1[6] = 0;
        param_1[5] = 0;
        iVar2 = param_1[2];
        iVar3 = iVar2 + 3;
        if (param_1[1] < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar2 + 4;
          }
          uVar5 = iVar2 + 0xb + (iVar3 >> 1) & 0xfffffff8;
          if (param_1[1] != uVar5) {
            if ((int)uVar5 < 1) {
              FID_conflict__free((void *)*param_1);
              *param_1 = 0;
            }
            else if (*param_1 == 0) {
              iVar2 = FUN_004c554b();
              *param_1 = iVar2;
            }
            else {
              iVar2 = FUN_004c553b(*param_1,uVar5 * 4);
              *param_1 = iVar2;
            }
            param_1[1] = uVar5;
          }
        }
        iVar2 = param_1[2];
        param_1[2] = iVar2 + 1;
        *(undefined4 *)(*param_1 + iVar2 * 4) = 0x47c35100;
        iVar2 = param_1[2];
        param_1[2] = iVar2 + 1;
        *(undefined4 *)(*param_1 + iVar2 * 4) = 0;
        iVar2 = param_1[2];
        param_1[2] = iVar2 + 1;
        *(undefined4 *)(*param_1 + iVar2 * 4) = 0;
      }
      iVar2 = param_1[2];
      iVar3 = iVar2 + 3;
      if (param_1[1] < iVar3) {
        if (iVar3 < 0) {
          iVar3 = iVar2 + 4;
        }
        uVar5 = iVar2 + 0xb + (iVar3 >> 1) & 0xfffffff8;
        if (param_1[1] != uVar5) {
          if ((int)uVar5 < 1) {
            FID_conflict__free((void *)*param_1);
            *param_1 = 0;
          }
          else if (*param_1 == 0) {
            iVar2 = FUN_004c554b();
            *param_1 = iVar2;
          }
          else {
            iVar2 = FUN_004c553b(*param_1,uVar5 * 4);
            *param_1 = iVar2;
          }
          param_1[1] = uVar5;
        }
      }
      iVar2 = param_1[2];
      iVar4 = iVar4 + -1;
      param_1[2] = iVar2 + 1;
      *(undefined4 *)(*param_1 + iVar2 * 4) = 0x47c35080;
      iVar2 = param_1[2];
      param_1[2] = iVar2 + 1;
      *(float *)(*param_1 + iVar2 * 4) = fVar6;
      iVar2 = param_1[2];
      param_1[2] = iVar2 + 1;
      *(float *)(*param_1 + iVar2 * 4) = fVar7;
      fVar1 = fVar6;
      if ((float)param_1[3] <= fVar6) {
        fVar1 = (float)param_1[3];
      }
      if (fVar6 <= (float)param_1[4]) {
        fVar6 = (float)param_1[4];
      }
      param_4 = param_4 + -1;
      param_1[3] = (int)fVar1;
      param_1[4] = (int)fVar6;
      fVar6 = fVar7;
      if (fVar7 <= (float)param_1[6]) {
        fVar6 = (float)param_1[6];
      }
      if ((float)param_1[5] <= fVar7) {
        fVar7 = (float)param_1[5];
      }
      param_1[6] = (int)fVar6;
      param_1[5] = (int)fVar7;
    } while (-1 < iVar4);
  }
  iVar4 = param_1[2];
  if ((iVar4 != 0) &&
     (_Memory = (void *)*param_1, *(float *)((int)_Memory + iVar4 * 4 + -4) != 100005.0)) {
    if ((param_1[1] < iVar4 + 1) &&
       (uVar5 = iVar4 + 9 + (iVar4 + 1) / 2 & 0xfffffff8, param_1[1] != uVar5)) {
      if ((int)uVar5 < 1) {
        FID_conflict__free(_Memory);
        *param_1 = 0;
      }
      else if (_Memory == (void *)0x0) {
        iVar4 = FUN_004c554b();
        *param_1 = iVar4;
      }
      else {
        iVar4 = FUN_004c553b(_Memory,uVar5 * 4);
        *param_1 = iVar4;
      }
      param_1[1] = uVar5;
    }
    iVar4 = param_1[2];
    param_1[2] = iVar4 + 1;
    *(undefined4 *)(*param_1 + iVar4 * 4) = 0x47c35280;
  }
  return;
}

