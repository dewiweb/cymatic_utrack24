// rea decompile_all
// name: FUN_006712d0
// address: 0x6712d0
// body: available
// range: 0x6712d0-0x6714cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006712d0(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined2 *puVar13;
  int iVar14;
  int iVar15;
  undefined4 *local_20;
  int local_1c;
  uint local_c;
  
  local_1c = 0;
  iVar2 = *(int *)(param_1 + 0x148);
  uVar10 = *(int *)(param_1 + 0xe0) - 1;
  iVar15 = *(int *)(param_1 + 0x44);
  if (0 < *(int *)(param_1 + 0x3c)) {
    local_20 = (undefined4 *)(iVar2 + 0x40);
    do {
      iVar6 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                        (param_1,*local_20,*(int *)(iVar2 + 8) * *(int *)(iVar15 + 0xc),
                         *(int *)(iVar15 + 0xc),1);
      if (*(uint *)(iVar2 + 8) < uVar10) {
        local_c = *(uint *)(iVar15 + 0xc);
      }
      else {
        local_c = *(uint *)(iVar15 + 0x20) % *(uint *)(iVar15 + 0xc);
        if (local_c == 0) {
          local_c = *(uint *)(iVar15 + 0xc);
        }
      }
      uVar3 = *(uint *)(iVar15 + 0x1c);
      uVar4 = *(uint *)(iVar15 + 8);
      uVar12 = uVar3 % uVar4;
      if (0 < (int)uVar12) {
        uVar12 = uVar4 - uVar12;
      }
      iVar14 = 0;
      if (0 < (int)local_c) {
        do {
          iVar5 = *(int *)(iVar6 + iVar14 * 4);
          (**(code **)(*(int *)(param_1 + 0x158) + 4))
                    (param_1,iVar15,*(undefined4 *)(param_2 + local_1c * 4),iVar5,iVar14 * 8,0,uVar3
                    );
          if (0 < (int)uVar12) {
            puVar13 = (undefined2 *)(iVar5 + uVar3 * 0x80);
            _memset(puVar13,0,uVar12 << 7);
            uVar1 = puVar13[-0x40];
            uVar7 = uVar12;
            if (0 < (int)uVar12) {
              do {
                *puVar13 = uVar1;
                puVar13 = puVar13 + 0x40;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)local_c);
      }
      if (*(uint *)(iVar2 + 8) == uVar10) {
        uVar7 = (uVar3 + uVar12) / uVar4;
        if ((int)local_c < *(int *)(iVar15 + 0xc)) {
          do {
            puVar13 = *(undefined2 **)(iVar6 + local_c * 4);
            iVar14 = *(int *)(iVar6 + -4 + local_c * 4);
            _memset(puVar13,0,(uVar3 + uVar12) * 0x80);
            if (uVar7 != 0) {
              uVar9 = uVar7;
              do {
                uVar1 = *(undefined2 *)(iVar14 + -0x80 + uVar4 * 0x80);
                iVar14 = iVar14 + uVar4 * 0x80;
                puVar8 = puVar13;
                uVar11 = uVar4;
                if (0 < (int)uVar4) {
                  do {
                    *puVar8 = uVar1;
                    uVar11 = uVar11 - 1;
                    puVar8 = puVar8 + 0x40;
                  } while (uVar11 != 0);
                }
                puVar13 = puVar13 + uVar4 * 0x40;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            local_c = local_c + 1;
          } while ((int)local_c < *(int *)(iVar15 + 0xc));
        }
      }
      local_1c = local_1c + 1;
      local_20 = local_20 + 1;
      iVar15 = iVar15 + 0x54;
    } while (local_1c < *(int *)(param_1 + 0x3c));
  }
  FUN_006710c0(param_1,param_2);
  return;
}

