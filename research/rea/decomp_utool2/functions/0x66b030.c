// rea decompile_all
// name: FUN_0066b030
// address: 0x66b030
// body: available
// range: 0x66b030-0x66b20f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066b030(int param_1,int param_2,uint *param_3,uint param_4,int param_5,uint *param_6,
                 uint param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_c;
  
  iVar2 = *(int *)(param_1 + 0x144);
  if (*param_3 < param_4) {
    while (*param_6 < param_7) {
      uVar5 = *(int *)(param_1 + 0xdc) - *(int *)(iVar2 + 0x34);
      uVar7 = param_4 - *param_3;
      if (uVar5 < uVar7) {
        uVar7 = uVar5;
      }
      (**(code **)(*(int *)(param_1 + 0x150) + 4))
                (param_1,param_2 + *param_3 * 4,iVar2 + 8,*(undefined4 *)(iVar2 + 0x34),uVar7);
      *param_3 = *param_3 + uVar7;
      *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + uVar7;
      piVar6 = (int *)(iVar2 + 0x30);
      *piVar6 = *piVar6 - uVar7;
      if ((*piVar6 == 0) && (*(int *)(iVar2 + 0x34) < *(int *)(param_1 + 0xdc))) {
        local_c = 0;
        if (0 < *(int *)(param_1 + 0x3c)) {
          piVar6 = (int *)(iVar2 + 8);
          do {
            iVar3 = *(int *)(param_1 + 0xdc);
            iVar8 = *(int *)(iVar2 + 0x34);
            uVar4 = *(undefined4 *)(param_1 + 0x1c);
            iVar9 = *piVar6;
            if (iVar8 < iVar3) {
              iVar1 = iVar8 + -1;
              do {
                FUN_004c2c30(*(undefined4 *)(iVar9 + iVar8 * 4),*(undefined4 *)(iVar9 + iVar1 * 4),
                             uVar4);
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar3);
            }
            local_c = local_c + 1;
            piVar6 = piVar6 + 1;
          } while (local_c < *(int *)(param_1 + 0x3c));
        }
        *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(param_1 + 0xdc);
      }
      if (*(int *)(iVar2 + 0x34) == *(int *)(param_1 + 0xdc)) {
        (**(code **)(*(int *)(param_1 + 0x154) + 4))(param_1,iVar2 + 8,0,param_5,*param_6);
        *(undefined4 *)(iVar2 + 0x34) = 0;
        *param_6 = *param_6 + 1;
      }
      if ((*(int *)(iVar2 + 0x30) == 0) && (*param_6 < param_7)) {
        param_3 = (uint *)0x0;
        if (0 < *(int *)(param_1 + 0x3c)) {
          piVar6 = (int *)(*(int *)(param_1 + 0x44) + 0xc);
          do {
            iVar2 = *piVar6;
            iVar3 = piVar6[4];
            iVar9 = *param_6 * *piVar6;
            iVar8 = *(int *)(param_5 + (int)param_3 * 4);
            if (iVar9 < (int)(iVar2 * param_7)) {
              iVar1 = iVar9 + -1;
              do {
                FUN_004c2c30(*(undefined4 *)(iVar8 + iVar9 * 4),*(undefined4 *)(iVar8 + iVar1 * 4),
                             iVar3 << 3);
                iVar9 = iVar9 + 1;
              } while (iVar9 < (int)(iVar2 * param_7));
            }
            param_3 = (uint *)((int)param_3 + 1);
            piVar6 = piVar6 + 0x15;
          } while ((int)param_3 < *(int *)(param_1 + 0x3c));
        }
        *param_6 = param_7;
        return;
      }
      if (param_4 <= *param_3) {
        return;
      }
    }
  }
  return;
}

