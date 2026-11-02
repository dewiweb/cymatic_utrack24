// rea decompile_all
// name: FUN_000e1aac
// address: 0xe1aac
// body: available
// range: 0xe1aac-0xe1c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000e1b4e) */

undefined4 FUN_000e1aac(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint unaff_r5;
  undefined1 auStack_50 [16];
  uint local_40;
  undefined4 local_38;
  int local_34;
  undefined1 auStack_30 [20];
  int *piStack_1c;
  undefined4 local_18;
  
  piStack_1c = param_1;
  local_18 = param_2;
  iVar1 = FUN_00160bbc(param_2);
  if (iVar1 == 0) {
    local_38 = DAT_000e1c84;
    FUN_001a0700();
    local_40 = unaff_r5 & 0xffffff00 | 1;
    local_34 = param_1[1];
    uVar2 = FUN_001b987c(auStack_30,0);
    FUN_0014f7b8(auStack_50,uVar2);
    FUN_001b98a8(auStack_30);
    uVar2 = DAT_000e1c84;
    iVar1 = 0;
    if (*param_1 != 0) {
      FUN_001a0700(DAT_000e1c84);
      iVar3 = (**(code **)(*(int *)*param_1 + 0x10))();
      FUN_001a0d18(uVar2);
      if (0 < iVar3) {
        do {
          uVar2 = DAT_000e1c84;
          if (*param_1 != 0) {
            FUN_001a0700(DAT_000e1c84);
            iVar3 = (**(code **)(*(int *)*param_1 + 0x10))();
            if ((iVar1 < iVar3) && (-1 < iVar1)) {
              param_1[1] = iVar1;
            }
            FUN_001a0d18(uVar2);
          }
          uVar2 = DAT_000e1c84;
          if (*param_1 == 0) {
            FUN_0014f588(auStack_50);
          }
          else {
            FUN_001a0700(DAT_000e1c84);
            (**(code **)(*(int *)*param_1 + 0x14))((int *)*param_1,param_1[1],auStack_50);
            FUN_001a0d18(uVar2);
          }
          iVar3 = FUN_00160a14(auStack_50,local_18);
          uVar2 = DAT_000e1c84;
          if (iVar3 != 0) {
            if (*param_1 != 0) {
              FUN_001a0700(DAT_000e1c84);
              iVar1 = (**(code **)(*(int *)*param_1 + 0x40))((int *)*param_1,param_1[1]);
              if (iVar1 != 0) {
                FUN_001a0700(uVar2);
                *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + 1;
                FUN_001a0d18(uVar2);
                FUN_000b6094(*param_1);
                *param_1 = iVar1;
                FUN_001a0d18(uVar2);
                uVar2 = 1;
                goto LAB_000e1bfe;
              }
              FUN_001a0d18(uVar2);
            }
            uVar2 = 0;
LAB_000e1bfe:
            FUN_0014f868(auStack_50);
            if ((local_40 & 0xff) != 0) {
              FUN_001a0d18(local_38);
            }
            return uVar2;
          }
          iVar1 = iVar1 + 1;
          iVar3 = 0;
          if (*param_1 != 0) {
            FUN_001a0700(DAT_000e1c84);
            iVar3 = (**(code **)(*(int *)*param_1 + 0x10))();
            FUN_001a0d18(uVar2);
          }
        } while (iVar1 < iVar3);
      }
    }
    FUN_000e1d54(param_1,local_34);
    FUN_0014f868(auStack_50);
    if ((local_40 & 0xff) != 0) {
      FUN_001a0d18(local_38);
    }
  }
  return 0;
}

