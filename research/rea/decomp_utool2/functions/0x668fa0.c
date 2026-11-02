// rea decompile_all
// name: FUN_00668fa0
// address: 0x668fa0
// body: available
// range: 0x668fa0-0x669116 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00668fa0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_14;
  uint local_10;
  int local_c;
  
  iVar1 = *(int *)(param_1 + 0x11c);
  iVar2 = *(int *)(param_1 + 0x188);
  while ((*(int *)(param_1 + 0x7c) < *(int *)(param_1 + 0x84) ||
         ((*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x84) &&
          (*(uint *)(param_1 + 0x80) <= *(uint *)(param_1 + 0x88)))))) {
    iVar4 = (*(code *)**(undefined4 **)(param_1 + 400))(param_1);
    if (iVar4 == 0) {
      return 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0xc4);
  local_c = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      if (*(char *)(iVar4 + 0x30) != '\0') {
        iVar5 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                          (param_1,*(undefined4 *)(iVar2 + 0x48 + local_c * 4),
                           *(int *)(param_1 + 0x88) * *(int *)(iVar4 + 0xc),*(int *)(iVar4 + 0xc),0)
        ;
        if (*(uint *)(param_1 + 0x88) < iVar1 - 1U) {
          uVar8 = *(uint *)(iVar4 + 0xc);
        }
        else {
          uVar8 = *(uint *)(iVar4 + 0x20) % *(uint *)(iVar4 + 0xc);
          if (uVar8 == 0) {
            uVar8 = *(uint *)(iVar4 + 0xc);
          }
        }
        pcVar3 = *(code **)(*(int *)(param_1 + 0x19c) + 4 + local_c * 4);
        iVar6 = *(int *)(param_2 + local_c * 4);
        local_14 = 0;
        if (0 < (int)uVar8) {
          uVar7 = *(uint *)(iVar4 + 0x1c);
          do {
            iVar10 = *(int *)(iVar5 + local_14 * 4);
            iVar9 = 0;
            local_10 = 0;
            if (uVar7 != 0) {
              do {
                (*pcVar3)(param_1,iVar4,iVar10,iVar6,iVar9);
                iVar9 = iVar9 + *(int *)(iVar4 + 0x24);
                local_10 = local_10 + 1;
                uVar7 = *(uint *)(iVar4 + 0x1c);
                iVar10 = iVar10 + 0x80;
              } while (local_10 < uVar7);
            }
            local_14 = local_14 + 1;
            iVar6 = iVar6 + *(int *)(iVar4 + 0x24) * 4;
          } while (local_14 < (int)uVar8);
        }
      }
      local_c = local_c + 1;
      iVar4 = iVar4 + 0x54;
    } while (local_c < *(int *)(param_1 + 0x24));
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  return 4 - (uint)(*(uint *)(param_1 + 0x88) < *(uint *)(param_1 + 0x11c));
}

