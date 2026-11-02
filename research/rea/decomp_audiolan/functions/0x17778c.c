// rea decompile_all
// name: FUN_0017778c
// address: 0x17778c
// body: available
// range: 0x17778c-0x177979 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0017778c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 auStack_178 [88];
  undefined1 auStack_120 [128];
  undefined1 auStack_a0 [68];
  undefined1 auStack_5c [36];
  undefined1 auStack_38 [20];
  int iStack_24;
  int *piStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iStack_24 = param_1;
  piStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  if ((code *)*DAT_0017797c == entry) {
    iVar3 = FUN_0019b388(0x5c);
  }
  else {
    iVar3 = (*(code *)*DAT_0017797c)(0x5c);
  }
  *param_2 = iVar3;
  piVar1 = DAT_00177980;
  if (iVar3 != 0) {
    if (*DAT_00177980 == DAT_00177984) {
      *DAT_00177980 = 0;
    }
    FUN_000038a0(iVar3,0x5c);
    iVar3 = *piVar1 + 1;
    *piVar1 = iVar3;
    *(int *)*param_2 = iVar3;
    *(undefined4 *)(*param_2 + 4) = 0xe10;
    iVar3 = FUN_001a6f50(local_1c);
    puVar2 = DAT_00177988;
    *(int *)(*param_2 + 0xc) = iVar3;
    iVar5 = *param_2;
    if (iVar3 == 0) {
      if (iVar5 != 0) {
        if ((code *)*puVar2 == entry) {
          FUN_0018a280(iVar5);
        }
        else {
          (*(code *)*puVar2)(iVar5);
        }
      }
    }
    else {
      uVar4 = FUN_001a6f50(param_5);
      *(undefined4 *)(*param_2 + 0x14) = uVar4;
      iVar3 = FUN_001a6f50(local_18);
      *(int *)(*param_2 + 0x10) = iVar3;
      if (iVar3 != 0) {
        local_1a4 = 0;
        local_1a0 = 0;
        local_19c = 0;
        local_198 = 0;
        local_194 = 0;
        local_190 = 0;
        local_18c = 0;
        local_188 = 0;
        FUN_00187238(&local_1a4,0x10);
        FUN_000038a0(auStack_120,0x80);
        FUN_000038a0(auStack_a0,0x44);
        local_184 = 0;
        local_180 = 0;
        local_17c = 0;
        FUN_00187258(param_1,2,auStack_120,0x80);
        if (*(code **)(param_1 + 0x5c) != entry) {
          (**(code **)(param_1 + 0x5c))(param_1,auStack_a0,0x41,&local_184,10);
        }
        FUN_001a0e4c(auStack_178);
        uVar4 = FUN_000034d0(local_1c);
        FUN_001a15e0(auStack_178,local_1c,uVar4);
        FUN_001a15e0(auStack_178,&DAT_0017798c,1);
        uVar4 = FUN_000034d0(local_18);
        FUN_001a15e0(auStack_178,local_18,uVar4);
        FUN_001a15e0(auStack_178,&DAT_0017798c,1);
        uVar4 = FUN_000034d0(auStack_120);
        FUN_001a15e0(auStack_178,auStack_120,uVar4);
        FUN_001a15e0(auStack_178,&DAT_0017798c,1);
        uVar4 = FUN_000034d0(auStack_a0);
        FUN_001a15e0(auStack_178,auStack_a0,uVar4);
        FUN_001a15e0(auStack_178,&DAT_0017798c,1);
        uVar4 = FUN_000034d0(&local_184);
        FUN_001a15e0(auStack_178,&local_184,uVar4);
        FUN_001a15e0(auStack_178,&DAT_0017798c,1);
        uVar4 = FUN_000034d0(&local_1a4);
        FUN_001a15e0(auStack_178,&local_1a4,uVar4);
        FUN_001a0dc4(auStack_38,auStack_178);
        FUN_0001f170(auStack_38,auStack_5c);
        FUN_001a702a(*param_2 + 0x18,auStack_5c,0xf);
        return 0;
      }
      if (*(int *)(*param_2 + 0x14) != 0) {
        if ((code *)*puVar2 == entry) {
          FUN_0018a280();
        }
        else {
          (*(code *)*puVar2)();
        }
      }
      if (*(int *)(*param_2 + 0xc) != 0) {
        if ((code *)*puVar2 == entry) {
          FUN_0018a280();
        }
        else {
          (*(code *)*puVar2)();
        }
      }
      if (*param_2 != 0) {
        if ((code *)*puVar2 == entry) {
          FUN_0018a280();
        }
        else {
          (*(code *)*puVar2)();
        }
      }
    }
    *param_2 = 0;
    return 0xfffffffc;
  }
  return 0xfffffffc;
}

