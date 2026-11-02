// rea decompile_all
// name: FUN_00669fd0
// address: 0x669fd0
// body: available
// range: 0x669fd0-0x66a22c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_00669fd0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int local_5c;
  int local_54;
  int local_50;
  uint local_48;
  int local_44 [11];
  int aiStack_18 [4];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar15 = 0;
  iVar2 = *(int *)(param_1 + 0xf8);
  iVar3 = *(int *)(param_1 + 0xe0);
  local_44[0] = *(int *)(param_1 + 0x148);
  if (0 < *(int *)(param_1 + 0xe4)) {
    piVar8 = (int *)(param_1 + 0xe8);
    do {
      iVar7 = *(int *)(*piVar8 + 0xc);
      iVar7 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                        (param_1,*(undefined4 *)
                                  (*(int *)(local_44[0] + 0x18) + *(int *)(*piVar8 + 4) * 4),
                         *(int *)(local_44[0] + 8) * iVar7,iVar7,0);
      piVar8 = piVar8 + 1;
      aiStack_18[iVar15] = iVar7;
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(param_1 + 0xe4));
  }
  iVar15 = *(int *)(local_44[0] + 0x10);
  iVar7 = local_44[0];
  if (iVar15 < *(int *)(local_44[0] + 0x14)) {
    do {
      local_48 = *(uint *)(iVar7 + 0xc);
      if (local_48 < *(uint *)(param_1 + 0xf8)) {
        do {
          iVar7 = 0;
          local_54 = 0;
          if (0 < *(int *)(param_1 + 0xe4)) {
            piVar8 = (int *)(param_1 + 0xe8);
            do {
              iVar4 = *piVar8;
              local_50 = *(int *)(iVar4 + 0x34);
              iVar9 = local_50 * local_48;
              if (iVar2 - 1U <= local_48) {
                local_50 = *(int *)(iVar4 + 0x44);
              }
              local_5c = 0;
              if (0 < *(int *)(iVar4 + 0x38)) {
                iVar13 = iVar15 << 2;
                do {
                  if ((*(uint *)(local_44[0] + 8) < iVar3 - 1U) ||
                     (local_5c + iVar15 < *(int *)(iVar4 + 0x48))) {
                    iVar10 = iVar9 * 0x80 + *(int *)(aiStack_18[local_54] + iVar13);
                    iVar12 = local_50;
                    iVar14 = 0;
                    if (0 < local_50) {
                      do {
                        local_44[iVar7 + 1] = iVar10;
                        iVar7 = iVar7 + 1;
                        iVar10 = iVar10 + 0x80;
                        iVar12 = iVar12 + -1;
                        iVar14 = local_50;
                      } while (iVar12 != 0);
                    }
                  }
                  else {
                    iVar14 = 0;
                  }
                  if (iVar14 < *(int *)(iVar4 + 0x34)) {
                    puVar16 = (undefined4 *)(local_44[0] + 0x1c + iVar7 * 4);
                    do {
                      piVar1 = local_44 + iVar7;
                      puVar5 = (undefined2 *)*puVar16;
                      iVar14 = iVar14 + 1;
                      local_44[iVar7 + 1] = (int)puVar5;
                      iVar7 = iVar7 + 1;
                      *puVar5 = *(undefined2 *)*piVar1;
                      puVar16 = puVar16 + 1;
                    } while (iVar14 < *(int *)(iVar4 + 0x34));
                  }
                  local_5c = local_5c + 1;
                  iVar13 = iVar13 + 4;
                } while (local_5c < *(int *)(iVar4 + 0x38));
              }
              local_54 = local_54 + 1;
              piVar8 = piVar8 + 1;
            } while (local_54 < *(int *)(param_1 + 0xe4));
          }
          cVar6 = (**(code **)(*(int *)(param_1 + 0x15c) + 4))(param_1,local_44 + 1);
          if (cVar6 == '\0') {
            *(int *)(local_44[0] + 0x10) = iVar15;
            *(uint *)(local_44[0] + 0xc) = local_48;
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          local_48 = local_48 + 1;
          iVar7 = local_44[0];
        } while (local_48 < *(uint *)(param_1 + 0xf8));
      }
      iVar15 = iVar15 + 1;
      *(undefined4 *)(iVar7 + 0xc) = 0;
    } while (iVar15 < *(int *)(iVar7 + 0x14));
  }
  *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
  iVar2 = *(int *)(param_1 + 0x148);
  if (*(int *)(param_1 + 0xe4) < 2) {
    if (*(uint *)(iVar2 + 8) < *(int *)(param_1 + 0xe0) - 1U) {
      uVar11 = *(undefined4 *)(*(int *)(param_1 + 0xe8) + 0xc);
    }
    else {
      uVar11 = *(undefined4 *)(*(int *)(param_1 + 0xe8) + 0x48);
    }
    *(undefined4 *)(iVar2 + 0x14) = uVar11;
  }
  else {
    *(undefined4 *)(iVar2 + 0x14) = 1;
  }
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

