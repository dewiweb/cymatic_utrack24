// rea decompile_all
// name: FUN_00602760
// address: 0x602760
// body: available
// range: 0x602760-0x6029e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00602760(uint param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  int local_d8;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071bb2b;
  local_10 = ExceptionList;
  local_24 = param_4;
  local_20 = param_3;
  if (param_4 < 1) {
    if ((param_4 < 0) || (param_3 == 0)) {
      iVar6 = 0;
      if (param_6 < 1) {
        return;
      }
      do {
        *(undefined4 *)(param_5 + iVar6 * 8) = 0;
        *(undefined4 *)(param_5 + 4 + iVar6 * 8) = 0;
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_6);
      return;
    }
    uVar10 = param_3;
    if ((param_4 < 0) || ((param_4 < 1 && (param_3 < 0x1001)))) goto LAB_006027ff;
  }
  uVar10 = 0x1000;
LAB_006027ff:
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00416890(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_34 = (int)uVar10 >> 0x1f;
  local_8 = 1;
  bVar4 = true;
  local_2c = param_2;
  local_28 = param_1;
  local_30 = uVar10;
  while( true ) {
    uVar10 = param_3;
    if ((local_34 <= param_4) && ((local_34 < param_4 || (local_30 < param_3)))) {
      uVar10 = local_30;
    }
    cVar5 = FUN_006031f0(local_d8,param_6,local_28,local_2c,uVar10,0);
    if (cVar5 == '\0') break;
    iVar6 = 0;
    if (0 < param_6) {
      do {
        if (*(char *)(local_1c + 0x24) == '\0') {
          piVar11 = *(int **)(local_d8 + iVar6 * 4);
          if ((int)uVar10 < 1) {
            iVar8 = 0;
            iVar9 = 0;
          }
          else {
            iVar9 = *piVar11;
            iVar8 = iVar9;
            uVar3 = uVar10;
            while (uVar3 = uVar3 - 1, 0 < (int)uVar3) {
              piVar11 = piVar11 + 1;
              iVar2 = *piVar11;
              if (iVar9 < iVar2) {
                iVar9 = iVar2;
              }
              if (iVar2 < iVar8) {
                iVar8 = iVar2;
              }
            }
          }
          local_18 = (float)iVar8 * 4.656613e-10;
          local_14 = (float)iVar9 * 4.656613e-10;
          if ((float)iVar9 * 4.656613e-10 <= local_18) {
            local_14 = local_18;
          }
        }
        else {
          FUN_00425450(uVar10);
          local_18 = local_44;
          local_14 = local_40;
        }
        if (bVar4) {
          local_4c = local_18;
          pfVar7 = &local_4c;
          local_48 = local_14;
        }
        else {
          fVar1 = *(float *)(param_5 + iVar6 * 8);
          local_3c = local_18;
          if (fVar1 <= local_18) {
            local_3c = fVar1;
          }
          fVar1 = *(float *)(param_5 + 4 + iVar6 * 8);
          local_38 = local_14;
          if (local_14 <= fVar1) {
            local_38 = fVar1;
          }
          if (local_38 <= local_3c) {
            local_38 = local_3c;
          }
          else {
          }
          pfVar7 = &local_3c;
        }
        fVar1 = pfVar7[1];
        *(float *)(param_5 + iVar6 * 8) = *pfVar7;
        *(float *)(param_5 + 4 + iVar6 * 8) = fVar1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_6);
    }
    param_3 = local_20 - uVar10;
    bVar4 = false;
    param_4 = (local_24 - ((int)uVar10 >> 0x1f)) - (uint)(local_20 < uVar10);
    bVar12 = CARRY4(local_28,uVar10);
    local_28 = local_28 + uVar10;
    local_2c = local_2c + ((int)uVar10 >> 0x1f) + (uint)bVar12;
    local_24 = param_4;
    local_20 = param_3;
    if ((param_4 < 1) && ((param_4 < 0 || (param_3 == 0)))) break;
  }
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

