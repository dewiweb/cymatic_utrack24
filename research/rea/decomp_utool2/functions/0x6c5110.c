// rea decompile_all
// name: FUN_006c5110
// address: 0x6c5110
// body: available
// range: 0x6c5110-0x6c5221 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_006c5110(undefined4 *param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int in_ECX;
  bool bVar9;
  undefined1 *puVar10;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  undefined4 local_c;
  int local_8;
  
  bVar9 = false;
  local_c = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = *(uint *)(in_ECX + 0x30);
  local_8 = in_ECX;
  bVar2 = false;
  bVar5 = false;
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    if (uVar1 < *(uint *)(local_8 + 0x30)) {
      uVar7 = *(undefined4 *)(*(int *)(local_8 + 0x28) + uVar1 * 4);
    }
    else {
      uVar7 = 0;
    }
    piVar6 = (int *)FUN_006f6dd6(uVar7,0,&juce::Component::RTTI_Type_Descriptor,
                                 &juce::Drawable::RTTI_Type_Descriptor,0);
    if (piVar6 != (int *)0x0) {
      puVar8 = (undefined4 *)piVar6[9];
      if (puVar8 == (undefined4 *)0x0) {
        bVar2 = true;
        uVar7 = (**(code **)(*piVar6 + 0xb8))(local_3c);
      }
      else {
        local_7c = *puVar8;
        uStack_78 = puVar8[1];
        uStack_74 = puVar8[2];
        uStack_70 = puVar8[3];
        bVar9 = true;
        bVar5 = true;
        local_6c = *(undefined8 *)(puVar8 + 4);
        puVar8 = &local_7c;
        puVar10 = local_1c;
        local_64 = local_7c;
        uStack_60 = uStack_78;
        uStack_5c = uStack_74;
        uStack_58 = uStack_70;
        (**(code **)(*piVar6 + 0xb8))(local_2c,puVar10,puVar8);
        uVar7 = FUN_0046f780(puVar10,puVar8);
      }
      puVar8 = (undefined4 *)FUN_0046f9b0(local_4c,uVar7);
      *param_1 = *puVar8;
      param_1[1] = puVar8[1];
      param_1[2] = puVar8[2];
      param_1[3] = puVar8[3];
      bVar3 = false;
      if (!bVar2) {
        bVar3 = bVar2;
      }
      bVar4 = false;
      if (!bVar5) {
        bVar4 = bVar5;
      }
      bVar2 = bVar3;
      bVar5 = bVar4;
      if (bVar9) {
        bVar9 = false;
      }
    }
  }
  return param_1;
}

