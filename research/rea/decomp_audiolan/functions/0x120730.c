// rea decompile_all
// name: FUN_00120730
// address: 0x120730
// body: available
// range: 0x120730-0x12094b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00120730(int *param_1,code *param_2,int *param_3,undefined4 param_4,uint *param_5,
                  uint *param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint local_98 [3];
  uint local_8c [3];
  undefined1 auStack_80 [4];
  undefined4 local_7c;
  undefined1 auStack_74 [4];
  undefined4 local_70;
  undefined1 auStack_68 [8];
  uint local_60 [3];
  undefined1 auStack_54 [20];
  undefined1 auStack_40 [12];
  int *piStack_34;
  code *local_30;
  int *piStack_2c;
  undefined4 local_28;
  
  piVar6 = (int *)0x0;
  piStack_34 = param_1;
  local_30 = param_2;
  piStack_2c = param_3;
  local_28 = param_4;
  FUN_00128164(param_3);
  FUN_0010e728(auStack_68,param_7);
  iVar1 = FUN_0015e6b4(auStack_68);
  if (iVar1 != 0) {
    (**(code **)(*param_3 + 0xd4))(auStack_80,param_3);
    (**(code **)(*param_3 + 0xd4))(local_8c,param_3);
    (**(code **)(*param_3 + 0xd4))(local_98,param_3);
    FUN_0010f620(auStack_54,local_98[0] & 0xffff,local_8c[0] >> 0x10,local_7c,local_28);
    iVar1 = FUN_001d7998(param_1 + 1,auStack_54);
    if (iVar1 == 0) {
      uVar7 = *param_5;
      if (*param_6 != 0) {
        uVar2 = *param_6 & 0xe000000;
        if (uVar2 == 0) {
          uVar7 = uVar7 | 0x20000;
        }
        else if (uVar2 == 0x2000000) {
          uVar7 = uVar7 | 0x10000;
        }
        else if (uVar2 == 0x4000000) {
          uVar7 = uVar7 | 0x8000;
        }
      }
      if (param_7 == 0) {
        (**(code **)(*param_3 + 0xf4))(auStack_40,param_3);
        uVar3 = FUN_0015e6f4(auStack_40);
      }
      else {
        uVar3 = FUN_0015e6f4(auStack_68);
      }
      uVar2 = *param_6;
      if (*(int *)(*param_1 + 0x65c) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 2;
      }
      uVar4 = (**(code **)(*param_3 + 0x108))(param_3);
      (**(code **)(*param_3 + 0xd4))(auStack_74,param_3);
      (**(code **)(*param_3 + 0xd4))(local_60,param_3);
      piVar6 = (int *)(*local_30)(param_1,local_60[0] >> 0x10,local_70,local_28,uVar4,uVar7,
                                  uVar2 | uVar5 | 1,uVar3);
      if (param_7 == 0) {
        FUN_0010e7f4(auStack_40);
      }
      if (piVar6 != (int *)0x0) {
        iVar1 = FUN_001be020(param_1 + 1,piVar6);
        if (iVar1 == 0) {
          (**(code **)(*piVar6 + 0x3c))(piVar6);
          piVar6 = (int *)0x0;
        }
        else {
          FUN_00128fd0(piVar6,param_3);
        }
      }
    }
  }
  FUN_0010e7f4(auStack_68);
  return piVar6;
}

