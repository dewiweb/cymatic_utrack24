// rea decompile_all
// name: FUN_000787b0
// address: 0x787b0
// body: available
// range: 0x787b0-0x78a8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000787b0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 int param_6)

{
  bool bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined2 uStack_6a;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_48 [20];
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  
  uVar4 = *(uint *)(param_4 + 4);
  uStack_74 = uVar4 >> 0x18;
  local_78 = (uVar4 & 0xffffff) >> 0x10;
  iStack_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  FUN_000028d8(auStack_48,s__u__u__u__u_00078a8c,uVar4 & 0xff,(uVar4 & 0xffff) >> 8);
  piVar5 = (int *)FUN_0006a6e4();
  (**(code **)(*piVar5 + 0x18))(piVar5,param_2);
  bVar1 = false;
  FUN_001a0700(param_1 + 0x124);
  iVar6 = *(int *)(*(int *)(param_1 + 0x184) + 8);
  if (iVar6 != *(int *)(param_1 + 0x184)) {
    do {
      if (*(int *)(iVar6 + 0x14) == param_6) {
        FUN_001da458(iVar6 + 0x1c,auStack_48);
        bVar1 = true;
        break;
      }
      iVar9 = *(int *)(iVar6 + 0xc);
      if (*(int *)(iVar6 + 0xc) == 0) {
        for (iVar9 = *(int *)(iVar6 + 4); iVar6 == *(int *)(iVar9 + 0xc);
            iVar9 = *(int *)(iVar9 + 4)) {
          iVar6 = iVar9;
        }
        if (*(int *)(iVar6 + 0xc) != iVar9) {
          iVar6 = iVar9;
        }
      }
      else {
        do {
          iVar6 = iVar9;
          iVar9 = *(int *)(iVar6 + 8);
        } while (*(int *)(iVar6 + 8) != 0);
      }
    } while (iVar6 != *(int *)(param_1 + 0x184));
  }
  FUN_001a0d18();
  if (bVar1) {
    FUN_0007a5b8(param_1);
    return;
  }
  iVar9 = 0;
  FUN_001a0700(param_1 + 0x124);
  iVar6 = *(int *)(*(int *)(param_1 + 0x1a0) + 8);
  if (iVar6 != *(int *)(param_1 + 0x1a0)) {
    do {
      if (*(int *)(iVar6 + 0x14) == param_6) {
        FUN_001da458(iVar6 + 0x20,auStack_48);
        iVar9 = iVar6 + 0x14;
        break;
      }
      iVar8 = *(int *)(iVar6 + 0xc);
      if (*(int *)(iVar6 + 0xc) == 0) {
        for (iVar8 = *(int *)(iVar6 + 4); iVar6 == *(int *)(iVar8 + 0xc);
            iVar8 = *(int *)(iVar8 + 4)) {
          iVar6 = iVar8;
        }
        if (*(int *)(iVar6 + 0xc) != iVar8) {
          iVar6 = iVar8;
        }
      }
      else {
        do {
          iVar6 = iVar8;
          iVar8 = *(int *)(iVar6 + 8);
        } while (*(int *)(iVar6 + 8) != 0);
      }
    } while (iVar6 != *(int *)(param_1 + 0x1a0));
  }
  FUN_001a0d18(param_1 + 0x124);
  if (iVar9 == 0) {
    return;
  }
  FUN_00078f1c(&local_78,param_1,local_28,iVar9);
  FUN_001a0700(param_1 + 0x124);
  uVar7 = FUN_0017bfc0();
  *(undefined4 *)(iVar9 + 4) = uVar7;
  if ((char)local_78 == '\0') {
    FUN_000a62d4(iVar9);
  }
  else {
    uVar3 = FUN_00153704(&local_78);
    *(undefined2 *)(iVar9 + 0x12) = uVar3;
    FUN_001da458(iVar9 + 0x14,uStack_68);
    *(undefined2 *)(iVar9 + 0x18) = uStack_6a;
    uVar7 = FUN_001536d0(&local_78);
    FUN_001da458(iVar9 + 0x1c,uVar7);
    *(uint *)(iVar9 + 0x20) = uStack_74;
    uVar2 = FUN_001536ec(&local_78);
    *(undefined1 *)(iVar9 + 0x24) = uVar2;
    *(undefined1 *)(iVar9 + 0x25) = uStack_6c;
    *(undefined4 *)(iVar9 + 0x28) = uStack_70;
    *(undefined1 *)(iVar9 + 0x2c) = local_78._3_1_;
    FUN_001da458(iVar9 + 0x30,uStack_64);
    FUN_0007a620(param_1,iVar9 + 8);
  }
  FUN_001a0d18(param_1 + 0x124);
  FUN_00056e64(&local_78);
  return;
}

