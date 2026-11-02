// rea decompile_all
// name: FUN_004ba330
// address: 0x4ba330
// body: available
// range: 0x4ba330-0x4ba549 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004ba330(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *in_ECX;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int in_XMM1_Da;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  int local_1c;
  undefined4 *local_18;
  undefined **local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070446d;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = in_XMM1_Da;
  local_20 = operator_new(0x68);
  local_8 = 0;
  piVar3 = (int *)FUN_004ba270(in_ECX);
  local_8 = 0xffffffff;
  if ((int *)*in_ECX != (int *)0x0) {
    (**(code **)(*(int *)*in_ECX + 0x2c))(&local_30,uVar2);
    FUN_004b9ce0();
    local_14 = juce::OpenGLImageType::vftable;
    local_8 = 1;
    piVar4 = (int *)FUN_006f47b0(&local_18,2,local_28,local_24,1);
    iVar6 = *piVar4;
    if (iVar6 != 0) {
      LOCK();
      *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
      UNLOCK();
    }
    puVar1 = (undefined4 *)piVar3[0x18];
    piVar3[0x18] = iVar6;
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = puVar1 + 1;
      iVar6 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)*puVar1)(1);
      }
    }
    if (local_18 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = local_18 + 1;
      iVar6 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)*local_18)(1);
      }
    }
    local_8 = 0xffffffff;
    puVar5 = operator_new(0x18);
    puVar1 = (undefined4 *)in_ECX[0x16];
    *puVar5 = *puVar1;
    puVar5[1] = puVar1[1];
    puVar5[2] = puVar1[2];
    puVar5[3] = puVar1[3];
    puVar5[4] = puVar1[4];
    puVar5[5] = puVar1[5];
    puVar1 = (undefined4 *)piVar3[0x19];
    if ((puVar1 != puVar5) && (piVar3[0x19] = (int)puVar5, puVar1 != (undefined4 *)0x0)) {
      FUN_004bfe14(puVar1,0x18);
    }
    local_18 = local_30;
    local_14 = (undefined **)local_2c;
    iVar6 = FUN_006f6dd6(piVar3[0x18],0,&juce::ImagePixelData::RTTI_Type_Descriptor,
                         &juce::OpenGLFrameBufferImage::RTTI_Type_Descriptor,0);
    if (iVar6 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(iVar6 + 0x30);
    }
    iVar6 = *piVar4;
    if (iVar6 == 0) {
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(iVar6 + 0x10);
      uVar8 = *(undefined4 *)(iVar6 + 8);
      uVar7 = *(undefined4 *)(iVar6 + 4);
    }
    iVar6 = in_ECX[0x16];
    *(undefined4 *)(iVar6 + 4) = uVar9;
    *(undefined4 **)(iVar6 + 8) = local_18;
    *(undefined ***)(iVar6 + 0xc) = local_14;
    *(undefined4 *)(iVar6 + 0x10) = uVar7;
    *(undefined4 *)(iVar6 + 0x14) = uVar8;
    piVar3[0x14] = local_1c;
    if (1 < ((int *)*piVar3)[1]) {
      piVar4 = (int *)(**(code **)(*(int *)*piVar3 + 4))(&local_20);
      iVar6 = *piVar3;
      *piVar3 = *piVar4;
      *piVar4 = iVar6;
      if (local_20 != (undefined4 *)0x0) {
        piVar4 = local_20 + 1;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)*local_20)(1);
        }
      }
    }
    piVar4 = (int *)piVar3[0x16];
    local_8 = 2;
    if (*(code **)(*piVar4 + 0xa4) != (code *)0x0) {
      (**(code **)(*piVar4 + 0xa4))(0x8d40,piVar4[1]);
    }
    glViewport(0,0,piVar4[4],piVar4[5]);
    glDisable(0xb71);
  }
  ExceptionList = local_10;
  return piVar3;
}

