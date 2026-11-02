// rea decompile_all
// name: FUN_004dd777
// address: 0x4dd777
// body: available
// range: 0x4dd777-0x4ddc66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_004dd777(void *param_1,TypeDescriptor *param_2,char param_3,char param_4)

{
  TypeDescriptor *pTVar1;
  char cVar2;
  int iVar3;
  TypeDescriptor *pTVar4;
  undefined4 uStack_118;
  undefined1 *local_114;
  TypeDescriptor *local_110;
  TypeDescriptor *local_10c;
  TypeDescriptor *local_108;
  TypeDescriptor *local_104;
  TypeDescriptor local_100;
  TypeDescriptor local_e8;
  TypeDescriptor local_e0;
  TypeDescriptor *local_d8;
  TypeDescriptor *local_d4;
  TypeDescriptor *local_d0;
  undefined4 uStack_c8;
  TypeDescriptor *local_c4;
  TypeDescriptor local_c0;
  TypeDescriptor *local_b8;
  TypeDescriptor *local_b4;
  TypeDescriptor local_b0 [3];
  TypeDescriptor local_98 [6];
  TypeDescriptor local_68 [4];
  TypeDescriptor local_48 [3];
  TypeDescriptor local_30 [3];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e1855;
  local_14 = ExceptionList;
  local_100.spare = (void *)(DAT_00955fd4 ^ (uint)&stack0xffffff08);
  ExceptionList = &local_14;
  local_100.pVFTable = (void *)0x4dd7bb;
  FUN_004d1edf();
  local_e0.pVFTable = *(void **)(*(int *)((int)param_1 + 0xdc) + 0x8c);
  local_100.pVFTable = &local_e8.spare;
  local_104 = (TypeDescriptor *)0x4dd7d7;
  FUN_004d1cdb();
  local_100.pVFTable = param_1;
  local_104 = (TypeDescriptor *)0x4dd7dd;
  cVar2 = FUN_004bf38c();
  if (cVar2 == '\0') {
    local_e0.spare = (TypeDescriptor *)0x0;
    local_d8 = (TypeDescriptor *)0x0;
    local_b0[0].pVFTable = (TypeDescriptor *)0x0;
    local_b0[0].spare = (TypeDescriptor *)0x0;
    if (local_e0.pVFTable == (void *)0x0) {
      local_e0.spare = local_c0.pVFTable;
      local_b0[0].spare = (void *)((int)local_c0.spare + (int)local_b4);
LAB_004dd88d:
      local_b0[0].pVFTable = local_c0.pVFTable;
LAB_004dd891:
      local_d8 = local_c0.spare;
    }
    else if (local_e0.pVFTable == (void *)0x1) {
      local_d8 = (TypeDescriptor *)((int)local_c0.spare + (int)&local_b4->pVFTable);
      local_e0.spare = local_c0.pVFTable;
      local_b0[0].pVFTable = local_c0.pVFTable;
      local_b0[0].spare = local_c0.spare;
    }
    else {
      if (local_e0.pVFTable == (void *)0x2) {
        local_b0[0].pVFTable = (void *)((int)local_c0.pVFTable + (int)&local_b8->pVFTable);
        local_e0.spare = local_c0.pVFTable;
        local_b0[0].spare = local_c0.spare;
        goto LAB_004dd891;
      }
      if (local_e0.pVFTable == (void *)0x3) {
        local_e0.spare = (void *)((int)local_c0.pVFTable + (int)&local_b8->pVFTable);
        local_b0[0].spare = local_c0.spare;
        goto LAB_004dd88d;
      }
    }
    local_104 = (TypeDescriptor *)(float)(int)local_b0[0].spare;
    local_100.pVFTable = (void *)0x0;
    local_e8.pVFTable = &local_10c;
    local_114 = (undefined1 *)&local_10c;
    local_108 = (TypeDescriptor *)(float)(int)local_b0[0].pVFTable;
    local_110 = (TypeDescriptor *)0x3dcccccd;
    uStack_118 = 0x4dd8c3;
    FUN_00476535();
    local_110 = (TypeDescriptor *)(float)(int)local_d8;
    local_e8.pVFTable = &uStack_118;
    local_114 = (undefined1 *)(float)(int)local_e0.spare;
    FUN_004764ae(&uStack_118,0x3e4ccccd);
    local_100.pVFTable = (void *)FUN_00476850(local_68);
    local_104 = param_2;
    local_c = 0;
    local_108 = (TypeDescriptor *)0x4dd909;
    FUN_0047ce07();
    local_c = 0xffffffff;
    local_100.pVFTable = (void *)0x4dd91d;
    FUN_004768de();
  }
  else {
    local_e8.pVFTable = &local_100;
    local_104 = (TypeDescriptor *)0x4dd7f1;
    FUN_004d076d();
    local_104 = (TypeDescriptor *)0x4dd7f9;
    FUN_0047cda7();
  }
  local_100.pVFTable = &local_c0;
  local_104 = (TypeDescriptor *)0x4dd92a;
  FUN_0047d170();
  local_e8.pVFTable = &local_100;
  local_10c = &local_100;
  local_104 = (TypeDescriptor *)0x0;
  local_108 = (TypeDescriptor *)0x1005812;
  local_110 = (TypeDescriptor *)0x4dd93f;
  FUN_004c1e29();
  local_104 = (TypeDescriptor *)0x4dd947;
  FUN_0047cda7();
  local_e0.spare = local_c0.pVFTable;
  local_d8 = local_c0.spare;
  local_d4 = local_b8;
  local_d0 = local_b4;
  if (local_e0.pVFTable != (void *)0x1) {
    local_100.pVFTable = (void *)0x1;
    local_104 = (TypeDescriptor *)0x4dd97d;
    local_100.pVFTable = (void *)FUN_004f5b6b();
    local_104 = (TypeDescriptor *)0x4dd986;
    FUN_0047d170();
  }
  if (local_e0.pVFTable != (void *)0x0) {
    local_100.pVFTable = (void *)0x1;
    local_104 = (TypeDescriptor *)0x4dd99b;
    local_100.pVFTable = (void *)FUN_004f5c0c();
    local_104 = (TypeDescriptor *)0x4dd9a4;
    FUN_0047d170();
  }
  if (local_e0.pVFTable != (void *)0x3) {
    local_100.pVFTable = (void *)0x1;
    local_104 = (TypeDescriptor *)0x4dd9bc;
    local_100.pVFTable = (void *)FUN_004f5b9e();
    local_104 = (TypeDescriptor *)0x4dd9c5;
    FUN_0047d170();
  }
  if (local_e0.pVFTable != (void *)0x2) {
    local_100.pVFTable = (void *)0x1;
    local_104 = (TypeDescriptor *)0x4dd9db;
    local_100.pVFTable = (void *)FUN_004f5bd0();
    local_104 = (TypeDescriptor *)0x4dd9e4;
    FUN_0047d170();
  }
  local_100.pVFTable = (void *)0x4dd9ee;
  cVar2 = FUN_004c3153();
  if (cVar2 == '\0') {
    local_e8.pVFTable = (TypeDescriptor *)0x3e99999a;
  }
  else if ((param_3 == '\0') && (param_4 == '\0')) {
    local_e8.pVFTable = (TypeDescriptor *)0x3f4ccccd;
  }
  else {
    local_e8.pVFTable = (TypeDescriptor *)0x3f800000;
  }
  local_100.pVFTable = local_e8.pVFTable;
  local_104 = &local_e8;
  local_10c = local_b0;
  local_108 = (TypeDescriptor *)0x3f800000;
  local_110 = (TypeDescriptor *)0x4dda35;
  FUN_004765bf();
  local_108 = (TypeDescriptor *)0x4dda3a;
  FUN_00476237();
  for (iVar3 = *(int *)((int)param_1 + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
    local_100.pVFTable = (void *)0x0;
    local_104 = &juce::TabbedButtonBar::RTTI_Type_Descriptor;
    local_108 = &juce::Component::RTTI_Type_Descriptor;
    local_10c = (TypeDescriptor *)0x0;
    local_114 = (undefined1 *)0x4dda51;
    local_110 = (TypeDescriptor *)iVar3;
    pTVar4 = (TypeDescriptor *)FUN_005cdbcf();
    if (pTVar4 != (TypeDescriptor *)0x0) goto LAB_004dda61;
  }
  pTVar4 = (TypeDescriptor *)0x0;
LAB_004dda61:
  if (pTVar4 != (TypeDescriptor *)0x0) {
    local_100.pVFTable = param_1;
    local_104 = (TypeDescriptor *)0x4dda6b;
    cVar2 = thunk_FUN_004bf38c();
    pTVar1 = (TypeDescriptor *)((uint)(cVar2 != '\0') * 2 + 0x1005813);
    local_108 = (TypeDescriptor *)0x4dda82;
    local_104 = pTVar4;
    local_100.pVFTable = pTVar1;
    cVar2 = FUN_004c1ebf();
    if (cVar2 == '\0') {
      local_100.pVFTable = (void *)((int)local_c4 + -0x3c);
      local_104 = (TypeDescriptor *)0x4ddaa9;
      cVar2 = FUN_004d30c9();
      if (cVar2 == '\0') goto LAB_004ddac5;
      local_100.pVFTable = (void *)0x4ddaba;
      FUN_004d3044();
    }
    else {
      local_100.pVFTable = (void *)0x0;
      local_108 = local_b0;
      local_10c = (TypeDescriptor *)0x4dda94;
      local_104 = pTVar1;
      FUN_004c1e29();
    }
    local_100.pVFTable = (void *)0x4ddac5;
    FUN_004d076d();
  }
LAB_004ddac5:
  local_100.pVFTable = param_1;
  local_104 = (TypeDescriptor *)0x4ddad2;
  FUN_004d1ead();
  local_100.pVFTable = (void *)0x4ddadd;
  FUN_0043bc2d();
  local_e8.spare = local_d4;
  local_c4 = local_d0;
  local_100.pVFTable = (void *)0x4ddaf8;
  cVar2 = FUN_004bf468();
  if (cVar2 != '\0') {
    local_e8.spare = local_d0;
    local_c4 = local_d4;
  }
  local_100.pVFTable = (void *)0x4ddb15;
  local_100.pVFTable = (void *)FUN_004a13c1();
  local_b0[0].pVFTable = &local_104;
  local_c = 1;
  local_108 = (TypeDescriptor *)0x4ddb30;
  FUN_004d076d();
  local_108 = local_c4;
  local_10c = local_e8.spare;
  local_110 = (TypeDescriptor *)0x4ddb48;
  FUN_004dd6b4();
  local_100.pVFTable = (void *)0x4ddb54;
  FUN_00476f80();
  if (-1 < (int)local_e0.pVFTable) {
    if ((int)local_e0.pVFTable < 2) {
      local_100.pVFTable = local_d8;
      local_108 = local_68;
      local_104 = local_e0.spare;
    }
    else {
      if (local_e0.pVFTable == (void *)0x2) {
        local_100.pVFTable = (void *)((float)local_d8 + (float)local_d0);
        local_108 = local_48;
        local_104 = local_e0.spare;
        local_10c = (TypeDescriptor *)0xbfc90fdb;
        local_110 = local_30;
        local_e8.pVFTable = local_100.pVFTable;
      }
      else {
        if (local_e0.pVFTable != (void *)0x3) goto LAB_004ddc0f;
        local_100.pVFTable = local_d8;
        local_108 = (TypeDescriptor *)&local_e0.spare;
        local_104 = (TypeDescriptor *)((float)local_d4 + (float)local_e0.spare);
        local_10c = (TypeDescriptor *)0x3fc90fdb;
        local_110 = local_b0;
        local_e8.pVFTable = local_104;
      }
      local_114 = (undefined1 *)0x4ddbac;
      FUN_004771b4();
    }
    local_10c = (TypeDescriptor *)0x4ddc04;
    FUN_0047713c();
    local_100.pVFTable = (void *)0x4ddc0f;
    FUN_00476f96();
  }
LAB_004ddc0f:
  local_100.pVFTable = local_98;
  local_104 = (TypeDescriptor *)0x4ddc1c;
  FUN_0047cd79();
  local_e0.pVFTable = (void *)0x0;
  local_104 = &local_e0;
  local_e0.spare = (void *)0x0;
  local_108 = param_2;
  local_d8 = local_e8.pVFTable;
  local_d4 = (TypeDescriptor *)uStack_c8;
  local_10c = (TypeDescriptor *)0x4ddc48;
  FUN_004a1418();
  local_104 = (TypeDescriptor *)0x4ddc4f;
  FUN_004a13db();
  ExceptionList = pvStack_18;
  return;
}

