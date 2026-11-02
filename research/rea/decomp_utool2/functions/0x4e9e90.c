// rea decompile_all
// name: FUN_004e9e90
// address: 0x4e9e90
// body: available
// range: 0x4e9e90-0x4ea095 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004e9e90(int *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int in_ECX;
  uint uVar9;
  int *_Memory;
  uint uVar10;
  bool bVar11;
  undefined *puVar12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar5 = param_1;
  iVar7 = *param_1;
  if ((iVar7 == 0x1b) && ((*(byte *)(param_1 + 1) & 7) == 0)) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  if (((iVar7 == 9) && ((*(byte *)(param_1 + 1) & 7) == 0)) ||
     ((iVar7 == 0x10027 && ((*(byte *)(param_1 + 1) & 7) == 0)))) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  param_1 = (int *)CONCAT13(cVar3,param_1._0_3_);
  local_10 = 9;
  local_c = 1;
  local_8 = 0;
  cVar1 = FUN_006e5ec0(&local_10);
  if ((cVar1 == '\0') && ((*piVar5 != 0x10025 || ((*(byte *)(piVar5 + 1) & 7) != 0)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((cVar3 == '\0') && (!bVar2)) {
    if (((bVar11) && (-1 < *(int *)(in_ECX + 0x2c))) && (uVar10 = 0, 0 < *(int *)(in_ECX + -0x44)))
    {
      bVar11 = *(int *)(in_ECX + -0x44) != 0;
      do {
        if (bVar11) {
          uVar4 = *(undefined4 *)(*(int *)(in_ECX + -0x4c) + uVar10 * 4);
        }
        else {
          uVar4 = 0;
        }
        piVar5 = (int *)FUN_006f6dd6(uVar4,0,&juce::Component::RTTI_Type_Descriptor,
                                     &juce::TextButton::RTTI_Type_Descriptor,0);
        if (piVar5 != (int *)0x0) {
          puVar6 = &param_1;
          puVar12 = &DAT_00738c10;
          FUN_0061f730(puVar6,&DAT_00738c10);
          FUN_0061fa00(puVar6,puVar12);
          puVar6 = (undefined4 *)FUN_00637190(&param_1);
          param_2 = (**(code **)(*(int *)*puVar6 + 4))(puVar6 + 2);
          _Memory = (int *)((int)param_1 + -8);
          if (_Memory != &DAT_00bfe124) {
            LOCK();
            iVar7 = *_Memory;
            *_Memory = *_Memory + -1;
            UNLOCK();
            if (iVar7 == 0) {
              FID_conflict__free(_Memory);
            }
          }
          if (((param_2 == *(int *)(in_ECX + 0x2c)) && ((*(byte *)((int)piVar5 + 0x69) & 0x10) == 0)
              ) && ((piVar5[3] == 0 || (cVar3 = FUN_006e6320(), cVar3 != '\0')))) {
            if ((undefined **)*piVar5 != juce::TextButton::vftable) {
              (*(code *)((undefined **)*piVar5)[0x2c])();
              return 1;
            }
            FUN_006cddc0(0x2f3f4f99);
            return 1;
          }
        }
        uVar10 = uVar10 + 1;
        bVar11 = uVar10 < *(uint *)(in_ECX + -0x44);
      } while ((int)uVar10 < (int)*(uint *)(in_ECX + -0x44));
    }
    return 0;
  }
  uVar10 = *(uint *)(in_ECX + -0x44);
  uVar9 = 0;
  if (uVar10 != 0) {
    while( true ) {
      if (uVar9 < uVar10) {
        iVar7 = *(int *)(*(int *)(in_ECX + -0x4c) + uVar9 * 4);
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 == param_2) break;
      uVar9 = uVar9 + 1;
      if (uVar10 <= uVar9) {
        return 1;
      }
    }
    uVar8 = uVar9 + 1;
    if (param_1._3_1_ == '\0') {
      uVar8 = uVar9 - 1;
    }
    if (uVar8 % uVar10 < uVar10) {
      FUN_006cc500(2,1);
      return 1;
    }
    FUN_006cc500(2,1);
  }
  return 1;
}

