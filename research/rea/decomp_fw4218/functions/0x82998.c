// rea decompile_all
// name: FUN_00082998
// address: 0x82998
// body: available
// range: 0x82998-0x82c63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00082998(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 auStack_b4 [84];
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  local_34 = 0;
  local_38 = 0;
  local_3c = 0x1a;
  local_40 = 5;
  local_44 = 3;
  local_48 = *(undefined4 *)(param_2 + 0x1c);
  local_4c = 0x40;
  local_50 = 0;
  local_54 = 1;
  local_30 = param_1;
  iStack_2c = param_2;
  uStack_28 = param_3;
  FUN_000f4e84();
  local_58 = FUN_000f5144();
  if (DAT_00082c64 < *(uint *)(param_2 + 0x1c)) {
    uVar4 = 0x60000;
  }
  else {
    uVar4 = FUN_00006604(0x300000,0x18);
  }
  FUN_000f8ee0();
  local_5c = FUN_000f6910();
  FUN_00069a9c(local_5c);
  FUN_00085844(local_30,param_2);
  FUN_000bca8c(local_30);
  local_60 = 0;
  if ((*(int *)(param_2 + 0x58) == 1) && (*(uint *)(param_2 + 0x50) < *(uint *)(param_2 + 0x4c))) {
    local_60 = *(int *)(param_2 + 0x1c) * *(int *)(param_2 + 0x4c);
  }
  uVar2 = FUN_00083bc0(local_30,1);
  local_e4 = local_60;
  local_dc = local_54;
  local_e8 = 1;
  local_e0 = uVar2;
  local_d8 = uVar4;
  FUN_0014afac(auStack_b4,local_38,local_3c,0,local_40,local_44,0x300000,local_48,param_2 + 8,1,
               local_4c,local_50);
  for (bVar1 = 0; bVar1 < 0x18; bVar1 = bVar1 + 1) {
    iVar6 = FUN_0023bdc8(param_2 + 0x74,bVar1);
    FUN_0014aef0(auStack_b4,bVar1,(int)(char)*(undefined4 *)(iVar6 + 0xc));
  }
  piVar3 = (int *)FUN_000f8ee0();
  local_34 = (**(code **)(*piVar3 + 0x80))(piVar3,auStack_b4);
  if (local_34 == 1) {
    if (*(uint *)(param_2 + 0x4c) < *(uint *)(param_2 + 0x80)) {
      iVar6 = *(int *)(param_2 + 0x8c);
    }
    else {
      iVar6 = *(int *)(param_2 + 0x4c) * *(int *)(param_2 + 0x1c);
    }
    iVar5 = iVar6 + *(int *)(param_2 + 0x1c) * -9;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    uVar4 = FUN_001b6eb8(local_58);
    FUN_00149fbc(&local_e8,1,0x2000,0,param_2 + 0xc,uVar4,local_50,local_30 + 0x7c,iVar6,iVar5,uVar2
                );
    piVar3 = (int *)FUN_000f8ee0();
    local_34 = (**(code **)(*piVar3 + 0x80))(piVar3,&local_e8);
    if (local_34 == 0) {
      FUN_00002898(DAT_00082c68);
    }
    FUN_0014a0ac(&local_e8);
    FUN_0014b100(auStack_b4);
    uVar4 = 0;
  }
  else {
    FUN_00069a4c(local_5c);
    FUN_00002898(DAT_00082c6c);
    FUN_0014b100(auStack_b4);
    uVar4 = 0x18;
  }
  return uVar4;
}

