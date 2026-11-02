// rea decompile_all
// name: FUN_00669370
// address: 0x669370
// body: available
// range: 0x669370-0x6695ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00669370(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  int local_2c;
  int local_24;
  int local_18;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x188);
  iVar2 = *(int *)(param_1 + 0x11c);
  uVar9 = *(int *)(param_1 + 0x138) - 1;
  iVar11 = *(int *)(iVar1 + 0x18);
  if (iVar11 < *(int *)(iVar1 + 0x1c)) {
    do {
      uVar13 = *(uint *)(iVar1 + 0x14);
      if (uVar13 <= uVar9) {
        do {
          _memset(*(void **)(iVar1 + 0x20),0,*(int *)(param_1 + 0x140) << 7);
          cVar6 = (**(code **)(*(int *)(param_1 + 0x198) + 4))(param_1,(undefined4 *)(iVar1 + 0x20))
          ;
          if (cVar6 == '\0') {
            *(uint *)(iVar1 + 0x14) = uVar13;
            *(int *)(iVar1 + 0x18) = iVar11;
            return 0;
          }
          iVar14 = 0;
          local_18 = 0;
          local_8 = 0;
          if (0 < *(int *)(param_1 + 0x124)) {
            piVar12 = (int *)(param_1 + 0x128);
            do {
              iVar3 = *piVar12;
              if (*(char *)(iVar3 + 0x30) == '\0') {
                iVar14 = iVar14 + *(int *)(iVar3 + 0x3c);
                local_8 = iVar14;
              }
              else {
                pcVar4 = *(code **)(*(int *)(param_1 + 0x19c) + 4 + *(int *)(iVar3 + 4) * 4);
                if (uVar13 < uVar9) {
                  iVar7 = *(int *)(iVar3 + 0x34);
                }
                else {
                  iVar7 = *(int *)(iVar3 + 0x44);
                }
                iVar5 = *(int *)(iVar3 + 0x40);
                iVar10 = *(int *)(param_2 + *(int *)(iVar3 + 4) * 4) +
                         *(int *)(iVar3 + 0x24) * iVar11 * 4;
                local_2c = 0;
                if (0 < *(int *)(iVar3 + 0x38)) {
                  do {
                    if (((*(uint *)(param_1 + 0x80) < iVar2 - 1U) ||
                        (local_2c + iVar11 < *(int *)(iVar3 + 0x48))) && (0 < iVar7)) {
                      puVar15 = (undefined4 *)(iVar1 + 0x20 + local_8 * 4);
                      iVar14 = iVar5 * uVar13;
                      local_24 = iVar7;
                      do {
                        (*pcVar4)(param_1,iVar3,*puVar15,iVar10,iVar14);
                        iVar14 = iVar14 + *(int *)(iVar3 + 0x24);
                        puVar15 = puVar15 + 1;
                        local_24 = local_24 + -1;
                      } while (local_24 != 0);
                    }
                    iVar14 = local_8 + *(int *)(iVar3 + 0x34);
                    iVar10 = iVar10 + *(int *)(iVar3 + 0x24) * 4;
                    local_2c = local_2c + 1;
                    local_8 = iVar14;
                  } while (local_2c < *(int *)(iVar3 + 0x38));
                }
              }
              local_18 = local_18 + 1;
              piVar12 = piVar12 + 1;
            } while (local_18 < *(int *)(param_1 + 0x124));
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 <= uVar9);
      }
      iVar11 = iVar11 + 1;
      *(undefined4 *)(iVar1 + 0x14) = 0;
    } while (iVar11 < *(int *)(iVar1 + 0x1c));
  }
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  if (*(uint *)(param_1 + 0x11c) <= *(uint *)(param_1 + 0x80)) {
    (**(code **)(*(int *)(param_1 + 400) + 0xc))(param_1);
    return 4;
  }
  iVar1 = *(int *)(param_1 + 0x188);
  if (*(int *)(param_1 + 0x124) < 2) {
    if (*(uint *)(param_1 + 0x80) < *(uint *)(param_1 + 0x11c) - 1) {
      uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x128) + 0xc);
    }
    else {
      uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x128) + 0x48);
    }
    *(undefined4 *)(iVar1 + 0x1c) = uVar8;
  }
  else {
    *(undefined4 *)(iVar1 + 0x1c) = 1;
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return 3;
}

