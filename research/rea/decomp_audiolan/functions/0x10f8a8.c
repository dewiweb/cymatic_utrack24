// rea decompile_all
// name: FUN_0010f8a8
// address: 0x10f8a8
// body: available
// range: 0x10f8a8-0x10f9f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0010f8a8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined1 auStack_44 [4];
  int *local_40;
  int *local_3c;
  int *local_38;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  
  uVar7 = s_lY__RWSTDERR_0010f9f4._0_4_;
  local_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  if (*(int *)s_lY__RWSTDERR_0010f9f4._0_4_ == 0) {
    iVar6 = s_lY__RWSTDERR_0010f9f4._0_4_ + 0xc;
    puVar2 = (undefined1 *)FUN_000034b8(iVar6,0x3a);
    uVar4 = s_lY__RWSTDERR_0010f9f4._0_4_;
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
      iVar3 = FUN_00002ed0(puVar2 + 1,&DAT_0010fa04,uVar4 + 4);
      if ((iVar3 != 1) || (*(int *)(uVar7 + 4) < 1)) {
        *(undefined4 *)(uVar7 + 4) = 1;
      }
    }
    piVar1 = DAT_0010fa08;
    local_3c = DAT_0010fa08;
    if (DAT_0010fa08 != (int *)0x0) {
      DAT_0010fa08[1] = 0x200;
      piVar1[2] = 0;
      piVar1[3] = 0;
      local_38 = piVar1 + 4;
      *piVar1 = DAT_0010fa0c;
      uVar4 = FUN_001da358(&local_40,&DAT_0010fa10,auStack_2c);
      iVar3 = FUN_001da408(local_38,uVar4);
      FUN_001da44c(&local_40);
      *(undefined4 *)(iVar3 + -0x10) = DAT_0010fa14;
    }
    piVar1 = DAT_0010fa08;
    uVar4 = FUN_001da358(&local_4c,iVar6,auStack_30);
    uVar5 = FUN_00161778(&local_50);
    uVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,uVar4,uVar5);
    *(undefined4 *)(uVar7 + 8) = uVar4;
    if ((local_50 != 0) &&
       (iVar3 = *(int *)(local_50 + 0x1c) + -1, *(int *)(local_50 + 0x1c) = iVar3, iVar3 == 0)) {
      FUN_0016d744(*(undefined4 *)(local_50 + 0x18));
      FUN_0016d744(*(undefined4 *)(local_50 + 8));
      FUN_001c0f94(local_50);
      FUN_0016d758();
    }
    FUN_001da44c(&local_4c);
    *(int *)uVar7 = iVar6;
  }
  iVar6 = local_1c;
  piVar1 = DAT_0010fa08;
  iVar3 = *(int *)(uVar7 + 8);
  uVar4 = 0;
  if (iVar3 != -1) {
    local_40 = &local_48;
    uVar7 = *(undefined4 *)(uVar7 + 4);
    local_4c = FUN_001da358(auStack_44,s_lY__RWSTDERR_0010f9f4 + 0xc,auStack_34);
    local_50 = iVar6;
    (**(code **)(*piVar1 + 0x10))(local_40,piVar1,iVar3,uVar7);
    FUN_001da44c(auStack_44);
    if (*(int *)(local_48 + -4) == 0) {
      FUN_001da44c(&local_48);
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0010f84e(local_24,local_20,local_48,local_18);
      FUN_001da44c(&local_48);
    }
  }
  return uVar4;
}

