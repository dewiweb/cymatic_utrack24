// rea decompile_all
// name: FUN_000408d8
// address: 0x408d8
// body: available
// range: 0x408d8-0x40b53 inclusive
// range: 0x40b56-0x40b93 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000408d8(int param_1,int param_2,undefined4 param_3,int param_4,int *param_5,int param_6,
                 undefined4 *param_7,undefined4 param_8)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined1 uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined1 *local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  int local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  
  iVar4 = param_1 + DAT_00040b94;
  local_50 = *(undefined4 *)(s_0z__SendNDP__No_interface_with_I_00040b98._0_4_ + 0x78);
  local_48 = *(undefined4 *)(s_0z__SendNDP__No_interface_with_I_00040b98._0_4_ + 0x80);
  local_4c = *(undefined4 *)(s_0z__SendNDP__No_interface_with_I_00040b98._0_4_ + 0x7c);
  _local_44 = CONCAT13(*(undefined1 *)((int)param_7 + 0xf),
                       CONCAT12(*(undefined1 *)((int)param_7 + 0xe),
                                CONCAT11(*(undefined1 *)((int)param_7 + 0xd),
                                         (char)*(undefined4 *)
                                                (s_0z__SendNDP__No_interface_with_I_00040b98._0_4_ +
                                                0x84))));
  puVar5 = param_7;
  if (param_2 == 0x87) {
    puVar5 = &local_50;
  }
  puVar12 = *(undefined4 **)(&DAT_00001fcc + param_1);
  while( true ) {
    local_24 = param_1;
    local_20 = param_2;
    local_1c = param_3;
    local_18 = param_4;
    if (puVar12 == (undefined4 *)0x0) {
      uVar6 = FUN_00028288(param_4 + 4,*(int *)(param_4 + 0x24) + 4,param_1 + 0x37);
      FUN_0002a1c6(0,s_0z__SendNDP__No_interface_with_I_00040b98 + 4,
                   *(undefined4 *)(local_18 + 0x1c),uVar6);
      return;
    }
    if (puVar12[0x500] == *(int *)(param_4 + 0x1c)) break;
    puVar12 = (undefined4 *)*puVar12;
  }
  FUN_001c6cb8(iVar4,param_8);
  local_40 = 3;
  iVar10 = iVar4 + 5;
  iVar13 = 0;
  do {
    if (param_6 == 0) {
      local_30 = puVar12[0x50c];
      local_34 = puVar12[0x50b];
    }
    else {
      FUN_001c6cb8(&local_34,param_6);
    }
    *(undefined1 *)(iVar10 + 1) = *(undefined1 *)((int)&local_34 + iVar13);
    if (param_6 == 0) {
      local_28 = puVar12[0x50c];
      local_2c = puVar12[0x50b];
    }
    else {
      FUN_001c6cb8(&local_2c,param_6);
    }
    iVar2 = iVar13 + 1;
    iVar13 = iVar13 + 2;
    *(undefined1 *)(iVar10 + 2) = *(undefined1 *)((int)&local_2c + iVar2);
    iVar10 = iVar10 + 2;
    local_40 = local_40 + -1;
  } while (local_40 != 0);
  *(undefined1 *)(iVar4 + 0xc) = 0x86;
  *(undefined1 *)(iVar4 + 0xd) = 0xdd;
  *(undefined1 *)(iVar4 + 0xe) = 0x60;
  *(undefined1 *)(iVar4 + 0xf) = 0;
  *(undefined1 *)(iVar4 + 0x10) = 0;
  *(undefined1 *)(iVar4 + 0x11) = 0;
  *(undefined1 *)(iVar4 + 0x12) = 0;
  *(undefined1 *)(iVar4 + 0x13) = 0x20;
  *(undefined1 *)(iVar4 + 0x14) = 0x3a;
  *(undefined1 *)(iVar4 + 0x15) = 0xff;
  FUN_000039e0(iVar4 + 0x16,param_5,0x10);
  FUN_000039e0(iVar4 + 0x26,puVar5,0x10);
  *(char *)(iVar4 + 0x36) = (char)local_20;
  *(undefined1 *)(iVar4 + 0x37) = 0;
  *(undefined1 *)(iVar4 + 0x38) = 0;
  *(undefined1 *)(iVar4 + 0x39) = 0;
  *(char *)(iVar4 + 0x3a) = (char)local_1c;
  *(undefined1 *)(iVar4 + 0x3b) = 0;
  *(undefined1 *)(iVar4 + 0x3c) = 0;
  *(undefined1 *)(iVar4 + 0x3d) = 0;
  if (local_20 == 0x87) {
    *(undefined1 *)(iVar4 + 0x3e) = *(undefined1 *)param_7;
    uVar9 = *(undefined1 *)((int)param_7 + 1);
    iVar10 = 7;
    puVar7 = param_7;
    puVar3 = (undefined1 *)(iVar4 + 0x3f);
    do {
      puVar11 = puVar3;
      uVar1 = *(undefined1 *)((int)puVar7 + 2);
      *puVar11 = uVar9;
      uVar9 = *(undefined1 *)((int)puVar7 + 3);
      puVar11[1] = uVar1;
      iVar10 = iVar10 + -1;
      puVar7 = (undefined4 *)((int)puVar7 + 2);
      puVar3 = puVar11 + 2;
    } while (iVar10 != 0);
    puVar11[2] = *(undefined1 *)((int)param_7 + 0xf);
    local_5c = puVar11 + 3;
    if ((*param_5 == 0 && param_5[1] == 0) && (param_5[2] == 0 && param_5[3] == 0))
    goto LAB_00040b12;
    *local_5c = 1;
    puVar11[4] = 1;
    local_5c = puVar11 + 5;
    puVar11 = puVar11 + 4;
    iVar10 = 0;
    local_40 = 3;
    do {
      if (param_6 == 0) {
        local_30 = puVar12[0x50c];
        local_34 = puVar12[0x50b];
      }
      else {
        FUN_001c6cb8(&local_34,param_6);
      }
      puVar11[1] = *(undefined1 *)((int)&local_34 + iVar10);
      if (param_6 == 0) {
        local_28 = puVar12[0x50c];
        local_2c = puVar12[0x50b];
      }
      else {
        FUN_001c6cb8(&local_2c,param_6);
      }
      iVar13 = iVar10 + 1;
      iVar10 = iVar10 + 2;
      puVar11[2] = *(undefined1 *)((int)&local_2c + iVar13);
      puVar11 = puVar11 + 2;
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  else {
    FUN_000039e0((undefined1 *)(iVar4 + 0x3e),param_5,0x10);
    *(undefined1 *)(iVar4 + 0x4e) = 2;
    *(undefined1 *)(iVar4 + 0x4f) = 1;
    local_5c = (undefined1 *)(iVar4 + 0x50);
    iVar10 = iVar4 + 0x4f;
    iVar13 = 0;
    local_40 = 3;
    do {
      if (param_6 == 0) {
        local_28 = puVar12[0x50c];
        local_2c = puVar12[0x50b];
      }
      else {
        FUN_001c6cb8(&local_2c,param_6);
      }
      *(undefined1 *)(iVar10 + 1) = *(undefined1 *)((int)&local_2c + iVar13);
      if (param_6 == 0) {
        local_30 = puVar12[0x50c];
        local_34 = puVar12[0x50b];
      }
      else {
        FUN_001c6cb8(&local_34,param_6);
      }
      iVar2 = iVar13 + 1;
      iVar13 = iVar13 + 2;
      *(undefined1 *)(iVar10 + 2) = *(undefined1 *)((int)&local_34 + iVar2);
      iVar10 = iVar10 + 2;
      local_40 = local_40 + -1;
    } while (local_40 != 0);
    local_40 = 0;
  }
  local_5c = local_5c + 6;
LAB_00040b12:
  iVar10 = DAT_00040bd0 - local_24;
  *(char *)(iVar4 + 0x13) = (char)(local_5c + iVar10);
  uVar8 = FUN_00028fbc(param_5,puVar5,0x3a,local_24 + DAT_00040bd4,(uint)(local_5c + iVar10) & 0xff)
  ;
  iVar10 = local_24 + DAT_00040bd8;
  *(char *)(iVar10 + 0x18) = (char)~uVar8;
  *(char *)(iVar10 + 0x19) = (char)(~uVar8 >> 8);
  FUN_001e58ec(iVar4,local_5c,*(undefined4 *)(local_18 + 0x1c));
  return;
}

