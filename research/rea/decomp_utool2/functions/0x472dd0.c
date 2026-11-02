// rea decompile_all
// name: FUN_00472dd0
// address: 0x472dd0
// body: available
// range: 0x472dd0-0x472fc6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00472dd0(int *param_1)

{
  void *_Memory;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *in_ECX;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  void *_Memory_00;
  int local_48;
  uint local_40;
  int local_34;
  int local_30;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (in_ECX[2] == 0) {
    return false;
  }
  iVar7 = 0;
  uVar11 = 0;
  _Memory_00 = (void *)0x0;
  local_40 = 0;
  local_48 = 0;
  local_34 = 0;
  if (0 < in_ECX[2]) {
    local_30 = 0;
    do {
      piVar2 = (int *)(*in_ECX + local_30);
      iVar10 = *param_1;
      iVar3 = param_1[2] * 0x10 + iVar10;
      iVar1 = local_48;
      for (; local_48 = iVar1, iVar10 != iVar3; iVar10 = iVar10 + 0x10) {
        FUN_00474730(&local_18);
        iVar7 = *piVar2;
        iVar8 = local_18;
        if (local_18 < iVar7) {
          iVar8 = iVar7;
        }
        iVar4 = local_10 + local_18;
        if (piVar2[2] + iVar7 < local_10 + local_18) {
          iVar4 = piVar2[2] + iVar7;
        }
        iVar4 = iVar4 - iVar8;
        local_10 = iVar4;
        if (0 < iVar4) {
          iVar7 = piVar2[1];
          iVar9 = local_14;
          if (local_14 < iVar7) {
            iVar9 = iVar7;
          }
          iVar5 = local_c + local_14;
          if (piVar2[3] + iVar7 < local_c + local_14) {
            iVar5 = piVar2[3] + iVar7;
          }
          iVar5 = iVar5 - iVar9;
          local_c = iVar5;
          if (0 < iVar5) {
            local_48 = iVar1 + 1;
            local_18 = iVar8;
            local_14 = iVar9;
            if ((int)uVar11 < local_48) {
              iVar7 = local_48;
              if (local_48 < 0) {
                iVar7 = iVar1 + 2;
              }
              uVar12 = iVar1 + 9 + (iVar7 >> 1) & 0xfffffff8;
              uVar11 = local_40;
              if (local_40 != uVar12) {
                uVar11 = uVar12;
                local_40 = uVar12;
                if ((int)uVar12 < 1) {
                  FID_conflict__free(_Memory_00);
                  _Memory_00 = (void *)0x0;
                }
                else if (_Memory_00 == (void *)0x0) {
                  _Memory_00 = (void *)FUN_004c554b();
                }
                else {
                  _Memory_00 = (void *)FUN_004c553b(_Memory_00,uVar12 << 4);
                }
              }
            }
            piVar6 = (int *)(iVar1 * 0x10 + (int)_Memory_00);
            if (piVar6 != (int *)0x0) {
              *piVar6 = iVar8;
              piVar6[1] = iVar9;
              piVar6[2] = iVar4;
              piVar6[3] = iVar5;
            }
          }
        }
        iVar7 = local_48;
        iVar1 = local_48;
      }
      local_34 = local_34 + 1;
      local_30 = local_30 + 0x10;
    } while (local_34 < in_ECX[2]);
  }
  _Memory = (void *)*in_ECX;
  *in_ECX = (int)_Memory_00;
  in_ECX[1] = uVar11;
  in_ECX[2] = iVar7;
  FID_conflict__free(_Memory);
  return iVar7 != 0;
}

