// rea decompile_all
// name: FUN_0066ae40
// address: 0x66ae40
// body: available
// range: 0x66ae40-0x66b02a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066ae40(int param_1,int param_2,uint *param_3,uint param_4,undefined4 param_5,
                 uint *param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_10;
  int local_c;
  int *local_8;
  
  iVar2 = *(int *)(param_1 + 0x144);
  iVar5 = *(int *)(param_1 + 0xdc) * 3;
  uVar7 = *param_6;
  do {
    if (param_7 <= uVar7) {
      return;
    }
    if (*param_3 < param_4) {
      local_8 = (int *)(iVar2 + 8);
      uVar7 = param_4 - *param_3;
      uVar6 = *(int *)(iVar2 + 0x3c) - *(int *)(iVar2 + 0x34);
      if (uVar6 < uVar7) {
        uVar7 = uVar6;
      }
      (**(code **)(*(int *)(param_1 + 0x150) + 4))
                (param_1,param_2 + *param_3 * 4,local_8,*(int *)(iVar2 + 0x34),uVar7);
      if ((*(int *)(iVar2 + 0x30) == *(int *)(param_1 + 0x20)) &&
         (local_c = 0, 0 < *(int *)(param_1 + 0x3c))) {
        do {
          iVar8 = 1;
          if (0 < *(int *)(param_1 + 0xdc)) {
            iVar9 = 4;
            do {
              FUN_004c2c30(*(undefined4 *)(*local_8 - iVar9),*(undefined4 *)*local_8,
                           *(undefined4 *)(param_1 + 0x1c));
              iVar8 = iVar8 + 1;
              iVar9 = iVar9 + 4;
            } while (iVar8 <= *(int *)(param_1 + 0xdc));
          }
          local_c = local_c + 1;
          local_8 = local_8 + 1;
        } while (local_c < *(int *)(param_1 + 0x3c));
      }
      *param_3 = *param_3 + uVar7;
      *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + uVar7;
      *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) - uVar7;
    }
    else {
      if (*(int *)(iVar2 + 0x30) != 0) {
        return;
      }
      if (*(int *)(iVar2 + 0x34) < *(int *)(iVar2 + 0x3c)) {
        local_10 = 0;
        if (0 < *(int *)(param_1 + 0x3c)) {
          local_8 = (int *)(iVar2 + 8);
          do {
            iVar8 = *(int *)(iVar2 + 0x3c);
            iVar9 = *(int *)(iVar2 + 0x34);
            uVar3 = *(undefined4 *)(param_1 + 0x1c);
            iVar4 = *local_8;
            if (iVar9 < iVar8) {
              iVar1 = iVar9 * 4;
              do {
                FUN_004c2c30(*(undefined4 *)(iVar4 + iVar9 * 4),*(undefined4 *)(iVar4 + -4 + iVar1),
                             uVar3);
                iVar9 = iVar9 + 1;
              } while (iVar9 < iVar8);
            }
            local_8 = local_8 + 1;
            local_10 = local_10 + 1;
          } while (local_10 < *(int *)(param_1 + 0x3c));
        }
        *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(iVar2 + 0x3c);
      }
    }
    if (*(int *)(iVar2 + 0x34) == *(int *)(iVar2 + 0x3c)) {
      (**(code **)(*(int *)(param_1 + 0x154) + 4))
                (param_1,iVar2 + 8,*(undefined4 *)(iVar2 + 0x38),param_5,*param_6);
      *param_6 = *param_6 + 1;
      *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + *(int *)(param_1 + 0xdc);
      if (iVar5 <= *(int *)(iVar2 + 0x38)) {
        *(undefined4 *)(iVar2 + 0x38) = 0;
      }
      if (iVar5 <= *(int *)(iVar2 + 0x34)) {
        *(undefined4 *)(iVar2 + 0x34) = 0;
      }
      *(int *)(iVar2 + 0x3c) = *(int *)(param_1 + 0xdc) + *(int *)(iVar2 + 0x34);
    }
    uVar7 = *param_6;
  } while( true );
}

