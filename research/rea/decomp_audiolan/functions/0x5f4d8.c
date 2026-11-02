// rea decompile_all
// name: FUN_0005f4d8
// address: 0x5f4d8
// body: available
// range: 0x5f4d8-0x5f6f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0005f4d8(int *param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 local_5c;
  undefined4 local_54;
  ushort local_50 [2];
  ushort local_4c [2];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  int *piStack_34;
  undefined4 local_30;
  int local_2c;
  uint uStack_28;
  
  piStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  if (param_4 < 3) goto LAB_0005f6d8;
  bVar8 = false;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  local_5c = 0;
  uVar2 = param_4 - 2;
  local_54 = DAT_0005f6f8;
  local_50[0] = 0;
  FUN_000777e0(local_4c,param_3,local_50);
  if ((local_4c[0] & 0x3f) != 0) {
    if ((local_4c[0] & 1) != 0) {
      if (uVar2 == 0) goto LAB_0005f6d0;
      uVar1 = (uint)local_50[0];
      local_5c = 1;
      local_50[0] = local_50[0] + 1;
      uVar2 = param_4 - 3;
      bVar8 = *(char *)(local_2c + uVar1) != '\0';
    }
    if ((local_4c[0] & 2) != 0) {
      if (uVar2 < 4) goto LAB_0005f6d0;
      uVar3 = 1;
      uVar2 = uVar2 - 4;
      FUN_000779bc(auStack_48,local_2c,local_50);
    }
    if ((local_4c[0] & 4) != 0) {
      if (uVar2 < 4) goto LAB_0005f6d0;
      uVar4 = 1;
      uVar2 = uVar2 - 4;
      FUN_000779bc(auStack_44,local_2c,local_50);
    }
    if ((local_4c[0] & 8) != 0) {
      if (uVar2 < 4) goto LAB_0005f6d0;
      uVar5 = 1;
      uVar2 = uVar2 - 4;
      FUN_000779bc(auStack_40,local_2c,local_50);
    }
    if ((local_4c[0] & 0x10) != 0) {
      if (uVar2 < 8) goto LAB_0005f6d0;
      uVar6 = 1;
      uVar2 = uVar2 - 8;
      FUN_000779bc(auStack_3c,local_2c,local_50);
      FUN_000779bc(auStack_38,local_2c,local_50);
    }
    if ((local_4c[0] & 0x20) == 0) {
LAB_0005f660:
      (**(code **)(*(int *)param_1[1] + 0x10c))
                ((int *)param_1[1],local_30,local_5c,bVar8,uVar3,auStack_48,uVar4,auStack_44,uVar5,
                 auStack_40,uVar6,auStack_3c,auStack_38,uVar7,&local_54);
      FUN_001da44c(&local_54);
      return;
    }
    if (1 < uVar2) {
      uVar7 = 1;
      FUN_00077c0c(&local_54,local_2c,local_50,uVar2 & 0xffff);
      goto LAB_0005f660;
    }
  }
LAB_0005f6d0:
  FUN_001da44c(&local_54);
LAB_0005f6d8:
                    /* WARNING: Could not recover jumptable at 0x0005f6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,local_30,6);
  return;
}

