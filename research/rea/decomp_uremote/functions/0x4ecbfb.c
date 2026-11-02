// rea decompile_all
// name: FUN_004ecbfb
// address: 0x4ecbfb
// body: available
// range: 0x4ecbfb-0x4ed2b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ecbfb(char param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int in_ECX;
  int *extraout_ECX;
  int unaff_ESI;
  float10 fVar12;
  int *piStack_68;
  int **ppiStack_64;
  int **ppiStack_60;
  uint uStack_5c;
  int iStack_4c;
  int *local_48;
  int *piStack_44;
  undefined1 auStack_40 [36];
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005e2c3e;
  local_14 = ExceptionList;
  uStack_5c = DAT_00955fd4 ^ (uint)&stack0xffffffa8;
  ExceptionList = &local_14;
  ppiStack_60 = (int **)0x4ecc30;
  iVar4 = thunk_FUN_004c1d58();
  ppiStack_60 = &local_48;
  ppiStack_64 = (int **)0x4ecc3f;
  (**(code **)(*(int *)(iVar4 + 0x1c) + 0x18))();
  puStack_10 = (undefined1 *)0x0;
  ppiStack_64 = (int **)(in_ECX + 4);
  piStack_68 = (int *)0x4ecc54;
  piStack_44 = (int *)FUN_0049fa60();
  piStack_68 = (int *)0x4ecc62;
  ppiStack_64 = (int **)(in_ECX + 0x7c);
  ppiStack_64 = (int **)FUN_0049fa60();
  piStack_68 = (int *)0x4ecc6c;
  piStack_44 = (int *)FUN_00439b5a();
  ppiStack_64 = (int **)0x4ecc7a;
  fVar12 = (float10)FUN_0049fa3d();
  ppiStack_64 = (int **)(float)(fVar12 * (float10)(int)piStack_44);
  piStack_68 = (int *)0x4ecc8f;
  piStack_44 = (int *)ppiStack_64;
  FUN_0044bfab();
  ppiStack_64 = (int **)0x4ecc95;
  iVar5 = FUN_005b3fb0();
  ppiStack_64 = (int **)0x4ecc9e;
  piStack_44 = (int *)FUN_004c07db();
  ppiStack_64 = (int **)0x4eccb1;
  FUN_005b3fb0();
  ppiStack_64 = (int **)(iVar5 * 2 + 300);
  piStack_68 = (int *)0x4eccbe;
  FUN_00440367();
  ppiStack_64 = (int **)0x4eccce;
  FUN_0049dba1();
  ppiStack_64 = &piStack_44;
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
  piStack_68 = (int *)0x4eccdf;
  piStack_68 = (int *)(**(code **)(*(int *)(iVar4 + 0x1c) + 0x14))();
  local_14._0_1_ = 2;
  FUN_0049dbde(auStack_40,in_ECX + 4);
  local_14._0_1_ = 1;
  piStack_68 = (int *)0x4ecd01;
  FUN_004c4d7a();
  piStack_68 = (int *)(in_ECX + 0x7c);
  piVar7 = (int *)*piStack_68;
  if ((char)*piVar7 != '\0') {
    uVar6 = FUN_00465bec(&local_48);
    piStack_68 = (int *)&stack0xffffffb0;
    local_14._0_1_ = 3;
    FUN_0049dbde(auStack_40,uVar6);
    local_14._0_1_ = 1;
    piStack_68 = (int *)0x4ecd3e;
    FUN_004652d6();
    piVar7 = extraout_ECX;
  }
  piStack_44 = (int *)&piStack_68;
  piStack_68 = piVar7;
  FUN_004c1e29(&piStack_68,0x1001810,0);
  FUN_0049dd02();
  piStack_44 = (int *)&piStack_68;
  if (*(int *)(in_ECX + 0x98) == 0) {
    piStack_68 = (int *)0xc;
    piStack_44 = (int *)&piStack_68;
    FUN_0049dc9b();
    piStack_68 = (int *)(float)unaff_ESI;
    FUN_004a15cc();
  }
  else {
    piStack_68 = (int *)0x9;
    FUN_0049dc9b();
    piStack_68 = (int *)(float)unaff_ESI;
    FUN_004a15cc();
  }
  piStack_68 = (int *)0x4ecdc6;
  local_48 = (int *)FUN_004c07db();
  piStack_68 = (int *)0x4ecdd9;
  FUN_005b3fb0();
  piStack_68 = (int *)0x4ecde4;
  FUN_005b3fb0();
  piStack_68 = (int *)0x15e;
  piStack_68 = (int *)FUN_00439b5a();
  FUN_00440367();
  piStack_68 = (int *)0x4ece09;
  iVar4 = FUN_005b3fb0();
  piStack_68 = (int *)0x28;
  piStack_44 = (int *)(iVar4 + 0x28);
  if (0 < (int)*(int **)(in_ECX + 0xf4)) {
    piVar7 = *(int **)(in_ECX + 0xec);
    local_48 = *(int **)(in_ECX + 0xf4);
    do {
      iVar4 = *piVar7;
      piVar7 = piVar7 + 1;
      local_48 = (int *)((int)local_48 + -1);
      piStack_68 = (int *)((int)piStack_68 + *(int *)(iVar4 + 0x18) + 0x10);
    } while (local_48 != (int *)0x0);
  }
  piStack_68 = (int *)FUN_00439b5a();
  local_48 = *(int **)(in_ECX + 0x124);
  while (local_48 = (int *)((int)local_48 + -1), -1 < (int)local_48) {
    piStack_68 = (int *)FUN_00439b5a();
  }
  iVar4 = *(int *)(in_ECX + 0x130) + -1;
  piVar7 = piStack_68;
  if (-1 < iVar4) {
    local_48 = (int *)(*(int *)(in_ECX + 0x128) + iVar4 * 4);
    do {
      piVar7 = (int *)FUN_00439b5a();
      local_48 = local_48 + -1;
      iVar4 = iVar4 + -1;
      piStack_68 = piVar7;
    } while (-1 < iVar4);
  }
  piStack_68 = (int *)0x4ecf14;
  local_48 = (int *)FUN_004c07db();
  piStack_68 = (int *)0x4ecf27;
  FUN_005b3fb0();
  piStack_68 = piVar7;
  piVar7 = (int *)FUN_00440367();
  iVar4 = *(int *)(in_ECX + 0x130) + -1;
  if (-1 < iVar4) {
    piStack_68 = (int *)0x4ecf4d;
    local_48 = (int *)FUN_005b3fb0();
    do {
      piStack_68 = local_48;
      FUN_004ec991();
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  piStack_68 = (int *)0x4ecf7c;
  iVar4 = FUN_004c0801();
  piStack_68 = (int *)(iVar4 + -0x32);
  piVar8 = (int *)FUN_00440367();
  if (param_1 != '\0') {
    piStack_68 = piVar7;
    piVar7 = (int *)FUN_00439b5a();
    piStack_68 = piVar8;
    piVar8 = (int *)FUN_00439b5a();
  }
  piStack_68 = piVar8;
  if ((*(byte *)(in_ECX + 0x68) & 2) == 0) {
    FUN_004efcf8(in_ECX,piVar7);
  }
  else {
    FUN_004c09cc((*(int *)(in_ECX + 0x18) / 2 - (int)piVar7 / 2) + *(int *)(in_ECX + 0x10),
                 (*(int *)(in_ECX + 0x1c) / 2 - (int)piVar8 / 2) + *(int *)(in_ECX + 0x14));
  }
  *(undefined4 *)(in_ECX + 0xdc) = 10;
  *(undefined4 *)(in_ECX + 0xe0) = 10;
  *(int **)(in_ECX + 0xe4) = piVar7 + -5;
  *(int *)(in_ECX + 0xe8) = (int)piVar8 + -10;
  iVar9 = *(int *)(in_ECX + 0xf4);
  iVar4 = iVar9 + -1;
  iVar5 = -0x10;
  if (-1 < iVar4) {
    local_48 = (int *)(*(int *)(in_ECX + 0xec) + iVar4 * 4);
    do {
      iVar1 = *local_48;
      local_48 = local_48 + -1;
      iVar4 = iVar4 + -1;
      iVar5 = iVar5 + 0x10 + *(int *)(iVar1 + 0x18);
    } while (-1 < iVar4);
  }
  iVar4 = ((int)piVar7 - iVar5) / 2;
  piStack_68 = (int *)0x4ed065;
  piVar7 = (int *)FUN_005b3fb0();
  iStack_4c = 0;
  if (0 < iVar9) {
    do {
      iVar5 = *(int *)(*(int *)(in_ECX + 0xec) + iStack_4c * 4);
      piStack_68 = (int *)0x3f733333;
      iVar9 = FUN_004c07be();
      piStack_68 = (int *)(iVar9 - *(int *)(iVar5 + 0x1c));
      local_48 = piStack_68;
      FUN_004c0bf7(iVar4);
      if ((int)local_48 < (int)piVar7) {
        piVar7 = local_48;
      }
      piStack_68 = (int *)0x0;
      iVar4 = iVar4 + 0x10 + *(int *)(iVar5 + 0x18);
      FUN_004c052f();
      iStack_4c = iStack_4c + 1;
    } while (iStack_4c < *(int *)(in_ECX + 0xf4));
  }
  iStack_4c = 0;
  piVar7 = piStack_44;
  if (0 < *(int *)(in_ECX + 0x13c)) {
    do {
      piVar8 = *(int **)(*(int *)(in_ECX + 0x134) + iStack_4c * 4);
      piStack_68 = (int *)0x0;
      piStack_44 = (int *)0x16;
      iVar4 = FUN_005cdbcf(piVar8,0,&juce::Component::RTTI_Type_Descriptor,
                           &juce::ComboBox::RTTI_Type_Descriptor);
      piVar2 = *(int **)(in_ECX + 0x104);
      for (piVar11 = piVar2; piVar11 != piVar2 + *(int *)(in_ECX + 0x10c); piVar11 = piVar11 + 1) {
        if (iVar4 == *piVar11) {
          iVar4 = (int)piVar11 - (int)piVar2 >> 2;
          goto LAB_004ed135;
        }
      }
      iVar4 = -1;
LAB_004ed135:
      if (-1 < iVar4) {
        piStack_68 = (int *)0x4ed144;
        puVar10 = (undefined4 *)FUN_00467165();
        if (*(char *)*puVar10 != '\0') {
          piVar7 = (int *)((int)piVar7 + 0x12);
        }
      }
      piStack_68 = (int *)0x0;
      iVar4 = FUN_005cdbcf(piVar8,0,&juce::Component::RTTI_Type_Descriptor,
                           &juce::TextEditor::RTTI_Type_Descriptor);
      piVar2 = *(int **)(in_ECX + 0xf8);
      for (piVar11 = piVar2; piVar11 != piVar2 + *(int *)(in_ECX + 0x100); piVar11 = piVar11 + 1) {
        if (iVar4 == *piVar11) {
          iVar4 = (int)piVar11 - (int)piVar2 >> 2;
          goto LAB_004ed191;
        }
      }
      iVar4 = -1;
LAB_004ed191:
      if (-1 < iVar4) {
        piStack_68 = (int *)0x4ed1a0;
        puVar10 = (undefined4 *)FUN_00467165();
        if (*(char *)*puVar10 != '\0') {
          piVar7 = (int *)((int)piVar7 + 0x12);
        }
      }
      piStack_68 = piVar8;
      cVar3 = FUN_004f6261();
      if (cVar3 == '\0') {
        piVar11 = *(int **)(in_ECX + 0x128);
        piVar2 = piVar11 + *(int *)(in_ECX + 0x130);
        for (; piVar11 != piVar2; piVar11 = piVar11 + 1) {
          if (piVar8 == (int *)*piVar11) {
            iVar4 = (*(int *)(in_ECX + 0x18) - piVar8[6]) / 2;
            piStack_68 = piVar7;
            goto LAB_004ed2ad;
          }
        }
        piStack_68 = (int *)0x16;
        FUN_004c07a1(0x3f4ccccd);
        piVar8 = piVar7;
        uVar6 = FUN_004c07a1(0x3dcccccd);
        FUN_004c09cc(uVar6,piVar8);
        piVar8 = piStack_44;
      }
      else {
        if (*(char *)piVar8[1] != '\0') {
          piVar7 = (int *)((int)piVar7 + 0x12);
        }
        piStack_68 = piVar7;
        iVar4 = FUN_004c07a1(0x3dcccccd);
LAB_004ed2ad:
        FUN_004c0bf7(iVar4);
        piVar8 = (int *)piVar8[7];
      }
      iStack_4c = iStack_4c + 1;
      piVar7 = (int *)((int)piVar7 + 10 + (int)piVar8);
    } while (iStack_4c < *(int *)(in_ECX + 0x13c));
  }
  piStack_68 = (int *)0x4ed26a;
  FUN_004c121d();
  piStack_68 = (int *)0x4ed277;
  FUN_004c2ddc();
  piStack_68 = (int *)0x4ed280;
  FUN_0049dbc5();
  piStack_68 = (int *)0x4ed289;
  FUN_004c4d7a();
  ExceptionList = pvStack_1c;
  return;
}

