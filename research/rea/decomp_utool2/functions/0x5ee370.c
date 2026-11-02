// rea decompile_all
// name: FUN_005ee370
// address: 0x5ee370
// body: available
// range: 0x5ee370-0x5ee5c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_005ee370(int param_1,uint param_2,undefined4 param_3,uint param_4,undefined4 param_5,int param_6
            ,int param_7,int *param_8,int *param_9)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *in_ECX;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *in_EDX;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int local_40;
  int local_24;
  uint local_10;
  uint local_c;
  
  iVar11 = 6;
  local_c = 0;
  local_24 = 6;
  FUN_005fc1f0();
  puVar1 = (undefined4 *)*param_8;
  piVar2 = (int *)param_8[1];
  if (param_6 == 0) {
    uVar4 = FUN_005ee5d0(*in_ECX,in_ECX[1]);
    if (uVar4 == 0xffffffff) {
      param_3 = 0;
      uVar4 = 0xffffffff;
    }
    if (param_7 != 0) {
      uVar5 = *in_EDX * param_1 + 10;
      if (uVar4 < uVar5) {
        *piVar2 = 0;
      }
      else {
        *piVar2 = *in_EDX;
        param_3 = 0;
        uVar4 = uVar5;
      }
    }
    iVar11 = uVar4 + 6;
    *puVar1 = param_3;
  }
  else {
    uVar4 = 1 << ((byte)param_6 & 0x1f);
    local_10 = 0;
    if (uVar4 != 0) {
      uVar5 = param_1 + param_2 >> ((byte)param_6 & 0x1f);
      do {
        uVar8 = uVar5;
        if (local_10 == 0) {
          if (uVar5 <= param_2) {
            return 0;
          }
          uVar8 = uVar5 - param_2;
        }
        uVar7 = in_ECX[local_10 * 2];
        uVar3 = in_ECX[local_10 * 2 + 1];
        if ((uVar3 == 0) && (uVar7 < 0x10000001)) {
          uVar13 = 0;
          uVar9 = uVar8 << 3;
          uVar14 = uVar8;
          while (uVar9 < uVar7) {
            uVar13 = uVar13 + 4;
            uVar9 = uVar14 * 0x80;
            uVar14 = uVar14 << 4;
          }
          for (; uVar14 < uVar7; uVar14 = uVar14 * 2) {
            uVar13 = uVar13 + 1;
          }
        }
        else {
          uVar13 = 0;
          uVar14 = 0;
          uVar9 = uVar8;
          if ((uVar3 < 0x1000001) && ((uVar3 < 0x1000000 || (uVar7 == 0)))) {
            uVar12 = uVar8 << 7;
            if (uVar8 >> 0x19 <= uVar3) {
              uVar10 = uVar8;
              if (uVar8 >> 0x19 < uVar3) goto LAB_005ee4c6;
              do {
                uVar10 = uVar9;
                if (uVar7 <= uVar12) break;
LAB_005ee4c6:
                do {
                  uVar14 = uVar14 << 8 | uVar10 >> 0x18;
                  uVar13 = uVar13 + 8;
                  uVar9 = uVar10 << 8;
                  uVar6 = uVar14 << 7 | (uVar10 & 0xffffff) >> 0x11;
                  uVar12 = uVar10 << 0xf;
                  uVar10 = uVar9;
                } while (uVar6 < uVar3);
              } while (uVar6 <= uVar3);
            }
          }
          if (uVar14 <= uVar3) {
            if (uVar14 < uVar3) goto LAB_005ee4f3;
            do {
              if (uVar7 <= uVar9) break;
LAB_005ee4f3:
              do {
                uVar14 = uVar14 << 1 | uVar9 >> 0x1f;
                uVar13 = uVar13 + 1;
                uVar9 = uVar9 * 2;
              } while (uVar14 < uVar3);
            } while (uVar14 <= uVar3);
          }
        }
        uVar9 = param_4 - 1;
        if (uVar13 < param_4) {
          uVar9 = uVar13;
        }
        uVar13 = 0xffffffff;
        if (uVar9 == 0) {
          local_40 = uVar7 * 2;
        }
        else {
          local_40 = (int)(CONCAT44(uVar3,uVar7) >> (ulonglong)(uVar9 - 1));
        }
        uVar7 = local_40 + 4 + ((uVar9 + 1) * uVar8 - (uVar8 >> 1));
        if (uVar7 != 0xffffffff) {
          uVar13 = uVar7;
          local_c = uVar9;
        }
        if (param_7 != 0) {
          uVar8 = in_EDX[local_10] * uVar8 + 10;
          if (uVar13 < uVar8) {
            piVar2[local_10] = 0;
          }
          else {
            local_c = 0;
            piVar2[local_10] = in_EDX[local_10];
            uVar13 = uVar8;
          }
        }
        iVar11 = local_24 + uVar13;
        puVar1[local_10] = local_c;
        local_10 = local_10 + 1;
        local_24 = iVar11;
      } while (local_10 < uVar4);
    }
  }
  *param_9 = iVar11;
  return 1;
}

