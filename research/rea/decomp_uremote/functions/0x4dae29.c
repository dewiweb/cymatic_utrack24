// rea decompile_all
// name: FUN_004dae29
// address: 0x4dae29
// body: available
// range: 0x4dae29-0x4db0fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004dae29(TypeDescriptor *param_1,int param_2,int param_3,undefined4 param_4,int *param_5,
                 undefined4 param_6,undefined4 param_7,char param_8,char param_9,undefined4 param_10
                 ,undefined4 param_11)

{
  int iVar1;
  void *pvVar2;
  int *in_ECX;
  void *extraout_ECX;
  TypeDescriptor *local_44;
  TypeDescriptor *pTStack_40;
  void *local_3c;
  TypeDescriptor local_2c;
  undefined1 *local_24;
  TypeDescriptor local_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  
  local_3c = (void *)0x0;
  pTStack_40 = &juce::Component::RTTI_Type_Descriptor;
  local_44 = &juce::DirectoryContentsDisplayComponent::RTTI_Type_Descriptor;
  local_2c.spare = (void *)0x0;
  local_3c = (void *)FUN_005cdbcf(param_11,0);
  local_2c.spare = local_3c;
  if (param_9 != '\0') {
    if (local_3c == (void *)0x0) {
      local_3c = (void *)0x4dae8a;
      FUN_004d3044();
    }
    else {
      local_3c = (void *)0x0;
      pTStack_40 = (TypeDescriptor *)0x1000540;
      local_44 = &local_2c;
      FUN_004c1e29();
    }
    local_1c.pVFTable = &local_3c;
    pTStack_40 = (TypeDescriptor *)0x4dae98;
    FUN_004d076d();
    pTStack_40 = (TypeDescriptor *)0x4daea0;
    FUN_0047d23a();
    local_3c = extraout_ECX;
  }
  local_1c.pVFTable = &local_3c;
  pTStack_40 = (TypeDescriptor *)0x4daeb1;
  FUN_004d076d();
  pTStack_40 = (TypeDescriptor *)0x4daeb9;
  FUN_0047cda7();
  if ((param_5 == (int *)0x0) || (*param_5 == 0)) {
    if (param_8 == '\0') {
      local_3c = (void *)0x4daefd;
      iVar1 = (**(code **)(*in_ECX + 8))();
    }
    else {
      local_3c = (void *)0x4daef8;
      iVar1 = (**(code **)(*in_ECX + 4))();
    }
    if (iVar1 != 0) {
      local_1c.pVFTable = &pTStack_40;
      local_3c = (void *)0x3f800000;
      local_1c.spare = (void *)0x40000000;
      local_44 = param_1;
      uStack_14 = 0x40000000;
      uStack_10 = 0x41e00000;
      pTStack_40 = (TypeDescriptor *)0x124;
      fStack_c = (float)param_3 - 4.0;
      FUN_004c8cb8();
    }
  }
  else {
    local_3c = (void *)0x124;
    pTStack_40 = (TypeDescriptor *)(param_3 + -4);
    local_44 = (TypeDescriptor *)0x1c;
    local_1c.pVFTable = &local_3c;
    FUN_0047d945(param_1,2);
  }
  if (local_2c.spare == (void *)0x0) {
    local_3c = (void *)0x4daf75;
    FUN_004d3044();
  }
  else {
    local_3c = (void *)0x0;
    pTStack_40 = (TypeDescriptor *)0x1000541;
    local_44 = &local_1c;
    FUN_004c1e29();
  }
  local_24 = (undefined1 *)&local_3c;
  pTStack_40 = (TypeDescriptor *)0x4daf83;
  FUN_004d076d();
  pTStack_40 = (TypeDescriptor *)0x4daf8b;
  FUN_0047cda7();
  local_2c.spare = (void *)(float)param_3;
  local_3c = (void *)((float)local_2c.spare * 0.7);
  pTStack_40 = (TypeDescriptor *)0x4dafb0;
  local_24 = local_3c;
  FUN_0047ceb8();
  if ((param_2 < 0x1c3) || (param_8 != '\0')) {
    param_2 = param_2 + -0x20;
    local_44 = (TypeDescriptor *)0x21;
    pvVar2 = (void *)0x20;
  }
  else {
    local_2c.pVFTable = (void *)(float)param_2;
    local_3c = (void *)((float)local_2c.pVFTable * 0.7);
    pTStack_40 = (TypeDescriptor *)0x4dafea;
    local_24 = local_3c;
    pvVar2 = (void *)FUN_004a8e4a();
    local_3c = (void *)((float)local_2c.pVFTable * 0.8);
    pTStack_40 = (TypeDescriptor *)0x4db00a;
    local_2c.pVFTable = local_3c;
    local_24 = pvVar2;
    local_2c.pVFTable = (void *)FUN_004a8e4a();
    local_3c = (void *)0x0;
    pTStack_40 = (TypeDescriptor *)0x1;
    local_1c.pVFTable = &local_44;
    local_44 = (TypeDescriptor *)0x21;
    FUN_0047d12a(0x20,0,(int)pvVar2 + -0x20,param_3);
    local_3c = (void *)((float)local_2c.spare * 0.5);
    pTStack_40 = (TypeDescriptor *)0x4db054;
    local_2c.spare = local_3c;
    FUN_0047ceb8();
    pTStack_40 = (TypeDescriptor *)0x4db065;
    local_1c.pVFTable = &local_3c;
    FUN_004d076d();
    pTStack_40 = (TypeDescriptor *)0x4db06c;
    FUN_0047cda7();
    local_3c = (void *)0x0;
    pTStack_40 = (TypeDescriptor *)0x1;
    local_1c.pVFTable = &local_44;
    local_44 = (TypeDescriptor *)0x22;
    FUN_0047d12a(local_24,0,(int)local_2c.pVFTable + (-8 - (int)local_24),param_3);
    param_2 = (param_2 - (int)local_2c.pVFTable) + -8;
    local_44 = (TypeDescriptor *)0x22;
    pvVar2 = local_2c.pVFTable;
  }
  local_1c.pVFTable = &local_44;
  local_3c = (void *)0x0;
  pTStack_40 = (TypeDescriptor *)0x1;
  FUN_0047d12a(pvVar2,0,param_2,param_3);
  return;
}

