// rea decompile_all
// name: FUN_00085148
// address: 0x85148
// body: available
// range: 0x85148-0x854c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00085148(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint local_54;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  int *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 auStack_3c [12];
  int *piStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  piStack_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  iVar1 = FUN_00157ac8(param_1 + 0x19,param_2);
  if ((iVar1 == 0) || (iVar1 = FUN_0015750c(param_1 + 0x1e,local_28), iVar1 == 0)) {
    FUN_00087b9c(param_1 + 0x19,local_2c);
    FUN_00084558(param_1 + 0x1e,local_28);
    FUN_001bbbd0(auStack_3c);
    uVar2 = FUN_0008cf78();
    iVar1 = FUN_0008ce54(uVar2,s_AudioHWService_000854c8,auStack_3c);
    if (iVar1 == 0) {
      iVar1 = FUN_000a4714(auStack_3c);
    }
    else {
      FUN_00110eec();
      uVar3 = FUN_00110c1c();
      local_40 = 0;
      iVar1 = FUN_00157aa4(param_1 + 0x19);
      if (iVar1 == 0) {
        local_40 = 0;
      }
      else if (iVar1 == 1) {
        local_40 = 1;
      }
      else {
        FUN_000028a4(DAT_000854d8);
        local_40 = 0;
      }
      local_44 = 0;
      iVar1 = FUN_00157abc(param_1 + 0x19);
      if (iVar1 == 0) {
        local_44 = 0;
      }
      else if (iVar1 == 1) {
        local_44 = 1;
      }
      else {
        FUN_000028a4(_DAT_000854dc);
        local_44 = 0;
      }
      iVar1 = FUN_00157ab0(param_1 + 0x19);
      if (iVar1 == 1) {
        local_54 = FUN_00042c90(local_40,local_44,4);
        FUN_0007b950(auStack_50,local_54);
        local_48 = (int *)FUN_001d75e4(auStack_3c);
        iVar1 = (**(code **)(*local_48 + 0x50))(local_48,0);
        if (iVar1 != 0) {
          iVar1 = FUN_0014d240(iVar1);
          FUN_001bba38(iVar1,auStack_50,0xffffffff);
          local_54 = uVar3 ^ 1;
          FUN_001b9838(iVar1 + 0x4c,&local_54,0xffffffff);
        }
        piVar4 = (int *)FUN_001d75e4(auStack_3c);
        iVar1 = (**(code **)(*piVar4 + 0x50))(piVar4,2);
        if (iVar1 != 0) {
          iVar1 = FUN_0014d240(iVar1);
          FUN_001bba38(iVar1,auStack_50,0xffffffff);
          local_54 = uVar3 ^ 1;
          FUN_001b9838(iVar1 + 0x4c,&local_54,0xffffffff);
        }
        FUN_0007b9a4(auStack_50);
      }
      else {
        FUN_000028a4(s____ERROR__CustomHWService__reset_000854dd + 3);
      }
      piVar4 = (int *)FUN_001d75e4(auStack_3c);
      iVar1 = (**(code **)(*piVar4 + 0x6c))(piVar4,0);
      if (iVar1 != 0) {
        FUN_000c8c20(iVar1);
      }
      piVar4 = (int *)FUN_001d75e4(auStack_3c);
      iVar1 = (**(code **)(*piVar4 + 0x6c))(piVar4,1);
      if (iVar1 != 0) {
        FUN_000c8c20(iVar1);
      }
      FUN_001db678(auStack_4c,param_1 + 0x27);
      while( true ) {
        FUN_001db65c(&local_48,param_1 + 0x27);
        iVar1 = FUN_001d39d8(auStack_4c,&local_48);
        if (iVar1 == 0) break;
        iVar1 = FUN_001d7b24(auStack_4c);
        piVar5 = *(int **)(iVar1 + 4);
        piVar4 = (int *)FUN_001d75e4(auStack_3c);
        (**(code **)(*piVar4 + 0x24))(piVar4,piVar5);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 4))(piVar5);
        }
        FUN_001c0548(auStack_4c);
      }
      FUN_001db694(param_1 + 0x27);
      (**(code **)(*param_1 + 0x10))(param_1);
      iVar1 = FUN_000a4714(auStack_3c);
    }
  }
  return iVar1;
}

